#include <stdio.h>
#include <stdint.h>

#include "TQP.h"

// Varied-width integer bit sizes for the python script
const uint8_t charSize = CHAR_SIZE;
const uint8_t shortSize = SHORT_SIZE;
const uint8_t intSize = INT_SIZE;
const uint8_t longSize = LONG_SIZE;
const uint8_t longLongSize = LONG_LONG_SIZE;

// Floating point numbers bit sizes and rounding directions for the python script
const uint8_t floatSize = FLOAT_SIZE;
const uint8_t doubleSize = DOUBLE_SIZE;
const uint8_t longDoubleSize = LONG_DOUBLE_SIZE;

// Extern function in the user-created assembly test file
extern void testRegisterAsm(void);

// Variables for enabling tests
volatile uint8_t isTestRegister;
volatile uint8_t isTestStep;
volatile uint8_t isTestBreakpoints;
volatile uint8_t isTestSymbolDebugInformation;

// RAM read and write test variables
volatile uint8_t testVarRead = 0xAB;
volatile uint8_t testVarWrite = 0x0;

// Hot attach and hot dettach test variable
volatile uint8_t testHotAttach = 0;

// Big endian = 1; Little endian = 0
uint8_t endianness;

uint32_t mainLoopCounter = 0;

void testRegister(void)
{
  testRegisterAsm();
  return;
}

void testStep(void)
{
  testRegisterAsm();
  return;
}

volatile uint8_t breakpointsCounter = 0;

void testBreakpoints(void)
{
  breakpointsCounter = 0;
  breakpointsCounter = 1; //tqp: breakpoint 1
  breakpointsCounter = 2; //tqp: breakpoint 2
  breakpointsCounter = 3; //tqp: breakpoint 3
  breakpointsCounter = 4; //tqp: breakpoint 4
  breakpointsCounter = 5; //tqp: breakpoint 5
  breakpointsCounter = 6; //tqp: breakpoint 6
  breakpointsCounter = 7; //tqp: breakpoint 7
  breakpointsCounter = 8; //tqp: breakpoint 8
  breakpointsCounter = 9; //tqp: breakpoint 9
  breakpointsCounter = 10; //tqp: breakpoint 10
  breakpointsCounter = 11; //tqp: breakpoint 11
  breakpointsCounter = 12; //tqp: breakpoint 12
  breakpointsCounter = 13; //tqp: breakpoint 13
  breakpointsCounter = 14; //tqp: breakpoint 14
  breakpointsCounter = 15; //tqp: breakpoint 15
  breakpointsCounter = 16; //tqp: breakpoint 16
  breakpointsCounter = 17; //tqp: breakpoint 17
  breakpointsCounter = 18; //tqp: breakpoint 18
  breakpointsCounter = 19; //tqp: breakpoint 19
  breakpointsCounter = 20; //tqp: breakpoint 20
  return;
}

unsigned char uCharVar = CHAR_REF_GLOBAL;
signed char sCharVar = CHAR_REF_GLOBAL;
unsigned short uShortVar = SHORT_REF_GLOBAL;
signed short sShortVar = SHORT_REF_GLOBAL;
unsigned int uIntVar = INT_REF_GLOBAL;
signed int sIntVar = INT_REF_GLOBAL;
unsigned long uLongVar = LONG_REF_GLOBAL;
signed long sLongVar = LONG_REF_GLOBAL;
unsigned long long uLongLongVar = LONG_LONG_REF_GLOBAL;
signed long long sLongLongVar = LONG_LONG_REF_GLOBAL;

uint8_t uInt8Var = INT8_REF_GLOBAL;
int8_t sInt8Var = INT8_REF_GLOBAL;
uint16_t uInt16Var = INT16_REF_GLOBAL;
int16_t sInt16Var = INT16_REF_GLOBAL;
uint32_t uInt32Var = INT32_REF_GLOBAL;
int32_t sInt32Var = INT32_REF_GLOBAL;
uint64_t uInt64Var = INT64_REF_GLOBAL;
int64_t sInt64Var = INT64_REF_GLOBAL;

float floatVar = FLOAT_REF_GLOBAL;
double doubleVar = FLOAT_REF_GLOBAL;
long double longDoubleVar = FLOAT_REF_GLOBAL;

unsigned char testArray[] = {ARRAY_REF_GLOBAL_FIRST, ARRAY_REF_GLOBAL_SECOND};
unsigned char* testArrayAddr = (unsigned char*) &testArray;

struct _testStruct_
{
  unsigned char structCharVar;
  signed int structIntVar;
};

