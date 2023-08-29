import elftools.dwarf.dwarfinfo
import isystem.connect as ic
import pytest
import json
import time
import os
import zlib
import numpy
from typing import Tuple, List
from elftools.elf.elffile import ELFFile
from pathlib import Path
import re
from jsonschema import validate
from enum import Enum
from subprocess import Popen


def cpp_int_to_py_int(number: int, bits: int) -> int:
    """
    Convert a Cpp integer from SDK to a Python integer.
    Example: 0xFFFFFFFFABCEDFAB to 0xABCEDFAB.
    :param int number: number to be converted
    :param int bits: length of number in bits
    :return int: converted number
    """
    return number & ((1 << bits) - 1)


def parse_reference_comment(comment: str, file_path: str) -> int:
    """
    Function finds reference comment with format "tqp: {comment}" and
    returns its line number in the specified file.
    :param comment: searched reference comment
    :param file_path: file with the reference comment
    :return int: line number of the reference comment
    """
    try:
        with open(file_path) as file:
            for lineIndex, line in enumerate(file):
                # This regular expression matches any string that contains
                # the characters "tqp:" preceded by zero or more spaces,
                # and ends with the string "{comment}".
                if re.match(f".*tqp: *{comment}", line, re.IGNORECASE) is not None:
                    return lineIndex + 1

            # If the reference comment is not found raise an error
            raise ValueError(
                f"Cannot find reference comment {comment} in file {file_path}.")

    except ValueError:
        raise
    except Exception as err:
        raise Exception(
            f"Unexpected error occurred while parsing"
            f"reference comment {comment} in file {file_path}.\n{err}")


def twos_complement(value: int, bits: int) -> int:
    """
    Compute the 2's complement of an integer value.
    :param int value: number to convert
    :param int bits: length of the value in bits
    :return int: converted number
    """
    if (value & (1 << (
            bits - 1))) != 0:  # if sign bit is set e.g., 8bit: 128-255
        value = value - (1 << bits)  # compute negative value
    return value


