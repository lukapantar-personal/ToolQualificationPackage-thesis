#include <limits.h>
#include <float.h>
#include <stdint.h>

#ifndef _TQP_H_
#define _TQP_H_

#define IS_BIG_ENDIAN (!*(unsigned char *)&(uint16_t){1})

// REFERENCE NUMBERS //////////////////////////////////////////////////////////

#define REF_GLOBAL(size)            (0xABCDEF0123456789 >> (64 - size))
#define REF_PARAMETERS(size)        (0xA5A5A5A5A5A5A5A5 >> (64 - size))
#define REF_LOCAL(size)             (0x9696969696969696 >> (64 - size))

// Char
#define CHAR_SIZE                   CHAR_BIT
#define CHAR_REF_GLOBAL             REF_GLOBAL(CHAR_SIZE)
#define CHAR_REF_PARAMETERS         REF_PARAMETERS(CHAR_SIZE)
#define CHAR_REF_LOCAL              REF_LOCAL(CHAR_SIZE)

// Short
#if (USHRT_MAX == 0xFFFF)
#define SHORT_SIZE                  16
#elif (USHRT_MAX == 0xFFFFFFFF)
#define SHORT_SIZE                  32
#else
#define SHORT_SIZE                  64
#endif

#define SHORT_REF_GLOBAL            REF_GLOBAL(SHORT_SIZE)
#define SHORT_REF_PARAMETERS        REF_PARAMETERS(SHORT_SIZE)
#define SHORT_REF_LOCAL             REF_LOCAL(SHORT_SIZE)

// Int
#if (UINT_MAX == 0xFFFF)
#define INT_SIZE                    16
#elif (UINT_MAX == 0xFFFFFFFF)
#define INT_SIZE                    32
#else
#define INT_SIZE                    64
#endif

#define INT_REF_GLOBAL              REF_GLOBAL(INT_SIZE)
#define INT_REF_PARAMETERS          REF_PARAMETERS(INT_SIZE)
#define INT_REF_LOCAL               REF_LOCAL(INT_SIZE)

// Long
#if (ULONG_MAX == 0xFFFFFFFF)
#define LONG_SIZE                   32
#else
#define LONG_SIZE                   64
#endif

#define LONG_REF_GLOBAL             REF_GLOBAL(LONG_SIZE)
#define LONG_REF_PARAMETERS         REF_PARAMETERS(LONG_SIZE)
#define LONG_REF_LOCAL              REF_LOCAL(LONG_SIZE)

// Long Long
#define LONG_LONG_SIZE              64
#define LONG_LONG_REF_GLOBAL        REF_GLOBAL(LONG_LONG_SIZE)
#define LONG_LONG_REF_PARAMETERS    REF_PARAMETERS(LONG_LONG_SIZE)
#define LONG_LONG_REF_LOCAL         REF_LOCAL(LONG_LONG_SIZE)

// Fixed-width integer
#define INT8_REF_GLOBAL             REF_GLOBAL(8)
#define INT8_REF_PARAMETERS         REF_PARAMETERS(8)
#define INT8_REF_LOCAL              REF_LOCAL(8)

#define INT16_REF_GLOBAL            REF_GLOBAL(16)
#define INT16_REF_PARAMETERS        REF_PARAMETERS(16)
#define INT16_REF_LOCAL             REF_LOCAL(16)

#define INT32_REF_GLOBAL            REF_GLOBAL(32)
#define INT32_REF_PARAMETERS        REF_PARAMETERS(32)
#define INT32_REF_LOCAL             REF_LOCAL(32)

#define INT64_REF_GLOBAL            REF_GLOBAL(64)
#define INT64_REF_PARAMETERS        REF_PARAMETERS(64)
#define INT64_REF_LOCAL             REF_LOCAL(64)

// Float, Double, Long Double
#define FLOAT_SIZE                  FLT_DIG
#define DOUBLE_SIZE                 DBL_DIG
#define LONG_DOUBLE_SIZE            LDBL_DIG

#define FLOAT_REF_GLOBAL            1.1111111111111111111111111111111
#define FLOAT_REF_PARAMETERS        2.2222222222222222222222222222222
#define FLOAT_REF_LOCAL             3.3333333333333333333333333333333

// Array
#define ARRAY_REF_GLOBAL_FIRST      0xAB
#define ARRAY_REF_GLOBAL_SECOND     0xCD

#define ARRAY_REF_PARAMETERS_FIRST  0xA5
#define ARRAY_REF_PARAMETERS_SECOND 0x5A

#define ARRAY_REF_LOCAL_FIRST       0x12
#define ARRAY_REF_LOCAL_SECOND      0x34

// Struct and Union
#define STRUCT_UNION_REF_GLOBAL     0xABCD
#define STRUCT_UNION_REF_PARAMETERS 0xA5A5
#define STRUCT_UNION_REF_LOCAL      0x1234

///////////////////////////////////////////////////////////////////////////////

// Function prototypes
extern void tqpMain(void);

#endif //_TQP_H_