struct _testStruct_ testStruct = {.structCharVar = (STRUCT_UNION_REF_GLOBAL & 0xFF), .structIntVar = STRUCT_UNION_REF_GLOBAL};
struct _testStruct_* testStructAddr = (struct _testStruct_*) &testStruct;


union _testUnion_
{
  unsigned char unionCharVar;
  signed int unionIntVar;
};

union _testUnion_ testUnion = {.unionIntVar = STRUCT_UNION_REF_GLOBAL};
union _testUnion_* testUnionAddr = (union _testUnion_*) &testUnion;

void testLocalSymbolDebugInformation(void)
{
  volatile unsigned char uCharVar = CHAR_REF_LOCAL;
  volatile signed char sCharVar = CHAR_REF_LOCAL;
  volatile unsigned short uShortVar = SHORT_REF_LOCAL;
  volatile signed short sShortVar = SHORT_REF_LOCAL;
  volatile unsigned int uIntVar = INT_REF_LOCAL;
  volatile signed int sIntVar = INT_REF_LOCAL;
  volatile unsigned long uLongVar = LONG_REF_LOCAL;
  volatile signed long sLongVar = LONG_REF_LOCAL;
  volatile unsigned long long uLongLongVar = LONG_LONG_REF_LOCAL;
  volatile signed long long sLongLongVar = LONG_LONG_REF_LOCAL;
  
  volatile uint8_t uInt8Var = INT8_REF_LOCAL;
  volatile int8_t sInt8Var = INT8_REF_LOCAL;
  volatile uint16_t uInt16Var = INT16_REF_LOCAL;
  volatile int16_t sInt16Var = INT16_REF_LOCAL;
  volatile uint32_t uInt32Var = INT32_REF_LOCAL;
  volatile int32_t sInt32Var = INT32_REF_LOCAL;
  volatile uint64_t uInt64Var = INT64_REF_LOCAL;
  volatile int64_t sInt64Var = INT64_REF_LOCAL;
  
  volatile float floatVar = FLOAT_REF_LOCAL;
  volatile double doubleVar = FLOAT_REF_LOCAL;
  volatile long double longDoubleVar = FLOAT_REF_LOCAL;
  
  volatile unsigned char testArray[] = {ARRAY_REF_LOCAL_FIRST, ARRAY_REF_LOCAL_SECOND};
  volatile unsigned char* testArrayAddr = (unsigned char*) &testArray;
  
  volatile struct _testStruct_ testStruct;
  testStruct.structCharVar = STRUCT_UNION_REF_LOCAL & 0xFF;
  testStruct.structIntVar = STRUCT_UNION_REF_LOCAL;
  volatile struct _testStruct_* testStructAddr = (struct _testStruct_*) &testStruct;
  
  volatile union _testUnion_ testUnion;
  testUnion.unionIntVar = STRUCT_UNION_REF_LOCAL;
  volatile union _testUnion_* testUnionAddr = (union _testUnion_*) &testUnion;
  
  if (testArrayAddr){}
  if (testStructAddr){}
  if (testUnionAddr){}
}

void testSymbolDebugInformation(unsigned char uCharVar, signed char sCharVar,
                                unsigned short uShortVar, signed short sShortVar,
                                unsigned int uIntVar, signed int sIntVar,
                                unsigned long uLongVar, signed long sLongVar,
                                unsigned long long uLongLongVar, signed long long sLongLongVar,
                                uint8_t uInt8Var, int8_t sInt8Var,
                                uint16_t uInt16Var, int16_t sInt16Var,
                                uint32_t uInt32Var, int32_t sInt32Var,
                                uint64_t uInt64Var, int64_t sInt64Var,
                                float floatVar, double doubleVar, long double longDoubleVar,
                                unsigned char testArray[], unsigned char* testArrayAddr,
                                struct _testStruct_ testStruct, struct _testStruct_* testStructAddr,
                                union _testUnion_ testUnion, union _testUnion_* testUnionAddr)
{
  testLocalSymbolDebugInformation();
}

void testSourceLineDebugInformation(void) {}  //tqp: sourceLineDebugInformation

uint32_t crc32(uint32_t crc, uint8_t *buf, size_t len)
{
    crc = ~crc;
    while (len--)
    {
        crc ^= *buf++;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
        crc = crc & 1 ? (crc >> 1) ^ 0xedb88320 : crc >> 1;
    }
    return ~crc;
}

uint32_t endianConvert(uint32_t num)
{
  //32-bit
  return ((num>>24) & 0xFF) | // move byte 3 to byte 0
         ((num << 8) & 0xFF0000) | // move byte 1 to byte 2
         ((num >> 8) & 0xFF00) | // move byte 2 to byte 1
         ((num << 24) & 0xFF000000); // byte 0 to byte 3
}

