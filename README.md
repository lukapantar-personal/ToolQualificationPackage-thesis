# ToolQualificationPackage
Tool qualification package for winIDEA. 
This package can be used to verify that winIDEA works in your specific environment.

### Tested with:
 - Cortex-M (S32K148), GCC, iC5000
 - TriCore (TC399), Tasking, iC5700 + Active probe DAP

### Instructions:
1. Modify configuration in ToolQualificationPackage/conf.json
2. Compile the application
3. Run TQP as:
      - pytest test_TQP.py
  or
      - python -m pytest test_TQP.py


### JSON Configuration Options:
 - WinIDEA: 
    - Id - Fixed winIDEA id. DO NOT CHANGE
    - Location - Path to executable (winIDEA.exe) of winIDEA. Leave empty to connect to the most recently used winIDEA. Example: "D:/User/winIDEA/winIDEA.exe" or "../winIDEA/winIDEA.exe"
 - Test_register:
    - Name - Name of the register, used in the assembly test file.  {"r0"/"d1"/...}
    - Size - Size of Test_register in bits. {8/16/32/64}
 - Is_hot_attach_available - Is the hot attach functionality supported. {true/false}
 - Is_real_time_access_available - Is the real time access functionality supported. {true/false}
 - Num_hw_breakpoints - Available hardware breakpoints. {6/8/…}
 - Flash:
    - Hash_algoritms - One or more hashing algorithms to be used to flash test. Leave empty if the target does not have any internal flash. Supported algorithms: crc32, murmurhash. Example: ["crc32", "murmurhash"]
    - Regions - Internal flash regions to be tested, must include start (included) and end address (excluded). Leave empty if the target does not have any internal flash. The regions must be accessible from the primary core. Warning: specified flash regions will be overwritten! Syntax: [["start_addr_1", "end_addr_1"], ["start_addr_2", "end_addr_2"]...] Example: [["0x00000000", "0x00170000"], ["0x00180000", "0x00200000"]]
 - Workspace_location - Path to winIDEA workspace (.xjrf file), used for testing. Example: "D:/User/Board/workspace.xjrf" or "../Board/workspace.xjrf"