class TestTQP:
    # isystem.connect Controllers
    connMgr: ic.ConnectionMgr = None
    dataCtrl: ic.CDataController = None
    execCtrl: ic.CExecutionController = None
    bpCtrl: ic.CBreakpointController = None
    addrCtrl: ic.CAddressController = None
    ideCtrl: ic.CIDEController = None
    loadCtrl: ic.CLoaderController = None
    # Json configuration file
    json_conf: json = None

    # CONSTANTS
    ACCESS_FLAGS = ic.IConnectDebug.fMonitor  # Default access flags
    TIMEOUT_MS = 1000
    BYTES_PER_MAU = 1
    SMALL_DELAY_S = 0.5
    REFERENCE_VALUE_AB = 0xAB
    REFERENCE_VALUE_CD = 0xCD
    FLASH_SEED = 0

    # CONSTANTS FILE NAMES
    CONFIG_JSON_FILE_NAME = "config.json"
    CONFIG_SCHEMA_FILE_NAME = "config_schema.json"
    TQP_FILE_NAME = "TQP.c"
    TQP_ASM_FILE_NAME = "TQP_Asm.s"
    FULL_DOWNLOAD_FILE_NAME = "fullDownloadFile.s37"

    # CONSTANTS FROM REFERENCE APPLICATION
    REF_COMMENT_STEP = "step"
    REF_COMMENT_RETURN = "return"
    REF_COMMENT_BREAKPOINT_X = "breakpoint"
    REF_COMMENT_SOURCE_LINE_DEBUG_INFORMATION = "sourceLineDebugInformation"
    COUNTER_INCREASE_C = "counterIncrease"
    MAIN_LOOP_COUNTER_C = "mainLoopCounter"
    IS_TEST_REGISTER_C = "isTestRegister"
    IS_TEST_STEP_C = "isTestStep"
    IS_TEST_BREAKPOINT = "isTestBreakpoints"
    IS_TEST_SYMBOL_DEBUG_INFORMATION_C = "isTestSymbolDebugInformation"
    TEST_REGISTER_C = "testRegister"
    TEST_STEP_C = "testStep"
    TEST_BREAKPOINT_C = "testBreakpoints"
    TEST_SYMBOL_DEBUG_INFORMATION_C = "testLocalSymbolDebugInformation"

    @pytest.fixture(scope="module", autouse=True)
    def setup_module(self, pytestconfig):
        """
        Runs only once per test module.
        It opens conf.json file and checks its contents with JSON Schema,
        it also opens WinIDEA
        establishes a connection to the Bluebox,
        downloads code to the target and
        initializes isystem.connect controllers.
        Uses "Workspace_location", "WinIDEA->Location"
        and "WinIDEA->Id" json entries.
        """

        # Open json configuration file and its schema then read their contents.
        try:
            TestTQP.CONFIG_JSON_FILE_NAME = pytestconfig.getoption('conf')
            with open(TestTQP.CONFIG_JSON_FILE_NAME, "r", encoding="utf-8") as json_conf_file:
                TestTQP.json_conf = json.load(json_conf_file)

            with open(TestTQP.CONFIG_SCHEMA_FILE_NAME, "r", encoding="utf-8") as jsonConfSchemaFile:
                json_schema_conf = json.load(jsonConfSchemaFile)
        except Exception as err:
            raise Exception(
                f"Unexpected error occurred while opening json file"
                f"{TestTQP.CONFIG_JSON_FILE_NAME} or"
                f"{TestTQP.CONFIG_SCHEMA_FILE_NAME}.\n{err}")

        # Perform a json configuration file sanity check
        validate(TestTQP.json_conf, json_schema_conf)

        try:
            TestTQP.connMgr = ic.ConnectionMgr()
            TestTQP.dataCtrl = ic.CDataController(TestTQP.connMgr)
            TestTQP.execCtrl = ic.CExecutionController(TestTQP.connMgr)
            TestTQP.bpCtrl = ic.CBreakpointController(TestTQP.connMgr)
            TestTQP.addrCtrl = ic.CAddressController(TestTQP.connMgr)
            TestTQP.ideCtrl = ic.CIDEController(TestTQP.connMgr)
            TestTQP.loadCtrl = ic.CLoaderController(TestTQP.connMgr)

            if TestTQP.json_conf['WinIDEA']['Location'] != "":
                Popen([TestTQP.json_conf['WinIDEA']['Location'],
                       TestTQP.json_conf['Workspace_location'],
                       f"/ID:{TestTQP.json_conf['WinIDEA']['Id']}"])

            connection_config = ic.CConnectionConfig()
            connection_config.instanceId(TestTQP.json_conf['WinIDEA']['Id'])
            connection_config.workspace(TestTQP.json_conf['Workspace_location'])
            TestTQP.connMgr.connect(connection_config)

            TestTQP.loadCtrl.download()

            # Remove any starting breakpoints, set by the user before testing
            TestTQP.bpCtrl.remove_all_BPs()

            # Default starting point
            TestTQP.execCtrl.runUntilFunction(TestTQP.COUNTER_INCREASE_C,
                                              ic.CExecutionController.TOUT_10s,
                                              True, True)
        except Exception as err:
            raise Exception(
                f"Unexpected error occurred while performing connection.\n{err}")

        yield

    @pytest.fixture(autouse=True)
    def setup_function(self, request) -> None:
        """
        Runs at the beginning of each test.
        It runs the target to the test function,
        specified as part of the request parameter of pytest fixture.
        """
        try:
            if hasattr(request, 'param'):
                TestTQP.dataCtrl.modify(TestTQP.ACCESS_FLAGS, request.param[0], "1")
                TestTQP.execCtrl.runUntilFunction(request.param[1],
                                                  ic.CExecutionController.TOUT_1s,
                                                  True, True)
        except Exception as err:
            raise Exception(
                f"Unexpected error occurred performing test setup.\n{err}")

        yield

    @pytest.fixture(autouse=True)
    def teardown_function(self, request) -> None:
        """
        Runs at the end of each test.
        It cleans up any remaining breakpoints and
        runs the target to the default point in code
        (function counterIncrease).
        """
        yield
        try:
            # In case the target went into running state after a possible error, stop the target
            if TestTQP.execCtrl.getCPUStatus(True).isRunning():
                TestTQP.execCtrl.stop()
                TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)

            # Clean any remaining breakpoints
            TestTQP.bpCtrl.remove_all_BPs()

            if hasattr(request, 'param'):
                TestTQP.dataCtrl.modify(TestTQP.ACCESS_FLAGS, request.param, "0")

            # This makes sure tests begin and end from the same point in the code
            TestTQP.execCtrl.runUntilFunction(TestTQP.COUNTER_INCREASE_C,
                                              ic.CExecutionController.TOUT_10s,
                                              True, True)

        except Exception as err:
            raise Exception(f"Unexpected error occurred while performing test teardown.\n{err}")

    @staticmethod
    def get_variable_int_value(variable_name: str) -> int:
        """
        Function for fetching integer value of specified variable.
        :param str variable_name: name of the variable
        :return int: variable value as an integer
        """
        variable_value = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, variable_name).getInt()
        return variable_value

    @staticmethod
    def get_file_path(file_name: str, workspace_location: str) -> str:
        """
        Function extracts the full path to the specified file
        from the download elf file. This is done by opening contents
        of the elf file and using DWARF debug information.
        :param str file_name: name of the searched file
        :param str workspace_location: path to the WinIDEA workspace
        :return str: full path to the searched file
        """
        try:
            # Elf path is a combination of relative path to JSON config file,
            # workspace directory path and
            # relative path to default download file
            elf_path = os.path.join(
                os.path.dirname(TestTQP.CONFIG_JSON_FILE_NAME),
                os.path.dirname(workspace_location),
                TestTQP.ideCtrl.getDefaultDownloadFile())

            with open(elf_path, 'rb') as f:
                elffile = ELFFile(f)

                if not elffile.has_dwarf_info():
                    raise RuntimeError(f'File {elf_path} has no DWARF info.')

                # DWARFInfo context object
                dwarf_info: elftools.dwarf.dwarfinfo.DWARFInfo = elffile.get_dwarf_info()

                # Iterate through compile units in the .debug_info section
                for compile_unit in dwarf_info.iter_CUs():

                    # The first DIE (the debugging information entry)
                    # in each compile unit describes it
                    top_die = compile_unit.get_top_DIE()

                    # We're interested in the filename
                    file_path = Path(top_die.get_full_path()).as_posix()
                    if file_path.endswith(file_name):
                        return file_path

                raise RuntimeError(
                    f'The source file path of {file_name}'
                    f'could not be found in download ELF file {elf_path}.')

        except RuntimeError:
            raise
        except Exception as err:
            raise Exception(
                f"Unexpected error occurred while fetching path of the {file_name} file.\n{err}")

    @staticmethod
    def write_to_register(register_value: int, register_name: str, register_size: int) -> None:
        """
        Write a specified value to the specified register.
        :param int register_value: value to be written to the register
        :param str register_name: name of the register
        :param int register_size: size of the register in bits
        """
        try:
            s_type_value = ic.SType()
            s_type_value.m_byType = ic.SType.tUnsigned
            s_type_value.m_byBitSize = register_size
            c_value = ic.CValueType(s_type_value, register_value)
            TestTQP.dataCtrl.writeRegister(TestTQP.ACCESS_FLAGS, register_name, c_value)

        except Exception as err:
            raise Exception(
                f"Unexpected error occurred while writing {register_value}"
                f"to the register {register_name} with size {register_size} bit.\n{err}")

    @staticmethod
    def read_from_register(register_name: str) -> int:
        """
        Read value of the register.
        :param str register_name: name of the register
        :return long: read value
        """
        return TestTQP.dataCtrl.readRegister(TestTQP.ACCESS_FLAGS, register_name).getLong()

    def test_run_stop(self) -> None:
        """
        This test verifies that the run and stop functionalities are working.
        The test passes if the variable mainLoopCounter has changed
        during target running and if the target is successfully stopped.

        Test steps:
            - retrieve initial value of mainLoopCounter
            - run the target
            - wait for enough time for slower targets to make at least one loop
              and faster targets not to loop around the counter
            - try to stop the target and retrieve the value of mainLoopCounter
            - compare saved values
        """
        starting_value = self.get_variable_int_value(TestTQP.MAIN_LOOP_COUNTER_C)

        # Testing Run functionality
        TestTQP.execCtrl.run()
        time.sleep(TestTQP.SMALL_DELAY_S)

        # Testing Stop functionality
        TestTQP.execCtrl.stop()
        is_stopped = TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS)
        assert is_stopped, "The target did not stop after the stop command."

        value_after_run = self.get_variable_int_value(TestTQP.MAIN_LOOP_COUNTER_C)

        assert starting_value != value_after_run,\
            "The target did not start running after the run command."

    def test_cpu_status(self) -> None:
        """
        This test verifies that the reading
        of CPU status (running and stopped) functionality is working.
        The test passes if the CPU status equals "running"
        when the target is running and CPU status equals "stopped"
        when the target is stopped.

        Test steps:
            - run the target and check CPU status
            - stop the target and check CPU status
        """
        TestTQP.execCtrl.run()
        cpu_status_run = TestTQP.execCtrl.getCPUStatus(True)

        TestTQP.execCtrl.stop()
        TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)
        cpu_status_stop = TestTQP.execCtrl.getCPUStatus(True)

        assert cpu_status_run.isRunning(), "Incorrect CPU status while running."
        assert cpu_status_stop.isStopped(), "Incorrect CPU status while stopped."

    @staticmethod
    def ram_read_write(access_flags: int) -> Tuple[int, int]:
        """
        Function performs read and write operations of reference numbers on ram
        and returns the acquired results.
        :param int access_flags: way of accessing data in ram
            (with or without real time access)
        :return Tuple[int, int]: read value of a test variable and
            read back written value of a test variable
        """
        written_address: int = None
        written_memory_area: int = None
        num_bytes: int = None
        try:
            # Read test
            read_variable = TestTQP.addrCtrl.getSymbolInfo(access_flags, 'testVarRead')
            read_memory_area = read_variable.getMemArea()
            read_address = read_variable.getAddress()
            num_bytes = 1
            read_value = TestTQP.dataCtrl.readMemory(access_flags,
                                                     read_memory_area,
                                                     read_address,
                                                     num_bytes,
                                                     TestTQP.BYTES_PER_MAU)[0]

            # Write test
            written_variable = TestTQP.addrCtrl.getSymbolInfo(access_flags, 'testVarWrite')
            written_memory_area = written_variable.getMemArea()
            written_address = written_variable.getAddress()
            written_data = ic.VectorBYTE([TestTQP.REFERENCE_VALUE_CD])
            TestTQP.dataCtrl.writeMemoryNAI(access_flags,
                                            written_memory_area,
                                            written_address,
                                            num_bytes,
                                            TestTQP.BYTES_PER_MAU,
                                            written_data)

            written_value = TestTQP.dataCtrl.readMemory(access_flags,
                                                        written_memory_area,
                                                        written_address,
                                                        num_bytes,
                                                        TestTQP.BYTES_PER_MAU)[0]

        finally:
            if written_address is not None and \
                    written_memory_area is not None and \
                    num_bytes is not None:
                # Restore the value of the testVarWrite variable
                TestTQP.dataCtrl.writeMemoryNAI(access_flags,
                                                written_memory_area,
                                                written_address,
                                                num_bytes,
                                                TestTQP.BYTES_PER_MAU,
                                                ic.VectorBYTE([0x00]))

        return read_value, written_value

    def test_ram_read_write(self) -> None:
        """
        This test verifies that read and write operations to RAM are working,
        by reading and writing different reference values.
        The test passes if the reference value 0xAB is read from the RAM and
        the reference value 0xCD is written to the RAM.

        Test steps:
            - get the required information about the read test variable
            - read variable testVarRead, with value 0xAB, directly from the RAM
            - get the required information about the written test variable
            - write reference value 0xCD to the variable testVarWrite,
              directly to the RAM
            - check if the reference value 0xAB is read and 0xCD is written
        """
        access_flags = ic.IConnectDebug.fMonitor

        read_value, written_value = self.ram_read_write(access_flags)

        assert read_value == TestTQP.REFERENCE_VALUE_AB,\
            f"The value read should be {TestTQP.REFERENCE_VALUE_AB}, instead of {read_value}."
        assert written_value == TestTQP.REFERENCE_VALUE_CD,\
            f"The value written should be {TestTQP.REFERENCE_VALUE_CD}," \
            f"instead of {written_value}."

    def test_ram_read_write_with_real_time_access(self) -> None:
        """
        This test verifies that read and write operations with real time access
        to RAM are working, by reading and writing different reference values.
        The test passes if the reference value 0xAB is read from the RAM
        and the reference value 0xCD is written to the RAM.
        The test is skipped if real time access is not supported.
        It uses "Is_real_time_access_available" json entry.

        Test steps:
            - run the target
            - get the required information about the read test variable
            - read variable testVarRead, with value 0xAB, directly from the RAM
            - get the required information about the written test variable
            - write reference value 0xCD to the variable testVarWrite,
              directly to the RAM
            - check if the reference value 0xAB is read and 0xCD is written
        """
        if not TestTQP.json_conf['Is_real_time_access_available']:
            pytest.skip("RAM read/write with real time access not supported.")

        access_flags = ic.IConnectDebug.fRealTime
        TestTQP.execCtrl.run()

        read_value, written_value = self.ram_read_write(access_flags)

        TestTQP.execCtrl.stop()
        TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)

        assert read_value == TestTQP.REFERENCE_VALUE_AB,\
            f"The value read should be {TestTQP.REFERENCE_VALUE_AB}, instead of {read_value}."
        assert written_value == TestTQP.REFERENCE_VALUE_CD,\
            f"The value written should be {TestTQP.REFERENCE_VALUE_CD}," \
            f"instead of {written_value}."

    @pytest.mark.parametrize('setup_function',
                             [(IS_TEST_REGISTER_C, TEST_REGISTER_C)],
                             indirect=True)
    @pytest.mark.parametrize('teardown_function', [IS_TEST_REGISTER_C], indirect=True)
    def test_register_read_write(self) -> None:
        """
        This test verifies that read and write operations
        to the core registers are working.
        The test passes if the reference value is correctly read and written.
        The user-defined assembly file is required.
        It uses "Test_register", "Test_register_size" and
        "Workspace_location" json entries.

        Test steps:
            - run until the beginning of user-defined assembly function
              (reference comment "step")
            - read the initial value of the test register
            - run until the end of user-defined assembly function,
              function writes 0xAB to the test register
              (reference comment "return")
            - read the value of the test register
            - write reference value that is also read back
            - check if the correct values are read and written
              to the test register
            - restore the test register to the original state
        """
        original_value: int = None
        test_reg_name: str = None
        test_reg_size: int = None
        try:
            test_reg_name = TestTQP.json_conf['Test_register']['Name']
            test_reg_size = TestTQP.json_conf['Test_register']['Size']
            tqp_asm_file_path = self.get_file_path(TestTQP.TQP_ASM_FILE_NAME,
                                                   TestTQP.json_conf['Workspace_location'])

            # Move into the beginning of testRegistersAsm() function
            # (reference comment "step")
            step_line_number = parse_reference_comment(TestTQP.REF_COMMENT_STEP, tqp_asm_file_path)

            breakpoint_instance = TestTQP.bpCtrl.set_BP_source(step_line_number, tqp_asm_file_path)
            TestTQP.execCtrl.run()
            TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)
            TestTQP.bpCtrl.remove_BP(breakpoint_instance)
            # Read the initial value of the test register
            original_value = self.read_from_register(test_reg_name)

            # Run until the end of testRegistersAsm() function
            # (reference comment "return")
            return_line_number = parse_reference_comment(TestTQP.REF_COMMENT_RETURN,
                                                         tqp_asm_file_path)
            TestTQP.bpCtrl.set_BP_source(return_line_number, tqp_asm_file_path)
            TestTQP.execCtrl.run()
            TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)

            # Read test
            read_value = self.read_from_register(test_reg_name)

            # Write test with reference value
            reference_value = 0x1234567890ABCDEF >> (64 - test_reg_size)
            self.write_to_register(reference_value, test_reg_name, test_reg_size)

            written_value = self.read_from_register(test_reg_name)

            assert read_value == TestTQP.REFERENCE_VALUE_AB,\
                f"The value read should be {TestTQP.REFERENCE_VALUE_AB}, instead of {read_value}."
            assert written_value == reference_value,\
                f"The value written should be {reference_value}, instead of {written_value}."

        finally:
            # Restore to the original value
            if original_value is not None and \
                    test_reg_size is not None and \
                    test_reg_name is not None:
                self.write_to_register(original_value, test_reg_name, test_reg_size)

    @pytest.mark.parametrize('setup_function', [(IS_TEST_STEP_C, TEST_STEP_C)], indirect=True)
    @pytest.mark.parametrize('teardown_function', [IS_TEST_STEP_C], indirect=True)
    def test_step(self) -> None:
        """
        This test verifies that the instruction step is working.
        The test passes if the target performs an instruction step and
        does not go into a running state.
        The user-defined assembly file is required.
        It uses "Test_register", "Test_register_size" and
        "Workspace_location" json entries.

        Test steps:
            - run to user-defined assembly function
            - move to line where 0x12 is written to the test register
              (reference comment "step")
            - make an instruction step
            - check whether the test register has a value of 0x12
        """
        original_value: int = None
        test_reg_name: str = None
        test_reg_size: int = None
        try:
            test_reg_name = TestTQP.json_conf['Test_register']['Name']
            test_reg_size = TestTQP.json_conf['Test_register']['Size']
            tqp_asm_file_path = self.get_file_path(TestTQP.TQP_ASM_FILE_NAME,
                                                   TestTQP.json_conf['Workspace_location'])

            original_value = self.read_from_register(test_reg_name)

            # Move into testRegistersAsm() function (reference comment "step")
            step_line_number = parse_reference_comment(TestTQP.REF_COMMENT_STEP, tqp_asm_file_path)
            breakpoint_step = TestTQP.bpCtrl.set_BP_source(step_line_number, tqp_asm_file_path)
            TestTQP.execCtrl.run()
            TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)
            TestTQP.bpCtrl.remove_BP(breakpoint_step)
            # Set a breakpoint at the end of the assembly function
            # (reference comment "return")
            # in case the target goes into a running state
            return_line_number = parse_reference_comment(TestTQP.REF_COMMENT_RETURN,
                                                         tqp_asm_file_path)
            TestTQP.bpCtrl.set_BP_source(return_line_number, tqp_asm_file_path)

            # Tested instruction step
            TestTQP.execCtrl.stepInst(ic.CExecutionController.TOUT_1s, True)

            # Wait if the target went into running state after an instruction step
            TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)

            value_after_step = self.read_from_register(test_reg_name)

            assert value_after_step == 0x12,\
                f"The target went into running mode after instruction step."

        finally:
            # Restore the register to original value
            if original_value is not None and \
                    test_reg_size is not None and \
                    test_reg_name is not None:
                self.write_to_register(original_value, test_reg_name, test_reg_size)

    def check_breakpoints_counter(self, number_of_hardware_breakpoints: int) -> None:
        """
        Function iterates through previously set breakpoints and
        checks breakpointsCounter value.
        It throws error if a breakpoint was placed on the incorrect points in code.
        :param int number_of_hardware_breakpoints: number of available hardware breakpoints
        """
        try:
            for breakpoint_id in range(number_of_hardware_breakpoints):
                TestTQP.execCtrl.run()
                TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)
                breakpoints_counter_value = self.get_variable_int_value('breakpointsCounter')
                if breakpoints_counter_value != breakpoint_id:
                    raise RuntimeError(f"Wrong stopping point for breakpoint {breakpoint_id + 1}")

        except RuntimeError:
            raise

    @pytest.mark.parametrize('setup_function',
                             [(IS_TEST_BREAKPOINT, TEST_BREAKPOINT_C)],
                             indirect=True)
    @pytest.mark.parametrize('teardown_function', [IS_TEST_BREAKPOINT], indirect=True)
    def test_breakpoints(self) -> None:
        """
        This test verifies correct working of hardware breakpoints.
        The test passes if all the available hardware breakpoints are working,
        correctly positioned and do not get changed during reset.
        It uses "Num_hw_breakpoints" and "Workspace_location" json entries.

        Test steps:
            - disable the hardware breakpoint reservation for high-level debugging
            - enable the use of hardware breakpoints
            - test the breakpoints before and after the reset
            - test if setting one more breakpoint than available causes an error
            - restore the hardware breakpoint settings
        """
        reserve_breakpoint_setting: bool = None
        type_breakpoint_setting: bool = None
        try:
            num_of_hw_breakpoints = TestTQP.json_conf['Num_hw_breakpoints']
            tqp_file_path = self.get_file_path(TestTQP.TQP_FILE_NAME,
                                               TestTQP.json_conf['Workspace_location'])

            # Change settings for breakpoints and save old settings
            # Disable reserved breakpoint
            reserve_breakpoint_setting = TestTQP.ideCtrl.getOptionStr('/IDE/Debug.Debugging.ReserveBP')
            TestTQP.ideCtrl.setOption('/IDE/Debug.Debugging.ReserveBP', 'false')

            # Use hardware breakpoints
            type_breakpoint_setting = TestTQP.ideCtrl.getOptionStr('/iOPEN/MC.Cores[0].Common.UseSWBPs')
            TestTQP.ideCtrl.setOption('/iOPEN/MC.Cores[0].Common.UseSWBPs', 'false')

            # Set maximum number of breakpoints
            breakpoints = []
            for breakpoint_id in range(1, num_of_hw_breakpoints + 1):
                breakpoint_line_number = parse_reference_comment(f'{TestTQP.REF_COMMENT_BREAKPOINT_X} {breakpoint_id}', tqp_file_path)
                breakpoints.append(TestTQP.bpCtrl.set_BP_source(breakpoint_line_number,
                                                                tqp_file_path))

            self.check_breakpoints_counter(num_of_hw_breakpoints)

            # Perform reset
            TestTQP.loadCtrl.download()
            TestTQP.bpCtrl.remove_BP(breakpoints[0])  # Remove one breakpoint for runUntilFunction
            TestTQP.execCtrl.runUntilFunction(TestTQP.COUNTER_INCREASE_C,
                                              ic.CExecutionController.TOUT_1s,
                                              True, True)
            breakpoint_line_number = parse_reference_comment(f'{TestTQP.REF_COMMENT_BREAKPOINT_X} 1', tqp_file_path)
            # Restore the removed breakpoint
            TestTQP.bpCtrl.set_BP_source(breakpoint_line_number, tqp_file_path)
            TestTQP.dataCtrl.modify(TestTQP.ACCESS_FLAGS, TestTQP.IS_TEST_BREAKPOINT, "1")

            # Test after reset
            self.check_breakpoints_counter(num_of_hw_breakpoints)

            # Test if setting one more breakpoint causes an exception
            try:
                breakpoint_line_number = parse_reference_comment(f'{TestTQP.REF_COMMENT_BREAKPOINT_X} {num_of_hw_breakpoints + 1}', tqp_file_path)
                TestTQP.bpCtrl.set_BP_source(breakpoint_line_number, tqp_file_path)
                raise Exception(
                    f"Setting HW BP {num_of_hw_breakpoints + 1}"
                    f"should have failed with an exception,"
                    f" only {num_of_hw_breakpoints} should be available.")
            except OSError:
                pass  # Expected exception

            assert True

        finally:
            # Restore settings for breakpoints
            if reserve_breakpoint_setting is not None:
                TestTQP.ideCtrl.setOption('/IDE/Debug.Debugging.ReserveBP', reserve_breakpoint_setting)
            if type_breakpoint_setting is not None:
                TestTQP.ideCtrl.setOption('/iOPEN/MC.Cores[0].Common.UseSWBPs', type_breakpoint_setting)

    def test_hot_attach(self) -> None:
        """
        This test verifies the correct functionality of
        software triggered hot attach and hot detach.
        The test passes if the hot attach causes a cleanup of breakpoints and
        switching the target to a running state, but does not reset the target.
        The test is skipped if hot attach is not supported.
        It uses "Is_hot_attach_available" json entry.

        Test steps:
            - set testHotAttach variable to 1
            - retrieve initial value of mainLoopCounter
            - set a breakpoints
            - perform hot detach
            - wait for some time
            - perform hot attach
            - try running until function counterIncrease
            - retrieve value of mainLoopCounter and testHotAttach
            - compare the difference in value of mailLoopCounter and
              check the value of testHotAttach
        """
        if not TestTQP.json_conf['Is_hot_attach_available']:
            pytest.skip("Hot attach not supported.")

        TestTQP.dataCtrl.modify(TestTQP.ACCESS_FLAGS, 'testHotAttach', "1")

        value_counter_before = self.get_variable_int_value(TestTQP.MAIN_LOOP_COUNTER_C)
        hot_attach_breakpoint = TestTQP.bpCtrl.set_BP_symbol(TestTQP.COUNTER_INCREASE_C)
        TestTQP.execCtrl.hotDetach()
        time.sleep(TestTQP.SMALL_DELAY_S)
        TestTQP.execCtrl.hotAttach()
        TestTQP.execCtrl.waitUntilStopped(TestTQP.TIMEOUT_MS, isThrow=True)
        TestTQP.bpCtrl.remove_BP(hot_attach_breakpoint)
        value_counter_after = self.get_variable_int_value(TestTQP.MAIN_LOOP_COUNTER_C)

        # Run until function is going fail if the target has reset during hot detach/attach
        # (RAM has been wiped and/or the program counter has reset to a non-entry address)
        has_reset = TestTQP.execCtrl.runUntilFunction(TestTQP.COUNTER_INCREASE_C,
                                                      ic.CExecutionController.TOUT_10s,
                                                      False, False)

        if has_reset != ic.cvar.S_OK:
            TestTQP.loadCtrl.download()
            assert False, f"The target has reset."

        # Secondary test if the target has reset
        # (RAM has not been wiped and the program counter has reset to entry address)
        test_hot_attach_value = self.get_variable_int_value('testHotAttach')

        # Check if the target went into running mode (the counter has increased)
        # and the breakpoint is cleared (the counter has increased by more than one)
        # and if the target did not reset (the value of testHotAttach is not 0)
        assert value_counter_before != value_counter_after - 1,\
            "The breakpoint did not get cleared."
        assert value_counter_before != value_counter_after,\
            "The target did not go into running mode."
        assert test_hot_attach_value != 0,\
            "The target has reset"

    @pytest.mark.parametrize('setup_function',
                             [(IS_TEST_SYMBOL_DEBUG_INFORMATION_C,
                               TEST_SYMBOL_DEBUG_INFORMATION_C)],
                             indirect=True)
    @pytest.mark.parametrize('teardown_function',
                             [IS_TEST_SYMBOL_DEBUG_INFORMATION_C],
                             indirect=True)
    def test_symbol_debug_information(self) -> None:
        """
        This test checks for the proper working of the symbol debug information.
        More specifically, the type and the value of
        signed and unsigned char, short, int, long, long long, fixed-width int,
        array, pointer to array, struct, pointer to struct,
        union and pointer to union.
        It also tests the difference between local variables, global variables
        and function parameters, with the identical names.

        Test steps:
            - obtain the information about different global variables
            - check their types and compare their values to the reference numbers
            - repeat with function parameters
            - repeat with local variables
        """

        class Scope(Enum):
            GLOBAL = 0
            PARAMETERS = 1
            LOCAL = 2

        # Reference values
        reference_integer_values = [0xABCDEF0123456789,
                                    0xA5A5A5A5A5A5A5A5,
                                    0x9696969696969696]
        reference_float_values = [1.1111111111111111111111111111111,
                                  2.2222222222222222222222222222222,
                                  3.3333333333333333333333333333333]
        reference_array_values = [[0xAB, 0xCD], [0xA5, 0x5A], [0x12, 0x34]]
        reference_struct_union_values = [0xABCD, 0xA5A5, 0x1234]

        # Varied-width integer bit sizes
        char_size = self.get_variable_int_value('charSize')
        short_size = self.get_variable_int_value('shortSize')
        int_size = self.get_variable_int_value('intSize')
        long_size = self.get_variable_int_value('longSize')
        long_long_size = self.get_variable_int_value('longLongSize')

        # Floating point numbers bit sizes
        float_size = self.get_variable_int_value('floatSize')
        double_size = self.get_variable_int_value('doubleSize')
        long_double_size = self.get_variable_int_value('longDoubleSize')

        # First loop reads global variables,
        # second loop function parameters,
        # third loop local variables
        for scope in Scope:

            # Move to the position in the code to read variables from correct scope
            if scope == Scope.GLOBAL:
                TestTQP.execCtrl.runUntilFunction(TestTQP.COUNTER_INCREASE_C,
                                                  ic.CExecutionController.TOUT_1s,
                                                  True, True)
            elif scope == Scope.PARAMETERS:
                TestTQP.execCtrl.runUntilFunction('testSymbolDebugInformation',
                                                  ic.CExecutionController.TOUT_1s,
                                                  True, True)
            elif scope == Scope.LOCAL:
                TestTQP.execCtrl.runUntilFunction('testLocalSymbolDebugInformation',
                                                  ic.CExecutionController.TOUT_1s,
                                                  True, True)
                TestTQP.execCtrl.runUntilReturn(ic.CExecutionController.TOUT_1s, True)

            # Calculate reference numbers
            u_char_ref = reference_integer_values[scope.value] >> (64 - char_size)
            s_char_ref = twos_complement(reference_integer_values[scope.value] >> (64 - char_size), char_size)
            u_short_ref = reference_integer_values[scope.value] >> (64 - short_size)
            s_short_ref = twos_complement(reference_integer_values[scope.value] >> (64 - short_size), short_size)
            u_int_ref = reference_integer_values[scope.value] >> (64 - int_size)
            s_int_ref = twos_complement(reference_integer_values[scope.value] >> (64 - int_size), int_size)
            u_long_ref = reference_integer_values[scope.value] >> (64 - long_size)
            s_long_ref = twos_complement(reference_integer_values[scope.value] >> (64 - long_size), long_size)
            u_long_long_ref = reference_integer_values[scope.value]
            s_long_long_ref = twos_complement(reference_integer_values[scope.value], long_long_size)

            u_int8_ref = reference_integer_values[scope.value] >> 56
            s_int8_ref = twos_complement(reference_integer_values[scope.value] >> 56, 8)
            u_int16_ref = reference_integer_values[scope.value] >> 48
            s_int16_ref = twos_complement(reference_integer_values[scope.value] >> 48, 16)
            u_int32_ref = reference_integer_values[scope.value] >> 32
            s_int32_ref = twos_complement(reference_integer_values[scope.value] >> 32, 32)
            u_int64_ref = reference_integer_values[scope.value]
            s_int64_ref = twos_complement(reference_integer_values[scope.value], 64)

            float_ref = round(reference_float_values[scope.value], float_size)
            double_ref = round(reference_float_values[scope.value], double_size)
            long_double_ref = round(reference_float_values[scope.value], long_double_size)

            test_array_first_element_ref = reference_array_values[scope.value][0]
            test_array_second_element_ref = reference_array_values[scope.value][1]

            struct_char_ref = reference_struct_union_values[scope.value] & 0xFF
            struct_int_ref = twos_complement(reference_struct_union_values[scope.value], 32)

            union_char_ref = reference_struct_union_values[scope.value] & 0xFF
            union_int_ref = twos_complement(reference_struct_union_values[scope.value], 32)

            # Get the information about varied-width integer types
            u_char_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uCharVar')
            s_char_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sCharVar')
            u_short_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uShortVar')
            s_short_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sShortVar')
            u_int_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uIntVar')
            s_int_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sIntVar')
            u_long_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uLongVar')
            s_long_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sLongVar')
            u_long_long_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uLongLongVar')
            s_long_long_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sLongLongVar')

            # Get the information about exact-width integer types
            u_int8_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uInt8Var')
            s_int8_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sInt8Var')
            u_int16_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uInt16Var')
            s_int16_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sInt16Var')
            u_int32_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uInt32Var')
            s_int32_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sInt32Var')
            u_int64_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'uInt64Var')
            s_int64_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'sInt64Var')

            # Get the information about floating number types
            float_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'floatVar')
            double_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'doubleVar')
            long_double_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'longDoubleVar')

            # Get the information about an array with two unsigned char variables
            test_array = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testArray')
            test_array_addr = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testArrayAddr')
            test_array_first_element = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testArray[0]')
            test_array_second_element = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testArray[1]')

            # Get the information about struct with unsigned char variable and signed int variable
            test_struct = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testStruct')
            test_struct_addr = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testStructAddr')
            struct_char_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testStruct.structCharVar')
            struct_int_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testStruct.structIntVar')

            # Get the information about union with unsigned char variable and signed int variable
            test_union = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testUnion')
            test_union_addr = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testUnionAddr')
            union_char_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testUnion.unionCharVar')
            union_int_var = TestTQP.dataCtrl.evaluate(TestTQP.ACCESS_FLAGS, 'testUnion.unionIntVar')

            # Collect the results
            # Varied-width integer types
            assert u_char_var.getInt() == u_char_ref
            assert s_char_var.getInt() == s_char_ref
            assert u_char_var.isTypeUnsigned()
            assert s_char_var.isTypeSigned()
            assert u_short_var.getInt() == u_short_ref
            assert s_short_var.getInt() == s_short_ref
            assert u_short_var.isTypeUnsigned()
            assert s_short_var.isTypeSigned()
            assert cpp_int_to_py_int(u_int_var.getInt(), int_size) == u_int_ref
            assert s_int_var.getInt() == s_int_ref
            assert u_int_var.isTypeUnsigned()
            assert s_int_var.isTypeSigned()
            assert cpp_int_to_py_int(u_long_var.getLong(), long_size) == u_long_ref
            assert s_long_var.getLong() == s_long_ref
            assert u_long_var.isTypeUnsigned()
            assert s_long_var.isTypeSigned()
            assert cpp_int_to_py_int(u_long_long_var.getLong(), long_long_size) == u_long_long_ref
            assert s_long_long_var.getLong() == s_long_long_ref
            assert u_long_long_var.isTypeUnsigned()
            assert s_long_long_var.isTypeSigned()

            # Exact-width integer types
            assert u_int8_var.getLong() == u_int8_ref
            assert s_int8_var.getLong() == s_int8_ref
            assert u_int8_var.isTypeUnsigned()
            assert s_int8_var.isTypeSigned()
            assert u_int16_var.getLong() == u_int16_ref
            assert s_int16_var.getLong() == s_int16_ref
            assert u_int16_var.isTypeUnsigned()
            assert s_int16_var.isTypeSigned()
            assert cpp_int_to_py_int(u_int32_var.getLong(), 32) == u_int32_ref
            assert s_int32_var.getLong() == s_int32_ref
            assert u_int32_var.isTypeUnsigned()
            assert s_int32_var.isTypeSigned()
            assert cpp_int_to_py_int(u_int64_var.getLong(), 64) == u_int64_ref
            assert s_int64_var.getLong() == s_int64_ref
            assert u_int64_var.isTypeUnsigned()
            assert s_int64_var.isTypeSigned()

            # Floating numbers types
            assert round(float_var.getDouble(), float_size) == float_ref
            assert round(double_var.getDouble(), double_size) == double_ref
            assert round(long_double_var.getDouble(), long_double_size) == long_double_ref
            assert float_var.isTypeFloat()
            assert double_var.isTypeFloat()
            assert long_double_var.isTypeFloat()

            # Array
            assert test_array_first_element.getInt() == test_array_first_element_ref
            assert test_array_second_element.getInt() == test_array_second_element_ref

            test_array_symbol_info = TestTQP.addrCtrl.getSymbolInfo(TestTQP.ACCESS_FLAGS, 'testArray')
            test_array_addr_value = test_array_addr.getAddress().m_aAddress
            if scope == Scope.PARAMETERS:
                test_array_value = test_array.getAddress().m_aAddress
                assert test_array_value == test_array_addr_value
            else:
                assert test_array_symbol_info.getAddress() == test_array_addr_value

            # Array function parameter can only be passed as a pointer
            if scope == Scope.PARAMETERS:
                assert test_array.isTypeAddress()
            else:
                assert test_array.isTypeCompound()

            assert test_array_addr.isTypeAddress()
            assert test_array_first_element.isTypeUnsigned()
            assert test_array_second_element.isTypeUnsigned()

            # Struct
            assert struct_char_var.getInt() == struct_char_ref
            assert struct_int_var.getInt() == struct_int_ref
            # Address of the struct in function parameters points to the stack of the called function
            if scope != Scope.PARAMETERS:
                test_struct_symbol_info = TestTQP.addrCtrl.getSymbolInfo(TestTQP.ACCESS_FLAGS, 'testStruct')
                test_struct_addr_value = test_struct_addr.getAddress().m_aAddress
                assert test_struct_symbol_info.getAddress() == test_struct_addr_value

            assert test_struct.isTypeCompound()
            assert test_struct_addr.isTypeAddress()
            assert struct_char_var.isTypeUnsigned()
            assert struct_int_var.isTypeSigned()

            # Union
            assert union_char_var.getInt() == union_char_ref
            assert union_int_var.getInt() == union_int_ref
            # Address of the union in function parameters points to the stack of the called function
            if scope != Scope.PARAMETERS:
                test_union_symbol_info = TestTQP.addrCtrl.getSymbolInfo(TestTQP.ACCESS_FLAGS, 'testUnion')
                test_union_addr_value = test_union_addr.getAddress().m_aAddress
                assert test_union_symbol_info.getAddress() == test_union_addr_value

            assert test_union.isTypeCompound()
            assert test_union_addr.isTypeAddress()
            assert union_char_var.isTypeUnsigned()
            assert union_int_var.isTypeSigned()

    def test_source_line_debug_information(self) -> None:
        """
        This test verifies the proper working of
        the source-line debug information,
        by inspecting data from a specified source line.
        The test passes if the line with reference comment
        "sourceLineDebugInformation" produces assembly code of a function named
        "testSourceLineDebugInformation".
        Uses "Workspace_location" json entry.

        Test steps:
            - get the full path of TQP.c file
            - find the source line number of reference comment
              "sourceLineDebugInformation"
            - fetch the information about the source line in TQP.c
              (what assembly does it produce)
            - check if the source line produces any assembly code
            - check if the type and name of the element on the source line is
              a function named testSourceLineDebugInformation
        """
        tqp_file_path = self.get_file_path(TestTQP.TQP_FILE_NAME,
                                           TestTQP.json_conf['Workspace_location'])
        line_number = parse_reference_comment(TestTQP.REF_COMMENT_SOURCE_LINE_DEBUG_INFORMATION,
                                              tqp_file_path)

        source_line_address = TestTQP.addrCtrl.getAddressOfSourceLine(tqp_file_path,
                                                                      line_number,
                                                                      isReportSize=False)

        names = ic.StrVector()
        types = ic.IntVector()
        TestTQP.addrCtrl.getFunctionNames(source_line_address, names, types)

        assert len(source_line_address) > 0,\
            "The source line does not produce any assembly code."
        assert types[0] == ic.IConnectDebug.sFunctions,\
            "Incorrect type of the element."
        assert names[0] == 'testSourceLineDebugInformation',\
            "Incorrect name of the function."

    @staticmethod
    def fill_up_the_flash(flash_regions: List[List[str]]) -> List[bytes]:
        """
        Generating file with random data and downloading it to the target
        to fill up the whole specified flash regions.
        :param List[List[str]] flash_regions: flash regions to be filled
        :return bytes: generated data, written to flash.
        """
        download_files_base_url: str = None
        full_download_file_path: str = None
        original_download_file_load_settings = None
        number_of_symbol_files: int = None
        symbol_files_base_url: str = None
        number_of_download_files: int = None
        try:
            workspace_path = TestTQP.ideCtrl.getPath(TestTQP.ideCtrl.WORKSPACE_DIR)
            full_download_file_path = os.path.join(workspace_path, TestTQP.FULL_DOWNLOAD_FILE_NAME)

            code_store = TestTQP.dataCtrl.csCreate()
            generated_data = []

            numpy.random.seed(TestTQP.FLASH_SEED)  # Set a constant seed

            # First fill the file to be programmed with random data
            for region_start_address, region_end_address in flash_regions:
                generated_file = numpy.random.randint(
                    0, 255,
                    int(region_end_address, 0) - int(region_start_address, 0),
                    dtype=numpy.dtype("u1"))  # 8-bit unsigned int

                code_store.insert(int(region_start_address, 0),
                                  ic.VectorBYTE(generated_file.tobytes()))
                generated_data.append(generated_file.tobytes())

            code_store.save(ic.ICodeCache.lFormatMotorolaS, full_download_file_path, 0)

            download_files_base_url = "/IDE/System.Debug.SoCs[0].DLFs_Program.File"
            symbol_files_base_url = "/IDE/System.Debug.Applications[0].SymbolFiles.File"

            # Save current load settings for download and symbol files and
            # disable their loading, to be able to download new file only
            original_download_file_load_settings = {}
            number_of_download_files = TestTQP.ideCtrl.getDynamicOptionSize(download_files_base_url)
            original_symbol_file_load_settings = {}
            number_of_symbol_files = TestTQP.ideCtrl.getDynamicOptionSize(symbol_files_base_url)

            for download_file_index in range(0, number_of_download_files):
                download_file_name = TestTQP.ideCtrl.getOptionStr(
                    f"{download_files_base_url}[{download_file_index}].Path")
                should_load = TestTQP.ideCtrl.getOptionStr(
                    f"{download_files_base_url}[{download_file_index}].Load")
                original_download_file_load_settings[download_file_name] = should_load
                TestTQP.ideCtrl.setOption(
                    f"{download_files_base_url}[{download_file_index}].Load", 0)

            for symbol_file_index in range(0, number_of_symbol_files):
                symbol_file_name = TestTQP.ideCtrl.getOptionStr(
                    f"{symbol_files_base_url}[{symbol_file_index}].Path")
                should_load = TestTQP.ideCtrl.getOptionStr(
                    f"{symbol_files_base_url}[{symbol_file_index}].Load")
                original_symbol_file_load_settings[symbol_file_name] = should_load
                TestTQP.ideCtrl.setOption(
                    f"{symbol_files_base_url}[{symbol_file_index}].Load", 0)

            # Adding our file for download
            dl_file_index = TestTQP.ideCtrl.addDynamicOption(download_files_base_url)
            TestTQP.ideCtrl.setOption(f"{download_files_base_url}[{dl_file_index}].Path", full_download_file_path)
            TestTQP.ideCtrl.setOption(f"{download_files_base_url}[{dl_file_index}].Options.CodeOffset", 0)
            TestTQP.ideCtrl.setOption(f"{download_files_base_url}[{dl_file_index}].Options.Type", "S37")
            TestTQP.ideCtrl.setOption(f"{download_files_base_url}[{dl_file_index}].Load", 'true')

            # Download newly created file to the target
            TestTQP.loadCtrl.download()

            # Return generated data as an array of bytes
            return generated_data

        except Exception as err:
            raise Exception(f"Failed to create and download full download file.\n{err}")

        finally:
            if number_of_download_files is not None:
                # Removing our file from downloading
                dl_file_index = TestTQP.ideCtrl.findDynamicOption(download_files_base_url,
                                                                  'Path',
                                                                  full_download_file_path)
                if dl_file_index != -1:
                    TestTQP.ideCtrl.removeDynamicOption(download_files_base_url, dl_file_index)

                # Restore the original load settings for download and symbol files
                for download_file_index in range(0, number_of_download_files):
                    download_file_name = TestTQP.ideCtrl.getOptionStr(f"{download_files_base_url}[{download_file_index}].Path")
                    should_load = original_download_file_load_settings[download_file_name]
                    if should_load == 'true':
                        TestTQP.ideCtrl.setOption(f"{download_files_base_url}[{download_file_index}].Load", 1)

                for symbol_file_index in range(0, number_of_symbol_files):
                    symbol_file_name = TestTQP.ideCtrl.getOptionStr(f"{symbol_files_base_url}[{symbol_file_index}].Path")
                    should_load = original_download_file_load_settings[symbol_file_name]
                    if should_load == 'true':
                        TestTQP.ideCtrl.setOption(f"{symbol_files_base_url}[{symbol_file_index}].Load", 1)

                # Restore original test program
                TestTQP.loadCtrl.download()

    @staticmethod
    def read_flash(flash_regions: List[List[str]]) -> List[bytes]:
        """
        Reading the data from the target's flash regions.
        It uses "Flash_regions" json entry.
        :param List[List[str]] flash_regions: flash regions to be filled
        :return List[bytes]: Read data
        """
        try:
            read_data = []
            for region_start_address, region_end_address in flash_regions:
                mem_area = TestTQP.dataCtrl.getSystemMemoryAreas().getMemAreaDataPhysical()
                num_bytes = int((int(region_end_address, 0) - int(region_start_address, 0))
                                / TestTQP.BYTES_PER_MAU)

                # data + access status
                flash_data = TestTQP.dataCtrl.readMemory(TestTQP.ACCESS_FLAGS,
                                                         mem_area,
                                                         int(region_start_address, 0),
                                                         num_bytes,
                                                         TestTQP.BYTES_PER_MAU)

                # Read memory function also reads access status, which is cut
                read_data.append(bytes(flash_data[:num_bytes]))

            return read_data

        except Exception as err:
            raise Exception(f"Failed read from the flash regions: {flash_regions}.\n{err}")

    def murmurhash3(self, key: bytes, seed: int) -> int:
        """
        Python implementation of the murmurhash3 algorithm.
        It accepts input string, starting seed and returns murmur hash.
        :param bytes key: input string
        :param int seed: value of the starting seed
        :return int: calculated hash
        """
        try:
            length = len(key)
            num_chunks = int(length / 4)

            h = seed

            c1 = 0xcc9e2d51
            c2 = 0x1b873593
            r1 = 15
            r2 = 13
            m = 5
            n = 0xe6546b64

            endianness = self.get_variable_int_value('endianness')

            # Body in chunks
            for block_start in range(0, num_chunks * 4, 4):
                if endianness == 0:  # Little endian
                    k = key[block_start + 3] << 24 | \
                        key[block_start + 2] << 16 | \
                        key[block_start + 1] << 8 | \
                        key[block_start + 0]
                else:  # Big endian
                    k = key[block_start + 0] << 24 | \
                        key[block_start + 1] << 16 | \
                        key[block_start + 2] << 8 | \
                        key[block_start + 3]

                k = (c1 * k) & 0xFFFFFFFF
                k = (k << r1 | k >> (32 - r1)) & 0xFFFFFFFF  # inlined ROTL32
                k = (c2 * k) & 0xFFFFFFFF

                h ^= k
                h = (h << r2 | h >> (32 - r2)) & 0xFFFFFFFF  # inlined ROTL32
                h = (h * m + n) & 0xFFFFFFFF

            k = 0

            # Tail
            tail_index = num_chunks * 4
            tail_size = length & 3

            if tail_size >= 3:
                k ^= key[tail_index + 2] << 16
            if tail_size >= 2:
                k ^= key[tail_index + 1] << 8
            if tail_size >= 1:
                k ^= key[tail_index + 0]
                k = (k * c1) & 0xFFFFFFFF
                k = (k << r1 | k >> (32 - r1)) & 0xFFFFFFFF  # inlined ROTL32
                k = (k * c2) & 0xFFFFFFFF
                h ^= k

            # Finalization
            h ^= length

            h ^= h >> 16
            h = (h * 0x85ebca6b) & 0xFFFFFFFF
            h ^= h >> 13
            h = (h * 0xc2b2ae35) & 0xFFFFFFFF
            h ^= h >> 16

            return h

        except Exception as err:
            raise Exception(
                f"Unexpected error occurred while calculating murmurhash.\n{err}")

    def test_flash(self) -> None:
        """
        This test verifies the validity of downloaded data in flash.
        It checks the equivalence of three flash checksums,
        calculated with different algorithms.
        First checksum is calculated on the target,
        second and third with test script,
        on generated data and
        on read data from the target's memory, respectively.
        The test is skipped if the target does not have any internal flash.
        It uses "Hash_algorithms" and "Regions" json entries.

        Test steps:
            - create a download file with random generated data,
              that fills the flash, and download it to the target
            - for each specified flash region read the data and save it
            - let the target calculate checksum
            - calculate checksum on previously generated data and
              on the read data
            - compare the three checksums, if they are the same
            - repeat for each specified algorithm
        """
        # Skip the test if any of the lists in json are empty
        if len(TestTQP.json_conf['Flash']['Hash_algorithms']) == 0 or len(
                TestTQP.json_conf['Flash']['Regions']) == 0:
            pytest.skip("The target does not have any internal flash.")

        written_data = self.fill_up_the_flash(TestTQP.json_conf['Flash']['Regions'])
        read_data = self.read_flash(TestTQP.json_conf['Flash']['Regions'])

        # After a download is performed we need to get back to the main function
        TestTQP.execCtrl.runUntilFunction(TestTQP.COUNTER_INCREASE_C,
                                          ic.CExecutionController.TOUT_10s,
                                          True, True)

        result_target = []
        result_read = []
        result_write = []

        for algorithm in TestTQP.json_conf['Flash']['Hash_algorithms']:

            # Calculate hash using the target
            result_target_region = '0'  # Starting seed

            # For each specified flash region
            for region_start_address, region_end_address in TestTQP.json_conf['Flash']['Regions']:

                region_length = int(region_end_address, 0) - int(region_start_address, 0)

                # Calculate hash for a flash region and
                # save the result as a seed for next flash region
                if algorithm.lower() == "crc32":
                    result_target_region = TestTQP.execCtrl.call('crc32',
                                                                 result_target_region,
                                                                 region_start_address,
                                                                 str(region_length))
                elif algorithm.lower() == "murmurhash":
                    result_target_region = TestTQP.execCtrl.call('murmurhash3',
                                                                 region_start_address,
                                                                 str(region_length),
                                                                 result_target_region)

            result_target.append(int(result_target_region, 0))

            # Calculate hash using python script
            read_region_result = 0
            written_region_result = 0
            for region_index in range(len(TestTQP.json_conf['Flash']['Regions'])):
                if algorithm.lower() == "crc32":
                    read_region_result = cpp_int_to_py_int(
                        zlib.crc32(read_data[region_index], read_region_result), 32)
                    written_region_result = cpp_int_to_py_int(
                        zlib.crc32(written_data[region_index], written_region_result), 32)
                elif algorithm.lower() == "murmurhash":
                    read_region_result = self.murmurhash3(read_data[region_index],
                                                          read_region_result)
                    written_region_result = self.murmurhash3(written_data[region_index],
                                                             written_region_result)

            result_read.append(read_region_result)
            result_write.append(written_region_result)

        # Compare calculated hashes
        for algorithm_index, algorithm in enumerate(
                TestTQP.json_conf['Flash']['Hash_algorithms']):
            assert result_target[algorithm_index] == result_write[
                algorithm_index], "Incorrect download to the target’s flash"
            assert result_target[algorithm_index] == result_read[
                algorithm_index], "Incorrect reading from the target’s flash"