uint32_t murmurhash3(const uint8_t *key, uint32_t len, uint32_t seed)
{
  uint32_t c1 = 0xcc9e2d51;
  uint32_t c2 = 0x1b873593;
  uint32_t r1 = 15;
  uint32_t r2 = 13;
  uint32_t m = 5;
  uint32_t n = 0xe6546b64;
  uint32_t h = 0;
  uint32_t k = 0;
  uint8_t *d = (uint8_t *) key; // 32 bit extract from 'key'
  const uint32_t *chunks = NULL;
  const uint8_t *tail = NULL; // Tail - last 8 bytes
  int i = 0;
  int l = len / 4; // Chunk length

  h = seed;

  chunks = (const uint32_t *) (d + l * 4); // Body
  tail = (const uint8_t *) (d + l * 4); // Last 8 byte chunk of 'key'
  
  endianness = IS_BIG_ENDIAN;

  // For each 4 byte chunk of 'key'
  for (i = -l; i != 0; ++i)
  {
    // Next 4 byte chunk of 'key'
    k = chunks[i];
    
    //Endian
    if (endianness)
      k = endianConvert(k);

    // Encode next 4 byte chunk of 'key'
    k *= c1;
    k = (k << r1) | (k >> (32 - r1));
    k *= c2;

    // Append to hash
    h ^= k;
    h = (h << r2) | (h >> (32 - r2));
    h = h * m + n;
  }
  
  k = 0;

  // Remainder
  switch (len & 3)
  {
    case 3: k ^= (tail[2] << 16);
    case 2: k ^= (tail[1] << 8);

    case 1:
      k ^= tail[0];
      k *= c1;
      k = (k << r1) | (k >> (32 - r1));
      k *= c2;
      h ^= k;
  }
  
  // Finalization
  h ^= len;

  h ^= (h >> 16);
  h *= 0x85ebca6b;
  h ^= (h >> 13);
  h *= 0xc2b2ae35;
  h ^= (h >> 16);
  
  return h;
}

void counterIncrease(void)
{
  mainLoopCounter++;
}

void tqpMain(void)
{
  counterIncrease();
  
  if (isTestRegister)
  {
    testRegister();
  }
  if (isTestStep)
  {
    testStep();
  }
  if (isTestBreakpoints)
  {
    testBreakpoints();
  }
  if (isTestSymbolDebugInformation)
  {
    unsigned char testArray[] = {ARRAY_REF_PARAMETERS_FIRST, ARRAY_REF_PARAMETERS_SECOND};
    unsigned char* testArrayAddr = (unsigned char*) &testArray;
    
    struct _testStruct_ testStruct;
    testStruct.structCharVar = STRUCT_UNION_REF_PARAMETERS & 0xFF;
    testStruct.structIntVar = STRUCT_UNION_REF_PARAMETERS;
    struct _testStruct_* testStructAddr = (struct _testStruct_*) &testStruct;
    
    union _testUnion_ testUnion;
    testUnion.unionIntVar = STRUCT_UNION_REF_PARAMETERS;
    union _testUnion_* testUnionAddr = (union _testUnion_*) &testUnion;
    
    testSymbolDebugInformation((unsigned char) CHAR_REF_PARAMETERS, (signed char) CHAR_REF_PARAMETERS,
                              (unsigned short) SHORT_REF_PARAMETERS, (signed short) SHORT_REF_PARAMETERS,
                              (unsigned int) INT_REF_PARAMETERS, (signed int) INT_REF_PARAMETERS,
                              (unsigned long) LONG_REF_PARAMETERS, (signed long) LONG_REF_PARAMETERS,
                              (unsigned long long) LONG_LONG_REF_PARAMETERS, (signed long long) LONG_LONG_REF_PARAMETERS,
                              (uint8_t) INT8_REF_PARAMETERS, (int8_t) INT8_REF_PARAMETERS,
                              (uint16_t) INT16_REF_PARAMETERS, (int16_t) INT16_REF_PARAMETERS,
                              (uint32_t) INT32_REF_PARAMETERS, (int32_t) INT32_REF_PARAMETERS,
                              (uint64_t) INT64_REF_PARAMETERS, (int64_t) INT64_REF_PARAMETERS,
                              (float) FLOAT_REF_PARAMETERS, (double) FLOAT_REF_PARAMETERS, (long double) FLOAT_REF_PARAMETERS,
                              testArray, testArrayAddr,
                              testStruct, testStructAddr,
                              testUnion, testUnionAddr);
  }
}
