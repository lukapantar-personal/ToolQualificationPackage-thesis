#include <stdint.h>

struct System_Control_Space_System_Control_Block_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VARIANT:4;
      uint64_t PARTNO:12;
      uint64_t reservedSpace0:4;
      uint64_t REVISION:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:8;
      uint64_t reservedSpace0:3;
      uint64_t RETTOBASE:1;
      uint64_t VECTPENDING:10;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace1:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace2:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t TBLOFF:22;
      uint64_t TBLBASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTRESET:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace0:5;
      uint64_t PRIGROUP:3;
      uint64_t reservedSpace1:4;
      uint64_t ENDIANESS:1;
      uint64_t VECTKEY_VECTKEYSTAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SLEEPONEXIT:1;
      uint64_t SLEEPDEEP:1;
      uint64_t reservedSpace1:1;
      uint64_t SEVONPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONEBASETHRDENA:1;
      uint64_t USERSETMPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGN_TRP:1;
      uint64_t DIV_0_TRP:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
      uint64_t reservedSpace2:6;
      uint64_t DC:1;
      uint64_t IC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMFAULTACT:1;
      uint64_t BUSFAULTACT:1;
      uint64_t reservedSpace0:1;
      uint64_t USGFAULTACT:1;
      uint64_t reservedSpace1:3;
      uint64_t SVCALLACT:1;
      uint64_t MONITORACT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSVACT:1;
      uint64_t SYSTICKACT:1;
      uint64_t USGFAULTPENDED:1;
      uint64_t MEMFAULTPENDED:1;
      uint64_t BUSFAULTPENDED:1;
      uint64_t SVCALLPENDED:1;
      uint64_t MEMFAULTENA:1;
      uint64_t BUSFAULTENA:1;
      uint64_t USGFAULTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHCRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IACCVIOL:1;
      uint64_t DACCVIOL:1;
      uint64_t reservedSpace0:1;
      uint64_t MUNSTKERR:1;
      uint64_t MSTKERR:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARVALID:1;
      uint64_t IBUSERR:1;
      uint64_t PRECISERR:1;
      uint64_t IMPRECISERR:1;
      uint64_t UNSTKERR:1;
      uint64_t STKERR:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARVALID:1;
      uint64_t UNDEFINSTR:1;
      uint64_t INVSTATE:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIVBYZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTTBL:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DEBUGEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALTED:1;
      uint64_t BKPT:1;
      uint64_t DWTTRAP:1;
      uint64_t VCATCH:1;
      uint64_t EXTERNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSR;

  uint32_t MMFAR;
  uint32_t BFAR;
  uint32_t AFSR;
  uint32_t PFR0;
  uint32_t PFR1;
  uint32_t DFR0;
  uint32_t AFR0;
  uint32_t MMFR0;
  uint32_t MMFR1;
  uint32_t MMFR2;
  uint32_t MMFR3;
  uint32_t ISAR0;
  uint32_t ISAR1;
  uint32_t ISAR2;
  uint32_t ISAR3;
  uint32_t ISAR4;
  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:2;
      uint64_t CP1:2;
      uint64_t CP2:2;
      uint64_t CP3:2;
      uint64_t CP4:2;
      uint64_t CP5:2;
      uint64_t CP6:2;
      uint64_t CP7:2;
      uint64_t reservedSpace0:4;
      uint64_t CP10:2;
      uint64_t CP11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPACR;

};

#define SCSS (*(volatile struct System_Control_Space_System_Control_Block_tag *) 0xe000ed00)

struct System_Control_Space_Floating_point_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSPACT:1;
      uint64_t USER:1;
      uint64_t reservedSpace0:1;
      uint64_t THREAD:1;
      uint64_t HFRDY:1;
      uint64_t MMRDY:1;
      uint64_t BFRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t MONRDY:1;
      uint64_t reservedSpace2:21;
      uint64_t LSPEN:1;
      uint64_t ASPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCCR;

  uint32_t FPCAR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t RMode:2;
      uint64_t FZ:1;
      uint64_t DN:1;
      uint64_t AHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A_SIMD:4;
      uint64_t Single_precision:4;
      uint64_t Double_precision:4;
      uint64_t FP_0:4;
      uint64_t Divide:4;
      uint64_t Square_root:4;
      uint64_t Short_vectors:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FtZ:4;
      uint64_t D_NaN:4;
      uint64_t reservedSpace0:16;
      uint64_t FP_0:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR1;

};

#define System_Control_Space_Floating_point (*(volatile struct System_Control_Space_Floating_point_tag *) 0xe000ef34)

struct System_Control_Space_System_Control_and_ID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTLR;

  uint8_t res0[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

  uint8_t res1[204];

  uint32_t PID4;
  uint32_t PID5;
  uint32_t PID6;
  uint32_t PID7;
  uint32_t PID0;
  uint32_t PID1;
  uint32_t PID2;
  uint32_t PID3;
  uint32_t CID0;
  uint32_t CID1;
  uint32_t CID2;
  uint32_t CID3;
};

#define System_Control_Space_System_Control_and_ID (*(volatile struct System_Control_Space_System_Control_and_ID_tag *) 0xe000e004)

struct System_Control_Space_NVIC_tag
{
  uint32_t INT_0_31_SET_EN;
  uint32_t INT_32_63_SET_EN;
  uint32_t INT_64_95_SET_EN;
  uint32_t INT_96_127_SET_EN;
  uint32_t INT_128_159_SET_EN;
  uint32_t INT_160_191_SET_EN;
  uint32_t INT_192_223_SET_EN;
  uint16_t INT_224_239_SET_EN;
  uint8_t res0[98];

  uint32_t INT_0_31_CLR_EN;
  uint32_t INT_32_63_CLR_EN;
  uint32_t INT_64_95_CLR_EN;
  uint32_t INT_96_127_CLR_EN;
  uint32_t INT_128_159_CLR_EN;
  uint32_t INT_160_191_CLR_EN;
  uint32_t INT_192_223_CLR_EN;
  uint16_t INT_224_239_CLR_EN;
  uint8_t res1[98];

  uint32_t INT_0_31_SET_PEND;
  uint32_t INT_32_63_SET_PEND;
  uint32_t INT_64_95_SET_PEND;
  uint32_t INT_96_127_SET_PEND;
  uint32_t INT_128_159_SET_PEND;
  uint32_t INT_160_191_SET_PEND;
  uint32_t INT_192_223_SET_PEND;
  uint16_t INT_224_239_SET_PEND;
  uint8_t res2[98];

  uint32_t INT_0_31_CLR_PEND;
  uint32_t INT_32_63_CLR_PEND;
  uint32_t INT_64_95_CLR_PEND;
  uint32_t INT_96_127_CLR_PEND;
  uint32_t INT_128_159_CLR_PEND;
  uint32_t INT_160_191_CLR_PEND;
  uint32_t INT_192_223_CLR_PEND;
  uint16_t INT_224_239_CLR_PEND;
  uint8_t res3[98];

  uint32_t INT_0_31_ACT;
  uint32_t INT_32_63_ACT;
  uint32_t INT_64_95_ACT;
  uint32_t INT_96_127_ACT;
  uint32_t INT_128_159_ACT;
  uint32_t INT_160_191_ACT;
  uint32_t INT_192_223_ACT;
  uint16_t INT_224_239_ACT;
  uint8_t res4[226];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_0:8;
      uint64_t PRI_1:8;
      uint64_t PRI_2:8;
      uint64_t PRI_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_0_3_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
      uint64_t PRI_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_4_7_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_8:8;
      uint64_t PRI_9:8;
      uint64_t PRI_10:8;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_8_11_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_12:8;
      uint64_t PRI_13:8;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_12_15_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_16:8;
      uint64_t PRI_17:8;
      uint64_t PRI_18:8;
      uint64_t PRI_19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_16_19_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_20:8;
      uint64_t PRI_21:8;
      uint64_t PRI_22:8;
      uint64_t PRI_23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_20_23_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_24:8;
      uint64_t PRI_25:8;
      uint64_t PRI_26:8;
      uint64_t PRI_27:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_24_27_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_28:8;
      uint64_t PRI_29:8;
      uint64_t PRI_30:8;
      uint64_t PRI_31:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_28_31_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_32:8;
      uint64_t PRI_33:8;
      uint64_t PRI_34:8;
      uint64_t PRI_35:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_32_35_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_36:8;
      uint64_t PRI_37:8;
      uint64_t PRI_38:8;
      uint64_t PRI_39:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_36_39_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_40:8;
      uint64_t PRI_41:8;
      uint64_t PRI_42:8;
      uint64_t PRI_43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_40_43_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_44:8;
      uint64_t PRI_45:8;
      uint64_t PRI_46:8;
      uint64_t PRI_47:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_44_47_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_48:8;
      uint64_t PRI_49:8;
      uint64_t PRI_50:8;
      uint64_t PRI_51:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_48_51_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_52:8;
      uint64_t PRI_53:8;
      uint64_t PRI_54:8;
      uint64_t PRI_55:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_52_55_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_56:8;
      uint64_t PRI_57:8;
      uint64_t PRI_58:8;
      uint64_t PRI_59:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_56_59_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_60:8;
      uint64_t PRI_61:8;
      uint64_t PRI_62:8;
      uint64_t PRI_63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_60_63_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_64:8;
      uint64_t PRI_65:8;
      uint64_t PRI_66:8;
      uint64_t PRI_67:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_64_67_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_68:8;
      uint64_t PRI_69:8;
      uint64_t PRI_70:8;
      uint64_t PRI_71:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_68_71_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_72:8;
      uint64_t PRI_73:8;
      uint64_t PRI_74:8;
      uint64_t PRI_75:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_72_75_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_76:8;
      uint64_t PRI_77:8;
      uint64_t PRI_78:8;
      uint64_t PRI_79:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_76_79_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_80:8;
      uint64_t PRI_81:8;
      uint64_t PRI_82:8;
      uint64_t PRI_83:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_80_83_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_84:8;
      uint64_t PRI_85:8;
      uint64_t PRI_86:8;
      uint64_t PRI_87:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_84_87_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_88:8;
      uint64_t PRI_89:8;
      uint64_t PRI_90:8;
      uint64_t PRI_91:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_88_91_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_92:8;
      uint64_t PRI_93:8;
      uint64_t PRI_94:8;
      uint64_t PRI_95:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_92_95_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_96:8;
      uint64_t PRI_97:8;
      uint64_t PRI_98:8;
      uint64_t PRI_99:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_96_99_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_100:8;
      uint64_t PRI_101:8;
      uint64_t PRI_102:8;
      uint64_t PRI_103:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_100_103_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_104:8;
      uint64_t PRI_105:8;
      uint64_t PRI_106:8;
      uint64_t PRI_107:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_104_107_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_108:8;
      uint64_t PRI_109:8;
      uint64_t PRI_110:8;
      uint64_t PRI_111:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_108_111_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_112:8;
      uint64_t PRI_113:8;
      uint64_t PRI_114:8;
      uint64_t PRI_115:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_112_115_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_116:8;
      uint64_t PRI_117:8;
      uint64_t PRI_118:8;
      uint64_t PRI_119:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_116_119_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_120:8;
      uint64_t PRI_121:8;
      uint64_t PRI_122:8;
      uint64_t PRI_123:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_120_123_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_124:8;
      uint64_t PRI_125:8;
      uint64_t PRI_126:8;
      uint64_t PRI_127:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_124_127_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_128:8;
      uint64_t PRI_129:8;
      uint64_t PRI_130:8;
      uint64_t PRI_131:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_128_131_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_132:8;
      uint64_t PRI_133:8;
      uint64_t PRI_134:8;
      uint64_t PRI_135:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_132_135_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_136:8;
      uint64_t PRI_137:8;
      uint64_t PRI_138:8;
      uint64_t PRI_139:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_136_139_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_140:8;
      uint64_t PRI_141:8;
      uint64_t PRI_142:8;
      uint64_t PRI_143:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_140_143_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_144:8;
      uint64_t PRI_145:8;
      uint64_t PRI_146:8;
      uint64_t PRI_147:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_144_147_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_148:8;
      uint64_t PRI_149:8;
      uint64_t PRI_150:8;
      uint64_t PRI_151:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_148_151_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_152:8;
      uint64_t PRI_153:8;
      uint64_t PRI_154:8;
      uint64_t PRI_155:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_152_155_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_156:8;
      uint64_t PRI_157:8;
      uint64_t PRI_158:8;
      uint64_t PRI_159:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_156_159_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_160:8;
      uint64_t PRI_161:8;
      uint64_t PRI_162:8;
      uint64_t PRI_163:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_160_163_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_164:8;
      uint64_t PRI_165:8;
      uint64_t PRI_166:8;
      uint64_t PRI_167:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_164_167_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_168:8;
      uint64_t PRI_169:8;
      uint64_t PRI_170:8;
      uint64_t PRI_171:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_168_171_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_172:8;
      uint64_t PRI_173:8;
      uint64_t PRI_174:8;
      uint64_t PRI_175:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_172_175_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_176:8;
      uint64_t PRI_177:8;
      uint64_t PRI_178:8;
      uint64_t PRI_179:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_176_179_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_180:8;
      uint64_t PRI_181:8;
      uint64_t PRI_182:8;
      uint64_t PRI_183:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_180_183_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_184:8;
      uint64_t PRI_185:8;
      uint64_t PRI_186:8;
      uint64_t PRI_187:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_184_187_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_188:8;
      uint64_t PRI_189:8;
      uint64_t PRI_190:8;
      uint64_t PRI_191:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_188_191_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_192:8;
      uint64_t PRI_193:8;
      uint64_t PRI_194:8;
      uint64_t PRI_195:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_192_195_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_196:8;
      uint64_t PRI_197:8;
      uint64_t PRI_198:8;
      uint64_t PRI_199:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_196_199_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_200:8;
      uint64_t PRI_201:8;
      uint64_t PRI_202:8;
      uint64_t PRI_203:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_200_203_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_204:8;
      uint64_t PRI_205:8;
      uint64_t PRI_206:8;
      uint64_t PRI_207:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_204_207_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_208:8;
      uint64_t PRI_209:8;
      uint64_t PRI_210:8;
      uint64_t PRI_211:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_208_211_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_212:8;
      uint64_t PRI_213:8;
      uint64_t PRI_214:8;
      uint64_t PRI_215:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_212_215_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_216:8;
      uint64_t PRI_217:8;
      uint64_t PRI_218:8;
      uint64_t PRI_219:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_216_219_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_220:8;
      uint64_t PRI_221:8;
      uint64_t PRI_222:8;
      uint64_t PRI_223:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_220_223_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_224:8;
      uint64_t PRI_225:8;
      uint64_t PRI_226:8;
      uint64_t PRI_227:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_224_227_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_228:8;
      uint64_t PRI_229:8;
      uint64_t PRI_230:8;
      uint64_t PRI_231:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_228_231_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_232:8;
      uint64_t PRI_233:8;
      uint64_t PRI_234:8;
      uint64_t PRI_235:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_232_235_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_236:8;
      uint64_t PRI_237:8;
      uint64_t PRI_238:8;
      uint64_t PRI_239:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_236_239_PRI;

};

#define System_Control_Space_NVIC (*(volatile struct System_Control_Space_NVIC_tag *) 0xe000e100)

struct System_Control_Space_SysTick_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t TICKINT:1;
      uint64_t CLKSOURCE:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNTFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t reservedSpace0:6;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CALIB;

};

#define System_Control_Space_SysTick (*(volatile struct System_Control_Space_SysTick_tag *) 0xe000e010)

struct System_Control_Space_Memory_Protection_Unit_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEPARATE:1;
      uint64_t reservedSpace0:7;
      uint64_t DREGION:8;
      uint64_t IREGION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_CTRL;

  uint8_t MPU_RNR;
  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
      uint64_t ADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:4;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RBAR_A3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPU_RASR_A3;

};

#define System_Control_Space_Memory_Protection_Unit (*(volatile struct System_Control_Space_Memory_Protection_Unit_tag *) 0xe000ed90)

struct AIPS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t MPL2:1;
      uint64_t MTW2:1;
      uint64_t MTR2:1;
      uint64_t reservedSpace1:1;
      uint64_t MPL1:1;
      uint64_t MTW1:1;
      uint64_t MTR1:1;
      uint64_t reservedSpace2:1;
      uint64_t MPL0:1;
      uint64_t MTW0:1;
      uint64_t MTR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPRA;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace1:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace1:13;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace2:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRB;

  uint32_t PACRC;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace1:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRD;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:9;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace4:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:13;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace2:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace1:5;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace2:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace3:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace4:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:21;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace1:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace2:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace3:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace4:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace5:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace1:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace2:5;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:5;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:5;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace2:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace3:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:9;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace2:5;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace3:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:13;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRL;

};

#define AIPS (*(volatile struct AIPS_tag *) 0x40000000)

struct MSCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
      uint64_t PERSONALITY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxNUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPMN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxMASTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxCOUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPU:1;
      uint64_t SIMD:1;
      uint64_t JAZ:1;
      uint64_t MMU:1;
      uint64_t TZ:1;
      uint64_t CMP:1;
      uint64_t BB:1;
      uint64_t reservedSpace0:1;
      uint64_t SBP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPxCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RYPZ:8;
      uint64_t PERSONALITY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPMN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0MASTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCWY:8;
      uint64_t DCSZ:8;
      uint64_t ICWY:8;
      uint64_t ICSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t L2WY:8;
      uint64_t L2SZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TMUSZ:8;
      uint64_t reservedSpace1:8;
      uint64_t TMLSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPU:1;
      uint64_t SIMD:1;
      uint64_t JAZ:1;
      uint64_t MMU:1;
      uint64_t TZ:1;
      uint64_t CMP:1;
      uint64_t BB:1;
      uint64_t reservedSpace0:1;
      uint64_t SBP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CP0CFG3;

  uint8_t res0[960];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCM0:4;
      uint64_t OCM1:4;
      uint64_t OCM2:4;
      uint64_t OCMPU:1;
      uint64_t OCMT:3;
      uint64_t RO:1;
      uint64_t OCMW:3;
      uint64_t reservedSpace0:4;
      uint64_t OCMSZ:4;
      uint64_t OCMSZH:1;
      uint64_t reservedSpace1:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCM0:4;
      uint64_t OCM1:4;
      uint64_t OCM2:4;
      uint64_t OCMPU:1;
      uint64_t OCMT:3;
      uint64_t RO:1;
      uint64_t OCMW:3;
      uint64_t reservedSpace0:4;
      uint64_t OCMSZ:4;
      uint64_t OCMSZH:1;
      uint64_t reservedSpace1:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCM0:4;
      uint64_t OCM1:4;
      uint64_t OCM2:4;
      uint64_t OCMPU:1;
      uint64_t OCMT:3;
      uint64_t RO:1;
      uint64_t OCMW:3;
      uint64_t reservedSpace0:4;
      uint64_t OCMSZ:4;
      uint64_t OCMSZH:1;
      uint64_t reservedSpace1:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCM0:4;
      uint64_t OCM1:4;
      uint64_t OCM2:4;
      uint64_t OCMPU:1;
      uint64_t OCMT:3;
      uint64_t RO:1;
      uint64_t OCMW:3;
      uint64_t reservedSpace0:4;
      uint64_t OCMSZ:4;
      uint64_t OCMSZH:1;
      uint64_t reservedSpace1:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMDR3;

};

#define MSCM (*(volatile struct MSCM_tag *) 0x40001000)

struct MPU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:7;
      uint64_t NRGD:4;
      uint64_t NSP:4;
      uint64_t HRL:4;
      uint64_t reservedSpace1:7;
      uint64_t SPERR4:1;
      uint64_t SPERR3:1;
      uint64_t SPERR2:1;
      uint64_t SPERR1:1;
      uint64_t SPERR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CESR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERW:1;
      uint64_t EATTR:3;
      uint64_t EMN:4;
      uint64_t EPID:8;
      uint64_t EACD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR4;

  uint8_t res1[968];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD0_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD0_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD0_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD0_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD1_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD1_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD1_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD1_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD2_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD2_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD2_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD2_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD3_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD3_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD3_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD3_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD4_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD4_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD4_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD4_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD5_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD5_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD5_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD5_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD6_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD6_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD6_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD6_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD7_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD7_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD7_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD7_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD8_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD8_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD8_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD8_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD9_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD9_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD9_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD9_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD10_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD10_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD10_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD10_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD11_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD11_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD11_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD11_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD12_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD12_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD12_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD12_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD13_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD13_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD13_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD13_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD14_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD14_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD14_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD14_WORD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SRTADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD15_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ENDADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD15_WORD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD15_WORD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t reservedSpace0:15;
      uint64_t PIDMASK:8;
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD15_WORD3;

  uint8_t res2[768];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0UM:3;
      uint64_t M0SM:2;
      uint64_t M0PE:1;
      uint64_t M1UM:3;
      uint64_t M1SM:2;
      uint64_t M1PE:1;
      uint64_t M2UM:3;
      uint64_t M2SM:2;
      uint64_t reservedSpace0:1;
      uint64_t M3UM:3;
      uint64_t M3SM:2;
      uint64_t reservedSpace1:1;
      uint64_t M4WE:1;
      uint64_t M4RE:1;
      uint64_t M5WE:1;
      uint64_t M5RE:1;
      uint64_t M6WE:1;
      uint64_t M6RE:1;
      uint64_t M7WE:1;
      uint64_t M7RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGDAAC15;

};

#define MPU (*(volatile struct MPU_tag *) 0x4000d000)

struct ERM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:26;
      uint64_t ENCIE1:1;
      uint64_t ESCIE1:1;
      uint64_t reservedSpace1:2;
      uint64_t ENCIE0:1;
      uint64_t ESCIE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:26;
      uint64_t NCE1:1;
      uint64_t SBC1:1;
      uint64_t reservedSpace1:2;
      uint64_t NCE0:1;
      uint64_t SBC0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR0;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR0;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR1;

};

#define ERM (*(volatile struct ERM_tag *) 0x40018000)

struct EIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t EICH1EN:1;
      uint64_t EICH0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHEN;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:25;
      uint64_t CHKBIT_MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD0_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD0_WORD1;

  uint8_t res1[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:25;
      uint64_t CHKBIT_MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD1_WORD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD1_WORD1;

};

#define EIM (*(volatile struct EIM_tag *) 0x40019000)

struct FTFC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MGSTAT0:1;
      uint64_t reservedSpace0:3;
      uint64_t FPVIOL:1;
      uint64_t ACCERR:1;
      uint64_t RDCOLERR:1;
      uint64_t CCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EEERDY:1;
      uint64_t RAMRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t ERSSUSP:1;
      uint64_t ERSAREQ:1;
      uint64_t RDCOLLIE:1;
      uint64_t CCIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCNFG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SEC:2;
      uint64_t FSLACC:2;
      uint64_t MEEN:2;
      uint64_t KEYEN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSEC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FOPT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOBB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOBA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT0;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EPROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FEPROT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DPROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FDPROT;

  uint8_t res1[20];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BSY:1;
      uint64_t SB:1;
      uint64_t BIN:1;
      uint64_t BFN:1;
      uint64_t BOK:1;
      uint64_t RIN:1;
      uint64_t EDB:1;
      uint64_t IDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCSESTAT;

  uint8_t res2[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DFDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FERSTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DFDIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FDFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FERCNFG;

};

#define FTFC (*(volatile struct FTFC_tag *) 0x40020000)

struct DMAMUX_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

};

#define DMAMUX (*(volatile struct DMAMUX_tag *) 0x40021000)

struct CAN0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:1;
      uint64_t FDEN:1;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t PNET_EN:1;
      uint64_t DMA:1;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace2:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace4:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t CLKSRC:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
      uint64_t TXERRCNT_FAST:8;
      uint64_t RXERRCNT_FAST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t BOFFDONEINT:1;
      uint64_t ERRINT_FAST:1;
      uint64_t ERROVR:1;
      uint64_t reservedSpace1:4;
      uint64_t STFERR_FAST:1;
      uint64_t FRMERR_FAST:1;
      uint64_t CRCERR_FAST:1;
      uint64_t reservedSpace2:1;
      uint64_t BIT0ERR_FAST:1;
      uint64_t BIT1ERR_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t EDFLTDIS:1;
      uint64_t ISOCANFDEN:1;
      uint64_t reservedSpace1:1;
      uint64_t PREXCEN:1;
      uint64_t TIMER_SRC:1;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t reservedSpace2:2;
      uint64_t BOFFDONEMSK:1;
      uint64_t ERRMSK_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:5;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res4[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM127;

  uint8_t res5[1536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  uint8_t res6[512];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCS:2;
      uint64_t IDFS:2;
      uint64_t PLFS:2;
      uint64_t reservedSpace0:2;
      uint64_t NMATCH:8;
      uint64_t WUMF_MSK:1;
      uint64_t WTOF_MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1_PN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHTO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2_PN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t MCOUNTER:8;
      uint64_t WUMF:1;
      uint64_t WTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WU_MTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_ID1:29;
      uint64_t FLT_RTR:1;
      uint64_t FLT_IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_ID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_DLC_HI:4;
      uint64_t reservedSpace0:12;
      uint64_t FLT_DLC_LO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_DLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL1_LO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL1_HI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_ID2_IDMASK:29;
      uint64_t RTR_MSK:1;
      uint64_t IDE_MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_ID2_IDMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL2_PLMASK_LO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL2_PLMASK_HI;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_D47;

  uint8_t res8[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCVAL:6;
      uint64_t reservedSpace0:2;
      uint64_t TDCOFF:5;
      uint64_t reservedSpace1:1;
      uint64_t TDCFAIL:1;
      uint64_t TDCEN:1;
      uint64_t MBDSR0:2;
      uint64_t reservedSpace2:13;
      uint64_t FDRATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPSEG2:3;
      uint64_t reservedSpace0:2;
      uint64_t FPSEG1:3;
      uint64_t reservedSpace1:2;
      uint64_t FPROPSEG:5;
      uint64_t reservedSpace2:1;
      uint64_t FRJW:3;
      uint64_t reservedSpace3:1;
      uint64_t FPRESDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCBT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD_TXCRC:21;
      uint64_t reservedSpace0:3;
      uint64_t FD_MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCRC;

};

#define CAN0 (*(volatile struct CAN0_tag *) 0x40024000)

struct CAN1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:1;
      uint64_t FDEN:1;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t PNET_EN:1;
      uint64_t DMA:1;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace2:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace4:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t CLKSRC:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
      uint64_t TXERRCNT_FAST:8;
      uint64_t RXERRCNT_FAST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t BOFFDONEINT:1;
      uint64_t ERRINT_FAST:1;
      uint64_t ERROVR:1;
      uint64_t reservedSpace1:4;
      uint64_t STFERR_FAST:1;
      uint64_t FRMERR_FAST:1;
      uint64_t CRCERR_FAST:1;
      uint64_t reservedSpace2:1;
      uint64_t BIT0ERR_FAST:1;
      uint64_t BIT1ERR_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t EDFLTDIS:1;
      uint64_t ISOCANFDEN:1;
      uint64_t reservedSpace1:1;
      uint64_t PREXCEN:1;
      uint64_t TIMER_SRC:1;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t reservedSpace2:2;
      uint64_t BOFFDONEMSK:1;
      uint64_t ERRMSK_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:5;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res4[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM127;

  uint8_t res5[1536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  uint8_t res6[512];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCS:2;
      uint64_t IDFS:2;
      uint64_t PLFS:2;
      uint64_t reservedSpace0:2;
      uint64_t NMATCH:8;
      uint64_t WUMF_MSK:1;
      uint64_t WTOF_MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1_PN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHTO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2_PN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t MCOUNTER:8;
      uint64_t WUMF:1;
      uint64_t WTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WU_MTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_ID1:29;
      uint64_t FLT_RTR:1;
      uint64_t FLT_IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_ID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_DLC_HI:4;
      uint64_t reservedSpace0:12;
      uint64_t FLT_DLC_LO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_DLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL1_LO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL1_HI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_ID2_IDMASK:29;
      uint64_t RTR_MSK:1;
      uint64_t IDE_MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_ID2_IDMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL2_PLMASK_LO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL2_PLMASK_HI;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_D47;

  uint8_t res8[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCVAL:6;
      uint64_t reservedSpace0:2;
      uint64_t TDCOFF:5;
      uint64_t reservedSpace1:1;
      uint64_t TDCFAIL:1;
      uint64_t TDCEN:1;
      uint64_t MBDSR0:2;
      uint64_t reservedSpace2:13;
      uint64_t FDRATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPSEG2:3;
      uint64_t reservedSpace0:2;
      uint64_t FPSEG1:3;
      uint64_t reservedSpace1:2;
      uint64_t FPROPSEG:5;
      uint64_t reservedSpace2:1;
      uint64_t FRJW:3;
      uint64_t reservedSpace3:1;
      uint64_t FPRESDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCBT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD_TXCRC:21;
      uint64_t reservedSpace0:3;
      uint64_t FD_MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCRC;

};

#define CAN1 (*(volatile struct CAN1_tag *) 0x40025000)

struct CAN2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:1;
      uint64_t FDEN:1;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t PNET_EN:1;
      uint64_t DMA:1;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace2:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace4:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t CLKSRC:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
      uint64_t TXERRCNT_FAST:8;
      uint64_t RXERRCNT_FAST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t BOFFDONEINT:1;
      uint64_t ERRINT_FAST:1;
      uint64_t ERROVR:1;
      uint64_t reservedSpace1:4;
      uint64_t STFERR_FAST:1;
      uint64_t FRMERR_FAST:1;
      uint64_t CRCERR_FAST:1;
      uint64_t reservedSpace2:1;
      uint64_t BIT0ERR_FAST:1;
      uint64_t BIT1ERR_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t EDFLTDIS:1;
      uint64_t ISOCANFDEN:1;
      uint64_t reservedSpace1:1;
      uint64_t PREXCEN:1;
      uint64_t TIMER_SRC:1;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t reservedSpace2:2;
      uint64_t BOFFDONEMSK:1;
      uint64_t ERRMSK_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:5;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res4[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_BYTE_3:8;
      uint64_t DATA_BYTE_2:8;
      uint64_t DATA_BYTE_1:8;
      uint64_t DATA_BYTE_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EmbeddedRAM127;

  uint8_t res5[1536];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  uint8_t res6[512];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCS:2;
      uint64_t IDFS:2;
      uint64_t PLFS:2;
      uint64_t reservedSpace0:2;
      uint64_t NMATCH:8;
      uint64_t WUMF_MSK:1;
      uint64_t WTOF_MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1_PN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCHTO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2_PN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t MCOUNTER:8;
      uint64_t WUMF:1;
      uint64_t WTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WU_MTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_ID1:29;
      uint64_t FLT_RTR:1;
      uint64_t FLT_IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_ID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_DLC_HI:4;
      uint64_t reservedSpace0:12;
      uint64_t FLT_DLC_LO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_DLC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL1_LO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL1_HI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT_ID2_IDMASK:29;
      uint64_t RTR_MSK:1;
      uint64_t IDE_MSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLT_ID2_IDMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL2_PLMASK_LO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL2_PLMASK_HI;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB0_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB1_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB2_D47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DLC:4;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t SRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_3:8;
      uint64_t Data_byte_2:8;
      uint64_t Data_byte_1:8;
      uint64_t Data_byte_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_D03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_byte_7:8;
      uint64_t Data_byte_6:8;
      uint64_t Data_byte_5:8;
      uint64_t Data_byte_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMB3_D47;

  uint8_t res8[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCVAL:6;
      uint64_t reservedSpace0:2;
      uint64_t TDCOFF:5;
      uint64_t reservedSpace1:1;
      uint64_t TDCFAIL:1;
      uint64_t TDCEN:1;
      uint64_t MBDSR0:2;
      uint64_t reservedSpace2:13;
      uint64_t FDRATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPSEG2:3;
      uint64_t reservedSpace0:2;
      uint64_t FPSEG1:3;
      uint64_t reservedSpace1:2;
      uint64_t FPROPSEG:5;
      uint64_t reservedSpace2:1;
      uint64_t FRJW:3;
      uint64_t reservedSpace3:1;
      uint64_t FPRESDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCBT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD_TXCRC:21;
      uint64_t reservedSpace0:3;
      uint64_t FD_MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCRC;

};

#define CAN2 (*(volatile struct CAN2_tag *) 0x4002b000)

struct FTM0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM0 (*(volatile struct FTM0_tag *) 0x40038000)

struct FTM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM1 (*(volatile struct FTM1_tag *) 0x40039000)

struct FTM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM2 (*(volatile struct FTM2_tag *) 0x4003a000)

struct FTM3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM3 (*(volatile struct FTM3_tag *) 0x40026000)

struct FTM4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM4 (*(volatile struct FTM4_tag *) 0x4006e000)

struct FTM5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM5 (*(volatile struct FTM5_tag *) 0x4006f000)

struct FTM6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM6 (*(volatile struct FTM6_tag *) 0x40070000)

struct FTM7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CLKS:2;
      uint64_t CPWMS:1;
      uint64_t RIE:1;
      uint64_t RF:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t reservedSpace0:6;
      uint64_t PWMEN0:1;
      uint64_t PWMEN1:1;
      uint64_t PWMEN2:1;
      uint64_t PWMEN3:1;
      uint64_t PWMEN4:1;
      uint64_t PWMEN5:1;
      uint64_t PWMEN6:1;
      uint64_t PWMEN7:1;
      uint64_t FLTPS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t ICRST:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t TRIGMODE:1;
      uint64_t CHIS:1;
      uint64_t CHOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTMEN:1;
      uint64_t INIT:1;
      uint64_t WPDIS:1;
      uint64_t PWMSYNC:1;
      uint64_t CAPTEST:1;
      uint64_t FAULTM:2;
      uint64_t FAULTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTMIN:1;
      uint64_t CNTMAX:1;
      uint64_t REINIT:1;
      uint64_t SYNCHOM:1;
      uint64_t TRIG0:1;
      uint64_t TRIG1:1;
      uint64_t TRIG2:1;
      uint64_t SWSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OI:1;
      uint64_t CH1OI:1;
      uint64_t CH2OI:1;
      uint64_t CH3OI:1;
      uint64_t CH4OI:1;
      uint64_t CH5OI:1;
      uint64_t CH6OI:1;
      uint64_t CH7OI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OM:1;
      uint64_t CH1OM:1;
      uint64_t CH2OM:1;
      uint64_t CH3OM:1;
      uint64_t CH4OM:1;
      uint64_t CH5OM:1;
      uint64_t CH6OM:1;
      uint64_t CH7OM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMP0:1;
      uint64_t DECAPEN0:1;
      uint64_t DECAP0:1;
      uint64_t DTEN0:1;
      uint64_t SYNCEN0:1;
      uint64_t FAULTEN0:1;
      uint64_t MCOMBINE0:1;
      uint64_t COMBINE1:1;
      uint64_t COMP1:1;
      uint64_t DECAPEN1:1;
      uint64_t DECAP1:1;
      uint64_t DTEN1:1;
      uint64_t SYNCEN1:1;
      uint64_t FAULTEN1:1;
      uint64_t MCOMBINE1:1;
      uint64_t COMBINE2:1;
      uint64_t COMP2:1;
      uint64_t DECAPEN2:1;
      uint64_t DECAP2:1;
      uint64_t DTEN2:1;
      uint64_t SYNCEN2:1;
      uint64_t FAULTEN2:1;
      uint64_t MCOMBINE2:1;
      uint64_t COMBINE3:1;
      uint64_t COMP3:1;
      uint64_t DECAPEN3:1;
      uint64_t DECAP3:1;
      uint64_t DTEN3:1;
      uint64_t SYNCEN3:1;
      uint64_t FAULTEN3:1;
      uint64_t MCOMBINE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEADTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH2TRIG:1;
      uint64_t CH3TRIG:1;
      uint64_t CH4TRIG:1;
      uint64_t CH5TRIG:1;
      uint64_t CH0TRIG:1;
      uint64_t CH1TRIG:1;
      uint64_t INITTRIGEN:1;
      uint64_t TRIGF:1;
      uint64_t CH6TRIG:1;
      uint64_t CH7TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
      uint64_t POL4:1;
      uint64_t POL5:1;
      uint64_t POL6:1;
      uint64_t POL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULTF0:1;
      uint64_t FAULTF1:1;
      uint64_t FAULTF2:1;
      uint64_t FAULTF3:1;
      uint64_t reservedSpace0:1;
      uint64_t FAULTIN:1;
      uint64_t WPEN:1;
      uint64_t FAULTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAULT0EN:1;
      uint64_t FAULT1EN:1;
      uint64_t FAULT2EN:1;
      uint64_t FAULT3EN:1;
      uint64_t FFLTR0EN:1;
      uint64_t FFLTR1EN:1;
      uint64_t FFLTR2EN:1;
      uint64_t FFLTR3EN:1;
      uint64_t FFVAL:4;
      uint64_t reservedSpace0:3;
      uint64_t FSTATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
      uint64_t PHBPOL:1;
      uint64_t PHAPOL:1;
      uint64_t PHBFLTREN:1;
      uint64_t PHAFLTREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDFQ:5;
      uint64_t reservedSpace0:1;
      uint64_t BDMMODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GTBEEN:1;
      uint64_t GTBEOUT:1;
      uint64_t ITRIGR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLT0POL:1;
      uint64_t FLT1POL:1;
      uint64_t FLT2POL:1;
      uint64_t FLT3POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWTRIGMODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CNTINC:1;
      uint64_t reservedSpace1:1;
      uint64_t INVC:1;
      uint64_t SWOC:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNCMODE:1;
      uint64_t SWRSTCNT:1;
      uint64_t SWWRBUF:1;
      uint64_t SWOM:1;
      uint64_t SWINVC:1;
      uint64_t SWSOC:1;
      uint64_t reservedSpace3:3;
      uint64_t HWRSTCNT:1;
      uint64_t HWWRBUF:1;
      uint64_t HWOM:1;
      uint64_t HWINVC:1;
      uint64_t HWSOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV0EN:1;
      uint64_t INV1EN:1;
      uint64_t INV2EN:1;
      uint64_t INV3EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0OC:1;
      uint64_t CH1OC:1;
      uint64_t CH2OC:1;
      uint64_t CH3OC:1;
      uint64_t CH4OC:1;
      uint64_t CH5OC:1;
      uint64_t CH6OC:1;
      uint64_t CH7OC:1;
      uint64_t CH0OCV:1;
      uint64_t CH1OCV:1;
      uint64_t CH2OCV:1;
      uint64_t CH3OCV:1;
      uint64_t CH4OCV:1;
      uint64_t CH5OCV:1;
      uint64_t CH6OCV:1;
      uint64_t CH7OCV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0SEL:1;
      uint64_t CH1SEL:1;
      uint64_t CH2SEL:1;
      uint64_t CH3SEL:1;
      uint64_t CH4SEL:1;
      uint64_t CH5SEL:1;
      uint64_t CH6SEL:1;
      uint64_t CH7SEL:1;
      uint64_t HCSEL:1;
      uint64_t LDOK:1;
      uint64_t GLEN:1;
      uint64_t GLDOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR0DEADTIME;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR1DEADTIME;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR2DEADTIME;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTVAL:6;
      uint64_t DTPS:2;
      uint64_t reservedSpace0:8;
      uint64_t DTVALEX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAIR3DEADTIME;

  uint8_t res3[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACMOD:5;
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6V_MIRROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t FRACVAL:5;
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7V_MIRROR;

};

#define FTM7 (*(volatile struct FTM7_tag *) 0x40071000)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADICLK:2;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t ADIV:2;
      uint64_t reservedSpace1:1;
      uint64_t CLRLTRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPLTS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFSEL:2;
      uint64_t DMAEN:1;
      uint64_t ACREN:1;
      uint64_t ACFGT:1;
      uint64_t ACFE:1;
      uint64_t ADTRG:1;
      uint64_t ADACT:1;
      uint64_t reservedSpace0:5;
      uint64_t TRGPRNUM:2;
      uint64_t reservedSpace1:1;
      uint64_t TRGSTLAT:4;
      uint64_t reservedSpace2:4;
      uint64_t TRGSTERR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVGS:2;
      uint64_t AVGE:1;
      uint64_t ADCO:1;
      uint64_t reservedSpace0:3;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BA_OFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USR_OFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USR_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOFS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XOFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YOFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) YOFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UG:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP3:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP1:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPX:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP9:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPS_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPS_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP3_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP3_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP2_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP2_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP1_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP1_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP0_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP0_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPX_OFS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPX_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP9_OFS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP9_OFS;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1Q;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1X;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1Y;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1Z;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAF;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x4003b000)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADICLK:2;
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t ADIV:2;
      uint64_t reservedSpace1:1;
      uint64_t CLRLTRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPLTS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFSEL:2;
      uint64_t DMAEN:1;
      uint64_t ACREN:1;
      uint64_t ACFGT:1;
      uint64_t ACFE:1;
      uint64_t ADTRG:1;
      uint64_t ADACT:1;
      uint64_t reservedSpace0:5;
      uint64_t TRGPRNUM:2;
      uint64_t reservedSpace1:1;
      uint64_t TRGSTLAT:4;
      uint64_t reservedSpace2:4;
      uint64_t TRGSTERR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVGS:2;
      uint64_t AVGE:1;
      uint64_t ADCO:1;
      uint64_t reservedSpace0:3;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BA_OFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USR_OFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USR_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOFS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XOFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YOFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) YOFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UG:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP3:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP1:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPX:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP9:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPS_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPS_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP3_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP3_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP2_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP2_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP1_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP1_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP0_OFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP0_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPX_OFS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPX_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP9_OFS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP9_OFS;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aSC1P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1Q;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1U;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1X;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1Y;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1Z;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:6;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1AF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) aRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAF;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40027000)

struct LPSPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t WCF:1;
      uint64_t FCF:1;
      uint64_t TCF:1;
      uint64_t TEF:1;
      uint64_t REF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:10;
      uint64_t MBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t WCIE:1;
      uint64_t FCIE:1;
      uint64_t TCIE:1;
      uint64_t TEIE:1;
      uint64_t REIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t SAMPLE:1;
      uint64_t AUTOPCS:1;
      uint64_t NOSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t PCSPOL:4;
      uint64_t reservedSpace1:4;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:2;
      uint64_t OUTCFG:1;
      uint64_t PCSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDIV:8;
      uint64_t DBT:8;
      uint64_t PCSSCK:8;
      uint64_t SCKPCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESZ:12;
      uint64_t reservedSpace0:4;
      uint64_t WIDTH:2;
      uint64_t TXMSK:1;
      uint64_t RXMSK:1;
      uint64_t CONTC:1;
      uint64_t CONT:1;
      uint64_t BYSW:1;
      uint64_t LSBF:1;
      uint64_t PCS:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESCALE:3;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

};

#define LPSPI0 (*(volatile struct LPSPI0_tag *) 0x4002c000)

struct LPSPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t WCF:1;
      uint64_t FCF:1;
      uint64_t TCF:1;
      uint64_t TEF:1;
      uint64_t REF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:10;
      uint64_t MBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t WCIE:1;
      uint64_t FCIE:1;
      uint64_t TCIE:1;
      uint64_t TEIE:1;
      uint64_t REIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t SAMPLE:1;
      uint64_t AUTOPCS:1;
      uint64_t NOSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t PCSPOL:4;
      uint64_t reservedSpace1:4;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:2;
      uint64_t OUTCFG:1;
      uint64_t PCSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDIV:8;
      uint64_t DBT:8;
      uint64_t PCSSCK:8;
      uint64_t SCKPCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESZ:12;
      uint64_t reservedSpace0:4;
      uint64_t WIDTH:2;
      uint64_t TXMSK:1;
      uint64_t RXMSK:1;
      uint64_t CONTC:1;
      uint64_t CONT:1;
      uint64_t BYSW:1;
      uint64_t LSBF:1;
      uint64_t PCS:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESCALE:3;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

};

#define LPSPI1 (*(volatile struct LPSPI1_tag *) 0x4002d000)

struct LPSPI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t WCF:1;
      uint64_t FCF:1;
      uint64_t TCF:1;
      uint64_t TEF:1;
      uint64_t REF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:10;
      uint64_t MBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t WCIE:1;
      uint64_t FCIE:1;
      uint64_t TCIE:1;
      uint64_t TEIE:1;
      uint64_t REIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t SAMPLE:1;
      uint64_t AUTOPCS:1;
      uint64_t NOSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t PCSPOL:4;
      uint64_t reservedSpace1:4;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:2;
      uint64_t OUTCFG:1;
      uint64_t PCSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMR1;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCKDIV:8;
      uint64_t DBT:8;
      uint64_t PCSSCK:8;
      uint64_t SCKPCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESZ:12;
      uint64_t reservedSpace0:4;
      uint64_t WIDTH:2;
      uint64_t TXMSK:1;
      uint64_t RXMSK:1;
      uint64_t CONTC:1;
      uint64_t CONT:1;
      uint64_t BYSW:1;
      uint64_t LSBF:1;
      uint64_t PCS:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESCALE:3;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOF:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

};

#define LPSPI2 (*(volatile struct LPSPI2_tag *) 0x4002e000)

struct LPIT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL:8;
      uint64_t EXT_TRIG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_CEN:1;
      uint64_t SW_RST:1;
      uint64_t DOZE_EN:1;
      uint64_t DBG_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF0:1;
      uint64_t TIF1:1;
      uint64_t TIF2:1;
      uint64_t TIF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIE0:1;
      uint64_t TIE1:1;
      uint64_t TIE2:1;
      uint64_t TIE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_T_EN_0:1;
      uint64_t SET_T_EN_1:1;
      uint64_t SET_T_EN_2:1;
      uint64_t SET_T_EN_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_T_EN_0:1;
      uint64_t CLR_T_EN_1:1;
      uint64_t CLR_T_EN_2:1;
      uint64_t CLR_T_EN_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLRTEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TVAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR_CUR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_EN:1;
      uint64_t CHAIN:1;
      uint64_t MODE:2;
      uint64_t reservedSpace0:12;
      uint64_t TSOT:1;
      uint64_t TSOI:1;
      uint64_t TROT:1;
      uint64_t reservedSpace1:4;
      uint64_t TRG_SRC:1;
      uint64_t TRG_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL3;

};

#define LPIT0 (*(volatile struct LPIT0_tag *) 0x40037000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:8;
      uint64_t CIR:8;
      uint64_t TCV:8;
      uint64_t CIC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t reservedSpace0:1;
      uint64_t SUP:1;
      uint64_t UM:1;
      uint64_t reservedSpace1:1;
      uint64_t CPS:1;
      uint64_t reservedSpace2:1;
      uint64_t LPOS:1;
      uint64_t reservedSpace3:16;
      uint64_t CPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
      uint64_t TOF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TCL:1;
      uint64_t CRL:1;
      uint64_t SRL:1;
      uint64_t LRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIIE:1;
      uint64_t TOIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:1;
      uint64_t TSIE:1;
      uint64_t reservedSpace1:11;
      uint64_t TSIC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define RTC (*(volatile struct RTC_tag *) 0x4003d000)

struct LPTMR0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TMS:1;
      uint64_t TFC:1;
      uint64_t TPP:1;
      uint64_t TPS:2;
      uint64_t TIE:1;
      uint64_t TCF:1;
      uint64_t TDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:2;
      uint64_t PBYP:1;
      uint64_t PRESCALE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPARE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNR;

};

#define LPTMR0 (*(volatile struct LPTMR0_tag *) 0x40040000)

struct SIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_INTERLEAVE_EN:4;
      uint64_t CLKOUTSEL:4;
      uint64_t CLKOUTDIV:3;
      uint64_t CLKOUTEN:1;
      uint64_t TRACECLK_SEL:1;
      uint64_t PDB_BB_SEL:1;
      uint64_t reservedSpace0:2;
      uint64_t ADC_SUPPLY:3;
      uint64_t ADC_SUPPLYEN:1;
      uint64_t SRAMU_RETEN:1;
      uint64_t SRAML_RETEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPCTL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTM0FLTxSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t FTM1FLTxSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t FTM2FLTxSEL:3;
      uint64_t reservedSpace2:1;
      uint64_t FTM3FLTxSEL:3;
      uint64_t reservedSpace3:1;
      uint64_t FTM4CLKSEL:2;
      uint64_t FTM5CLKSEL:2;
      uint64_t FTM6CLKSEL:2;
      uint64_t FTM7CLKSEL:2;
      uint64_t FTM0CLKSEL:2;
      uint64_t FTM1CLKSEL:2;
      uint64_t FTM2CLKSEL:2;
      uint64_t FTM3CLKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTMOPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPO1KCLKEN:1;
      uint64_t LPO32KCLKEN:1;
      uint64_t LPOCLKSEL:2;
      uint64_t RTCCLKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPOCLKS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC0TRGSEL:1;
      uint64_t ADC0SWPRETRG:3;
      uint64_t ADC0PRETRGSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ADC1TRGSEL:1;
      uint64_t ADC1SWPRETRG:3;
      uint64_t ADC1PRETRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTM0SYNCBIT:1;
      uint64_t FTM1SYNCBIT:1;
      uint64_t FTM2SYNCBIT:1;
      uint64_t FTM3SYNCBIT:1;
      uint64_t FTM1CH0SEL:2;
      uint64_t FTM2CH0SEL:2;
      uint64_t FTM2CH1SEL:1;
      uint64_t reservedSpace0:2;
      uint64_t FTM4SYNCBIT:1;
      uint64_t FTM5SYNCBIT:1;
      uint64_t FTM6SYNCBIT:1;
      uint64_t FTM7SYNCBIT:1;
      uint64_t FTMGLDOK:1;
      uint64_t FTM0_OUTSEL:8;
      uint64_t FTM3_OUTSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTMOPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t FTM_GTB_SPLIT_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t FTM0_OBE_CTRL:1;
      uint64_t FTM1_OBE_CTRL:1;
      uint64_t FTM2_OBE_CTRL:1;
      uint64_t FTM3_OBE_CTRL:1;
      uint64_t FTM4_OBE_CTRL:1;
      uint64_t FTM5_OBE_CTRL:1;
      uint64_t FTM6_OBE_CTRL:1;
      uint64_t FTM7_OBE_CTRL:1;
      uint64_t RMII_CLK_OBE:1;
      uint64_t RMII_CLK_SEL:1;
      uint64_t QSPI_CLK_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURES:8;
      uint64_t PACKAGE:4;
      uint64_t REVID:4;
      uint64_t RAMSIZE:4;
      uint64_t DERIVATE:4;
      uint64_t SUBSERIES:4;
      uint64_t GENERATION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDID;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CGCMSCM:1;
      uint64_t CGCMPU:1;
      uint64_t CGCDMA:1;
      uint64_t CGCERM:1;
      uint64_t CGCEIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLATCGC;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t DEPART:4;
      uint64_t EEERAMSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDMH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACEFRAC:1;
      uint64_t TRACEDIV:3;
      uint64_t reservedSpace0:24;
      uint64_t TRACEDIVEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISCTRL1;

};

#define SIM (*(volatile struct SIM_tag *) 0x40048004)

struct PORTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:2;
      uint64_t PFE:1;
      uint64_t reservedSpace1:3;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFWR;

};

#define PORTA (*(volatile struct PORTA_tag *) 0x40049000)

struct PORTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFWR;

};

#define PORTB (*(volatile struct PORTB_tag *) 0x4004a000)

struct PORTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFWR;

};

#define PORTC (*(volatile struct PORTC_tag *) 0x4004b000)

struct PORTD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:2;
      uint64_t PFE:1;
      uint64_t reservedSpace1:3;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFWR;

};

#define PORTD (*(volatile struct PORTD_tag *) 0x4004c000)

struct PORTE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:4;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:3;
      uint64_t reservedSpace2:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:6;
      uint64_t MUX:3;
      uint64_t reservedSpace1:4;
      uint64_t LK:1;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GICHR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFWR;

};

#define PORTE (*(volatile struct PORTE_tag *) 0x4004d000)

struct WDOG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP:1;
      uint64_t WAIT:1;
      uint64_t DBG:1;
      uint64_t TST:2;
      uint64_t UPDATE:1;
      uint64_t INT:1;
      uint64_t EN:1;
      uint64_t CLK:2;
      uint64_t RCS:1;
      uint64_t ULK:1;
      uint64_t PRES:1;
      uint64_t CMD32EN:1;
      uint64_t FLG:1;
      uint64_t WIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTLOW:8;
      uint64_t CNTHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOVALLOW:8;
      uint64_t TOVALHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINLOW:8;
      uint64_t WINHIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WIN;

};

#define WDOG (*(volatile struct WDOG_tag *) 0x40052000)

struct SAI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALINE:4;
      uint64_t reservedSpace0:4;
      uint64_t FIFO:4;
      uint64_t reservedSpace1:4;
      uint64_t FRAME:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t reservedSpace4:1;
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:4;
      uint64_t reservedSpace0:12;
      uint64_t TCE:4;
      uint64_t reservedSpace1:4;
      uint64_t CFR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t CHMOD:1;
      uint64_t reservedSpace0:2;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:4;
      uint64_t reservedSpace2:4;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR3;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TMR;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t reservedSpace4:1;
      uint64_t RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:4;
      uint64_t reservedSpace0:12;
      uint64_t RCE:4;
      uint64_t reservedSpace1:4;
      uint64_t CFR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t reservedSpace0:3;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:4;
      uint64_t reservedSpace2:4;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR3;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RMR;

};

#define SAI0 (*(volatile struct SAI0_tag *) 0x40054000)

struct SAI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALINE:4;
      uint64_t reservedSpace0:4;
      uint64_t FIFO:4;
      uint64_t reservedSpace1:4;
      uint64_t FRAME:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t reservedSpace4:1;
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:4;
      uint64_t reservedSpace0:12;
      uint64_t TCE:4;
      uint64_t reservedSpace1:4;
      uint64_t CFR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t CHMOD:1;
      uint64_t reservedSpace0:2;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:4;
      uint64_t reservedSpace2:4;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TDR3;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:12;
      uint64_t WFP:4;
      uint64_t reservedSpace1:11;
      uint64_t WCP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TFR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_TMR;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDE:1;
      uint64_t FWDE:1;
      uint64_t reservedSpace0:6;
      uint64_t FRIE:1;
      uint64_t FWIE:1;
      uint64_t FEIE:1;
      uint64_t SEIE:1;
      uint64_t WSIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FRF:1;
      uint64_t FWF:1;
      uint64_t FEF:1;
      uint64_t SEF:1;
      uint64_t WSF:1;
      uint64_t reservedSpace2:3;
      uint64_t SR:1;
      uint64_t FR:1;
      uint64_t reservedSpace3:2;
      uint64_t BCE:1;
      uint64_t DBGE:1;
      uint64_t reservedSpace4:1;
      uint64_t RE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:8;
      uint64_t reservedSpace0:16;
      uint64_t BCD:1;
      uint64_t BCP:1;
      uint64_t MSEL:2;
      uint64_t BCI:1;
      uint64_t BCS:1;
      uint64_t SYNC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDFL:4;
      uint64_t reservedSpace0:12;
      uint64_t RCE:4;
      uint64_t reservedSpace1:4;
      uint64_t CFR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSD:1;
      uint64_t FSP:1;
      uint64_t ONDEM:1;
      uint64_t FSE:1;
      uint64_t MF:1;
      uint64_t reservedSpace0:3;
      uint64_t SYWD:5;
      uint64_t reservedSpace1:3;
      uint64_t FRSZ:4;
      uint64_t reservedSpace2:4;
      uint64_t FPACK:2;
      uint64_t FCOMB:2;
      uint64_t FCONT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FBT:5;
      uint64_t reservedSpace1:3;
      uint64_t W0W:5;
      uint64_t reservedSpace2:3;
      uint64_t WNW:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RDR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFP:4;
      uint64_t reservedSpace0:11;
      uint64_t RCP:1;
      uint64_t WFP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RFR3;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAI_RMR;

};

#define SAI1 (*(volatile struct SAI1_tag *) 0x40055000)

struct FLEXIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTER:8;
      uint64_t TIMER:8;
      uint64_t PIN:8;
      uint64_t TRIGGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEXEN:1;
      uint64_t SWRST:1;
      uint64_t FASTACC:1;
      uint64_t reservedSpace0:27;
      uint64_t DBGE:1;
      uint64_t DOZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSIE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEIE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTEIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEIE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMIEN;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSDE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTSDEN;

  uint8_t res2[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMOD:3;
      uint64_t reservedSpace0:4;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:5;
      uint64_t TIMPOL:1;
      uint64_t TIMSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCTL3;

  uint8_t res3[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTART:2;
      uint64_t reservedSpace0:2;
      uint64_t SSTOP:2;
      uint64_t reservedSpace1:2;
      uint64_t INSRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTCFG3;

  uint8_t res4[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUF3;

  uint8_t res5[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBIS3;

  uint8_t res6[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBYS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBYS3;

  uint8_t res7[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFTBUFBBS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTBUFBBS3;

  uint8_t res8[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMOD:2;
      uint64_t reservedSpace0:5;
      uint64_t PINPOL:1;
      uint64_t PINSEL:3;
      uint64_t reservedSpace1:5;
      uint64_t PINCFG:2;
      uint64_t reservedSpace2:4;
      uint64_t TRGSRC:1;
      uint64_t TRGPOL:1;
      uint64_t TRGSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTL3;

  uint8_t res9[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSTART:1;
      uint64_t reservedSpace1:2;
      uint64_t TSTOP:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMENA:3;
      uint64_t reservedSpace3:1;
      uint64_t TIMDIS:3;
      uint64_t reservedSpace4:1;
      uint64_t TIMRST:3;
      uint64_t reservedSpace5:1;
      uint64_t TIMDEC:2;
      uint64_t reservedSpace6:2;
      uint64_t TIMOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCFG3;

  uint8_t res10[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCMP3;

};

#define FLEXIO (*(volatile struct FLEXIO_tag *) 0x4005a000)

struct EWM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t EWMEN:1;
      uint64_t ASSIN:1;
      uint64_t INEN:1;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SERVICE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SERV;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPAREL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPAREH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPH;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CLKPRESCALER;

};

#define EWM (*(volatile struct EWM_tag *) 0x40061000)

struct TRGMUX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_DMAMUX0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_EXTOUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_EXTOUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_ADC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_ADC1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_CMP0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_PDB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_PDB1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FLEXIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:1;
      uint64_t SEL1:7;
      uint64_t reservedSpace1:1;
      uint64_t SEL2:7;
      uint64_t reservedSpace2:1;
      uint64_t SEL3:7;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPIT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPUART0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPUART1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPI2C0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPSPI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPSPI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPTMR0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_LPI2C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL0:7;
      uint64_t reservedSpace0:24;
      uint64_t LK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRGMUX_FTM7;

};

#define TRGMUX (*(volatile struct TRGMUX_tag *) 0x40063000)

struct SCG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKPRES:8;
      uint64_t reservedSpace0:19;
      uint64_t DIVPRES:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:8;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:8;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:8;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVSLOW:4;
      uint64_t DIVBUS:4;
      uint64_t reservedSpace0:8;
      uint64_t DIVCORE:4;
      uint64_t reservedSpace1:4;
      uint64_t SCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CLKOUTSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUTCNFG;

  uint8_t res1[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCEN:1;
      uint64_t reservedSpace0:15;
      uint64_t SOSCCM:1;
      uint64_t SOSCCMRE:1;
      uint64_t reservedSpace1:5;
      uint64_t LK:1;
      uint64_t SOSCVLD:1;
      uint64_t SOSCSEL:1;
      uint64_t SOSCERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOSCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SOSCDIV2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t EREFS:1;
      uint64_t HGO:1;
      uint64_t RANGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOSCCFG;

  uint8_t res2[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIRCEN:1;
      uint64_t SIRCSTEN:1;
      uint64_t SIRCLPEN:1;
      uint64_t reservedSpace0:20;
      uint64_t LK:1;
      uint64_t SIRCVLD:1;
      uint64_t SIRCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIRCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SIRCDIV2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIRCCFG;

  uint8_t res3[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRCEN:1;
      uint64_t reservedSpace0:2;
      uint64_t FIRCREGOFF:1;
      uint64_t reservedSpace1:19;
      uint64_t LK:1;
      uint64_t FIRCVLD:1;
      uint64_t FIRCSEL:1;
      uint64_t FIRCERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRCDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t FIRCDIV2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRCCFG;

  uint8_t res4[756];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLLEN:1;
      uint64_t reservedSpace0:15;
      uint64_t SPLLCM:1;
      uint64_t SPLLCMRE:1;
      uint64_t reservedSpace1:5;
      uint64_t LK:1;
      uint64_t SPLLVLD:1;
      uint64_t SPLLSEL:1;
      uint64_t SPLLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLLDIV1:3;
      uint64_t reservedSpace0:5;
      uint64_t SPLLDIV2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PREDIV:3;
      uint64_t reservedSpace1:5;
      uint64_t MULT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPLLCFG;

};

#define SCG (*(volatile struct SCG_tag *) 0x40064000)

struct PCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_DMAMUX;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FlexCAN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FlexCAN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_ADC1;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FlexCAN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPSPI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPSPI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPSPI2;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PDB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_CRC;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PDB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_ADC0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_RTC;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPTMR0;

  uint8_t res6[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PORTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PORTB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PORTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PORTD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_PORTE;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_SAI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_SAI1;

  uint8_t res8[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FlexIO;

  uint8_t res9[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_EWM;

  uint8_t res10[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPI2C1;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_LPUART2;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_FTM7;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_CMP0;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_QSPI;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD:3;
      uint64_t FRAC:1;
      uint64_t reservedSpace0:20;
      uint64_t PCS:3;
      uint64_t reservedSpace1:3;
      uint64_t CGC:1;
      uint64_t PR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCC_ENET;

};

#define PCC (*(volatile struct PCC_tag *) 0x40065080)

struct LPI2C0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C0 (*(volatile struct LPI2C0_tag *) 0x40066000)

struct LPI2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTXFIFO:4;
      uint64_t reservedSpace0:4;
      uint64_t MRXFIFO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEN:1;
      uint64_t RST:1;
      uint64_t DOZEN:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:4;
      uint64_t RTF:1;
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t reservedSpace0:6;
      uint64_t EPF:1;
      uint64_t SDF:1;
      uint64_t NDF:1;
      uint64_t ALF:1;
      uint64_t FEF:1;
      uint64_t PLTF:1;
      uint64_t DMF:1;
      uint64_t reservedSpace1:9;
      uint64_t MBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t reservedSpace0:6;
      uint64_t EPIE:1;
      uint64_t SDIE:1;
      uint64_t NDIE:1;
      uint64_t ALIE:1;
      uint64_t FEIE:1;
      uint64_t PLTIE:1;
      uint64_t DMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HREN:1;
      uint64_t HRPOL:1;
      uint64_t HRSEL:1;
      uint64_t reservedSpace0:5;
      uint64_t CIRFIFO:1;
      uint64_t RDMO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESCALE:3;
      uint64_t reservedSpace0:5;
      uint64_t AUTOSTOP:1;
      uint64_t IGNACK:1;
      uint64_t TIMECFG:1;
      uint64_t reservedSpace1:5;
      uint64_t MATCFG:3;
      uint64_t reservedSpace2:5;
      uint64_t PINCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSIDLE:12;
      uint64_t reservedSpace0:4;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace1:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PINLOW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCFGR3;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH0:8;
      uint64_t reservedSpace0:8;
      uint64_t MATCH1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDMR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKLO:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKHI:6;
      uint64_t reservedSpace1:2;
      uint64_t SETHOLD:6;
      uint64_t reservedSpace2:2;
      uint64_t DATAVD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:14;
      uint64_t RXWATER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace0:13;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t CMD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTDR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRDR;

  uint8_t res6[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
      uint64_t RST:1;
      uint64_t reservedSpace0:2;
      uint64_t FILTEN:1;
      uint64_t FILTDZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDF:1;
      uint64_t RDF:1;
      uint64_t AVF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:4;
      uint64_t RSF:1;
      uint64_t SDF:1;
      uint64_t BEF:1;
      uint64_t FEF:1;
      uint64_t AM0F:1;
      uint64_t AM1F:1;
      uint64_t GCF:1;
      uint64_t SARF:1;
      uint64_t reservedSpace1:8;
      uint64_t SBF:1;
      uint64_t BBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDIE:1;
      uint64_t RDIE:1;
      uint64_t AVIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:4;
      uint64_t RSIE:1;
      uint64_t SDIE:1;
      uint64_t BEIE:1;
      uint64_t FEIE:1;
      uint64_t AM0IE:1;
      uint64_t AM1F:1;
      uint64_t GCIE:1;
      uint64_t SARIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDDE:1;
      uint64_t RDDE:1;
      uint64_t AVDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDER;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRSTALL:1;
      uint64_t RXSTALL:1;
      uint64_t TXDSTALL:1;
      uint64_t ACKSTALL:1;
      uint64_t reservedSpace0:4;
      uint64_t GCEN:1;
      uint64_t SAEN:1;
      uint64_t TXCFG:1;
      uint64_t RXCFG:1;
      uint64_t IGNACK:1;
      uint64_t HSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRCFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKHOLD:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVD:6;
      uint64_t reservedSpace1:2;
      uint64_t FILTSCL:4;
      uint64_t reservedSpace2:4;
      uint64_t FILTSDA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR2;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR0:10;
      uint64_t reservedSpace1:6;
      uint64_t ADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMR;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADDR:11;
      uint64_t reservedSpace0:3;
      uint64_t ANV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
      uint64_t reservedSpace0:6;
      uint64_t RXEMPTY:1;
      uint64_t SOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRDR;

};

#define LPI2C1 (*(volatile struct LPI2C1_tag *) 0x40067000)

struct LPUART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART0 (*(volatile struct LPUART0_tag *) 0x4006a000)

struct LPUART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART1 (*(volatile struct LPUART1_tag *) 0x4006b000)

struct LPUART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO:8;
      uint64_t RXFIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLOBAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t RIDMAE:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace0:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t M7:1;
      uint64_t reservedSpace0:2;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:2;
      uint64_t reservedSpace1:6;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:2;
      uint64_t reservedSpace0:6;
      uint64_t TXCOUNT:3;
      uint64_t reservedSpace1:5;
      uint64_t RXWATER:2;
      uint64_t reservedSpace2:6;
      uint64_t RXCOUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATER;

};

#define LPUART2 (*(volatile struct LPUART2_tag *) 0x4006c000)

struct CMP0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYSTCTR:2;
      uint64_t OFFSET:1;
      uint64_t reservedSpace0:1;
      uint64_t FILTER_CNT:3;
      uint64_t reservedSpace1:1;
      uint64_t EN:1;
      uint64_t OPE:1;
      uint64_t COS:1;
      uint64_t INVT:1;
      uint64_t PMODE:1;
      uint64_t reservedSpace2:1;
      uint64_t WE:1;
      uint64_t SE:1;
      uint64_t FPR:8;
      uint64_t COUT:1;
      uint64_t CFF:1;
      uint64_t CFR:1;
      uint64_t IEF:1;
      uint64_t IER:1;
      uint64_t reservedSpace3:1;
      uint64_t DMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VOSEL:8;
      uint64_t MSEL:3;
      uint64_t PSEL:3;
      uint64_t VRSEL:1;
      uint64_t DACEN:1;
      uint64_t CHN0:1;
      uint64_t CHN1:1;
      uint64_t CHN2:1;
      uint64_t CHN3:1;
      uint64_t CHN4:1;
      uint64_t CHN5:1;
      uint64_t CHN6:1;
      uint64_t CHN7:1;
      uint64_t INNSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t INPSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACOn:8;
      uint64_t INITMOD:6;
      uint64_t NSAM:2;
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t CH4F:1;
      uint64_t CH5F:1;
      uint64_t CH6F:1;
      uint64_t CH7F:1;
      uint64_t reservedSpace0:1;
      uint64_t FXMXCH:3;
      uint64_t reservedSpace1:1;
      uint64_t FXMP:1;
      uint64_t RRIE:1;
      uint64_t RRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2;

};

#define CMP0 (*(volatile struct CMP0_tag *) 0x40073000)

struct QuadSPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRSTSD:1;
      uint64_t SWRSTHD:1;
      uint64_t END_CFG:2;
      uint64_t DQS_OUT_EN:1;
      uint64_t DQS_LAT_EN:1;
      uint64_t DQS_EN:1;
      uint64_t DDR_EN:1;
      uint64_t VAR_LAT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t CLR_RXF:1;
      uint64_t CLR_TXF:1;
      uint64_t reservedSpace1:2;
      uint64_t MDIS:1;
      uint64_t DOZE:1;
      uint64_t ISD2FA:1;
      uint64_t ISD3FA:1;
      uint64_t ISD2FB:1;
      uint64_t ISD3FB:1;
      uint64_t reservedSpace2:4;
      uint64_t SCLKCFG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATSZ:16;
      uint64_t reservedSpace0:8;
      uint64_t SEQID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCSS:4;
      uint64_t reservedSpace0:4;
      uint64_t TCSH:4;
      uint64_t reservedSpace1:4;
      uint64_t TDH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLSHCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:8;
      uint64_t reservedSpace1:15;
      uint64_t HP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTRID:4;
      uint64_t reservedSpace0:4;
      uint64_t ADATSZ:8;
      uint64_t reservedSpace1:15;
      uint64_t ALLMST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t SEQID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BFGENCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOCCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOCCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX0:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF0IND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF1IND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TPINDX2:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF2IND;

  uint8_t res2[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAS:4;
      uint64_t reservedSpace0:12;
      uint64_t WA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t FSPHS:1;
      uint64_t FSDLY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RDBFL:6;
      uint64_t reservedSpace1:2;
      uint64_t RDCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WMRK:5;
      uint64_t reservedSpace0:3;
      uint64_t RXBRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBCT;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t TRBFL:6;
      uint64_t reservedSpace1:2;
      uint64_t TRCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WMRK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t IP_ACC:1;
      uint64_t AHB_ACC:1;
      uint64_t reservedSpace0:2;
      uint64_t AHBGNT:1;
      uint64_t AHBTRN:1;
      uint64_t AHB0NE:1;
      uint64_t AHB1NE:1;
      uint64_t AHB2NE:1;
      uint64_t AHB3NE:1;
      uint64_t AHB0FUL:1;
      uint64_t AHB1FUL:1;
      uint64_t AHB2FUL:1;
      uint64_t AHB3FUL:1;
      uint64_t reservedSpace1:1;
      uint64_t RXWE:1;
      uint64_t reservedSpace2:2;
      uint64_t RXFULL:1;
      uint64_t reservedSpace3:3;
      uint64_t RXDMA:1;
      uint64_t TXEDA:1;
      uint64_t TXWA:1;
      uint64_t TXDMA:1;
      uint64_t TXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFF:1;
      uint64_t reservedSpace0:3;
      uint64_t IPGEF:1;
      uint64_t reservedSpace1:1;
      uint64_t IPIEF:1;
      uint64_t IPAEF:1;
      uint64_t reservedSpace2:4;
      uint64_t ABOF:1;
      uint64_t AIBSEF:1;
      uint64_t AITEF:1;
      uint64_t ABSEF:1;
      uint64_t RBDF:1;
      uint64_t RBOF:1;
      uint64_t reservedSpace3:5;
      uint64_t ILLINE:1;
      uint64_t reservedSpace4:2;
      uint64_t TBUF:1;
      uint64_t TBFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t IPGEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t IPIEIE:1;
      uint64_t IPAEIE:1;
      uint64_t reservedSpace2:4;
      uint64_t ABOIE:1;
      uint64_t AIBSIE:1;
      uint64_t AITIE:1;
      uint64_t ABSEIE:1;
      uint64_t RBDIE:1;
      uint64_t RBOIE:1;
      uint64_t reservedSpace3:3;
      uint64_t RBDDE:1;
      uint64_t reservedSpace4:1;
      uint64_t ILLINIE:1;
      uint64_t reservedSpace5:1;
      uint64_t TBFDE:1;
      uint64_t TBUIE:1;
      uint64_t TBFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPND:1;
      uint64_t reservedSpace0:5;
      uint64_t SPDBUF:2;
      uint64_t reservedSpace1:1;
      uint64_t DATLFT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPNDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFPTRC:1;
      uint64_t reservedSpace0:7;
      uint64_t IPPTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPTRCLR;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADA1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFA1AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADA2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFA2AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADB1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFB1AD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TPADB2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFB2AD;

  uint8_t res5[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RBDR31;

  uint8_t res6[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUTKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKCR;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPRND0:8;
      uint64_t PAD0:2;
      uint64_t INSTR0:6;
      uint64_t OPRND1:8;
      uint64_t PAD1:2;
      uint64_t INSTR1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT63;

};

#define QuadSPI (*(volatile struct QuadSPI_tag *) 0x40076000)

struct ENET_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t TS_TIMER:1;
      uint64_t TS_AVAIL:1;
      uint64_t WAKEUP:1;
      uint64_t PLR:1;
      uint64_t UN:1;
      uint64_t RL:1;
      uint64_t LC:1;
      uint64_t EBERR:1;
      uint64_t MII:1;
      uint64_t RXB:1;
      uint64_t RXF:1;
      uint64_t TXB:1;
      uint64_t TXF:1;
      uint64_t GRA:1;
      uint64_t BABT:1;
      uint64_t BABR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t TS_TIMER:1;
      uint64_t TS_AVAIL:1;
      uint64_t WAKEUP:1;
      uint64_t PLR:1;
      uint64_t UN:1;
      uint64_t RL:1;
      uint64_t LC:1;
      uint64_t EBERR:1;
      uint64_t MII:1;
      uint64_t RXB:1;
      uint64_t RXF:1;
      uint64_t TXB:1;
      uint64_t TXF:1;
      uint64_t GRA:1;
      uint64_t BABT:1;
      uint64_t BABR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIMR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t RDAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t TDAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDAR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t ETHEREN:1;
      uint64_t MAGICEN:1;
      uint64_t SLEEP:1;
      uint64_t EN1588:1;
      uint64_t reservedSpace0:1;
      uint64_t DBGEN:1;
      uint64_t reservedSpace1:1;
      uint64_t DBSWP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t TA:2;
      uint64_t RA:5;
      uint64_t PA:5;
      uint64_t OP:2;
      uint64_t ST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MII_SPEED:6;
      uint64_t DIS_PRE:1;
      uint64_t HOLDTIME:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR;

  uint8_t res3[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t MIB_CLEAR:1;
      uint64_t MIB_IDLE:1;
      uint64_t MIB_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIBC;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOP:1;
      uint64_t DRT:1;
      uint64_t MII_MODE:1;
      uint64_t PROM:1;
      uint64_t BC_REJ:1;
      uint64_t FCE:1;
      uint64_t reservedSpace0:2;
      uint64_t RMII_MODE:1;
      uint64_t RMII_10T:1;
      uint64_t reservedSpace1:2;
      uint64_t PADEN:1;
      uint64_t PAUFWD:1;
      uint64_t CRCFWD:1;
      uint64_t CFEN:1;
      uint64_t MAX_FL:14;
      uint64_t NLC:1;
      uint64_t GRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCR;

  uint8_t res5[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GTS:1;
      uint64_t reservedSpace0:1;
      uint64_t FDEN:1;
      uint64_t TFC_PAUSE:1;
      uint64_t RFC_PAUSE:1;
      uint64_t ADDSEL:3;
      uint64_t ADDINS:1;
      uint64_t CRCFWD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADDR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TYPE:16;
      uint64_t PADDR2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAUSE_DUR:16;
      uint64_t OPCODE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPD;

  uint8_t res7[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADDR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IAUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADDR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GADDR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GADDR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GALR;

  uint8_t res8[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFWR:6;
      uint64_t reservedSpace0:2;
      uint64_t STRFWD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFWR;

  uint8_t res9[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t R_DES_START:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t X_DES_START:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t R_BUF_SIZE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRBR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_SECTION_FULL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSFL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_SECTION_EMPTY:8;
      uint64_t reservedSpace0:8;
      uint64_t STAT_SECTION_EMPTY:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_ALMOST_EMPTY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_ALMOST_FULL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAFL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_SECTION_EMPTY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_ALMOST_EMPTY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_ALMOST_FULL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAFL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIPG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRUNC_FL:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTRL;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFT16:1;
      uint64_t reservedSpace0:2;
      uint64_t IPCHK:1;
      uint64_t PROCHK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TACC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADREM:1;
      uint64_t IPDIS:1;
      uint64_t PRODIS:1;
      uint64_t reservedSpace0:3;
      uint64_t LINEDIS:1;
      uint64_t SHIFT16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RACC;

  uint8_t res12[56];

  uint32_t RMON_T_DROP;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_PACKETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_BC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_MC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_CRC_ALIGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_UNDERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_OVERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_FRAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_JAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_COL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P65TO127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P128TO255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P256TO511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P512TO1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P1024TO2047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_P_GTE2048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXOCTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_T_OCTETS;

  uint32_t IEEE_T_DROP;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_FRAME_OK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_1COL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_MCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_DEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_LCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_EXCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_MACERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_CSERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_SQE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_FDXFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_T_OCTETS_OK;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_PACKETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_BC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_MC_PKT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_CRC_ALIGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_UNDERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_OVERSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_FRAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_JAB;

  uint32_t RMON_R_RESVD_0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P65TO127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P128TO255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P256TO511;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P512TO1023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P1024TO2047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_P_GTE2048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RMON_R_OCTETS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_DROP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_FRAME_OK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_CRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_ALIGN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_MACERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_FDXFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_R_OCTETS_OK;

  uint8_t res14[284];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t OFFEN:1;
      uint64_t OFFRST:1;
      uint64_t PEREN:1;
      uint64_t reservedSpace1:2;
      uint64_t PINPER:1;
      uint64_t reservedSpace2:1;
      uint64_t RESTART:1;
      uint64_t reservedSpace3:1;
      uint64_t CAPTURE:1;
      uint64_t reservedSpace4:1;
      uint64_t SLAVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATOFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COR:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC:7;
      uint64_t reservedSpace0:1;
      uint64_t INC_CORR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATSTMP;

  uint8_t res15[488];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TF0:1;
      uint64_t TF1:1;
      uint64_t TF2:1;
      uint64_t TF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDRE:1;
      uint64_t reservedSpace0:1;
      uint64_t TMODE:4;
      uint64_t TIE:1;
      uint64_t TF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDRE:1;
      uint64_t reservedSpace0:1;
      uint64_t TMODE:4;
      uint64_t TIE:1;
      uint64_t TF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDRE:1;
      uint64_t reservedSpace0:1;
      uint64_t TMODE:4;
      uint64_t TIE:1;
      uint64_t TF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDRE:1;
      uint64_t reservedSpace0:1;
      uint64_t TMODE:4;
      uint64_t TIE:1;
      uint64_t TF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCR3;

};

#define ENET (*(volatile struct ENET_tag *) 0x40079004)

struct PMC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LVDRE:1;
      uint64_t LVDIE:1;
      uint64_t LVDACK:1;
      uint64_t LVDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVDSC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t LVWIE:1;
      uint64_t LVWACK:1;
      uint64_t LVWF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVDSC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BIASEN:1;
      uint64_t CLKBIASDIS:1;
      uint64_t REGFPM:1;
      uint64_t reservedSpace0:3;
      uint64_t LPOSTAT:1;
      uint64_t LPODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) REGSC;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LPOTRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LPOTRIM;

};

#define PMC (*(volatile struct PMC_tag *) 0x4007d000)

struct SMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EHSRUN:1;
      uint64_t reservedSpace0:2;
      uint64_t ELLS:1;
      uint64_t reservedSpace1:1;
      uint64_t ELLS2:1;
      uint64_t EVLLS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t AVLP:1;
      uint64_t reservedSpace1:1;
      uint64_t AHSRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOPM:3;
      uint64_t VLPSA:1;
      uint64_t reservedSpace0:1;
      uint64_t RUNM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t STOPO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STOPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSTAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSTAT;

};

#define SMC (*(volatile struct SMC_tag *) 0x4007e000)

struct RCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEATURE:16;
      uint64_t MINOR:8;
      uint64_t MAJOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWAKEUP:1;
      uint64_t ELVD:1;
      uint64_t ELOC:1;
      uint64_t ELOL:1;
      uint64_t reservedSpace0:1;
      uint64_t EWDOG:1;
      uint64_t EPIN:1;
      uint64_t EPOR:1;
      uint64_t EJTAG:1;
      uint64_t ELOCKUP:1;
      uint64_t ESW:1;
      uint64_t EMDM_AP:1;
      uint64_t reservedSpace1:1;
      uint64_t ESACKERR:1;
      uint64_t reservedSpace2:1;
      uint64_t ETAMPER:1;
      uint64_t ECORE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LVD:1;
      uint64_t LOC:1;
      uint64_t LOL:1;
      uint64_t reservedSpace1:1;
      uint64_t WDOG_bitfield:1;
      uint64_t PIN:1;
      uint64_t POR:1;
      uint64_t JTAG:1;
      uint64_t LOCKUP:1;
      uint64_t SW:1;
      uint64_t MDM_AP:1;
      uint64_t reservedSpace2:1;
      uint64_t SACKERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSTFLTSRW:2;
      uint64_t RSTFLTSS:1;
      uint64_t reservedSpace0:5;
      uint64_t RSTFLTSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RPC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SLVD:1;
      uint64_t SLOC:1;
      uint64_t SLOL:1;
      uint64_t reservedSpace1:1;
      uint64_t SWDOG:1;
      uint64_t SPIN:1;
      uint64_t SPOR:1;
      uint64_t SJTAG:1;
      uint64_t SLOCKUP:1;
      uint64_t SSW:1;
      uint64_t SMDM_AP:1;
      uint64_t reservedSpace2:1;
      uint64_t SSACKERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELAY:2;
      uint64_t LOC:1;
      uint64_t LOL:1;
      uint64_t reservedSpace0:1;
      uint64_t WDOG_bitfield:1;
      uint64_t PIN:1;
      uint64_t GIE:1;
      uint64_t JTAG:1;
      uint64_t LOCKUP:1;
      uint64_t SW:1;
      uint64_t MDM_AP:1;
      uint64_t reservedSpace1:1;
      uint64_t SACKERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRIE;

};

#define RCM (*(volatile struct RCM_tag *) 0x4007f000)

struct PTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PIDR;

};

#define PTA (*(volatile struct PTA_tag *) 0x400ff000)

struct PTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PIDR;

};

#define PTB (*(volatile struct PTB_tag *) 0x400ff040)

struct PTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOC_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOC_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOC_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOC_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOC_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOC_PDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOC_PIDR;

};

#define PTC (*(volatile struct PTC_tag *) 0x400ff080)

struct PTD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOD_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOD_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOD_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOD_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOD_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOD_PDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOD_PIDR;

};

#define PTD (*(volatile struct PTD_tag *) 0x400ff0c0)

struct PTE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOE_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOE_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOE_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOE_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOE_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOE_PDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOE_PIDR;

};

#define PTE (*(volatile struct PTE_tag *) 0x400ff100)

struct S32_SCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
      uint64_t reservedSpace0:5;
      uint64_t DISFPCA:1;
      uint64_t DISOOFP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_ACTLR;

  uint8_t res0[3316];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:4;
      uint64_t PARTNO:12;
      uint64_t reservedSpace0:4;
      uint64_t VARIANT:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:9;
      uint64_t reservedSpace0:2;
      uint64_t RETTOBASE:1;
      uint64_t VECTPENDING:6;
      uint64_t reservedSpace1:4;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t TBLOFF:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_VTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTRESET:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace0:5;
      uint64_t PRIGROUP:3;
      uint64_t reservedSpace1:4;
      uint64_t ENDIANNESS:1;
      uint64_t VECTKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_AIRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SLEEPONEXIT:1;
      uint64_t SLEEPDEEP:1;
      uint64_t reservedSpace1:1;
      uint64_t SEVONPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONBASETHRDENA:1;
      uint64_t USERSETMPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGN_TRP:1;
      uint64_t DIV_0_TRP:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_12:8;
      uint64_t reservedSpace0:8;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMFAULTACT:1;
      uint64_t BUSFAULTACT:1;
      uint64_t reservedSpace0:1;
      uint64_t USGFAULTACT:1;
      uint64_t reservedSpace1:3;
      uint64_t SVCALLACT:1;
      uint64_t MONITORACT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSVACT:1;
      uint64_t SYSTICKACT:1;
      uint64_t USGFAULTPENDED:1;
      uint64_t MEMFAULTPENDED:1;
      uint64_t BUSFAULTPENDED:1;
      uint64_t SVCALLPENDED:1;
      uint64_t MEMFAULTENA:1;
      uint64_t BUSFAULTENA:1;
      uint64_t USGFAULTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IACCVIOL:1;
      uint64_t DACCVIOL:1;
      uint64_t reservedSpace0:1;
      uint64_t MUNSTKERR:1;
      uint64_t MSTKERR:1;
      uint64_t MLSPERR:1;
      uint64_t reservedSpace1:1;
      uint64_t MMARVALID:1;
      uint64_t IBUSERR:1;
      uint64_t PRECISERR:1;
      uint64_t IMPRECISERR:1;
      uint64_t UNSTKERR:1;
      uint64_t STKERR:1;
      uint64_t LSPERR:1;
      uint64_t reservedSpace2:1;
      uint64_t BFARVALID:1;
      uint64_t UNDEFINSTR:1;
      uint64_t INVSTATE:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIVBYZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTTBL:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DEBUGEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_HFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALTED:1;
      uint64_t BKPT:1;
      uint64_t DWTTRAP:1;
      uint64_t VCATCH:1;
      uint64_t EXTERNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_DFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_MMFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_BFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXFAULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_AFSR;

  uint8_t res1[72];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:20;
      uint64_t CP10:2;
      uint64_t CP11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CPACR;

  uint8_t res2[424];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSPACT:1;
      uint64_t USER:1;
      uint64_t reservedSpace0:1;
      uint64_t THREAD:1;
      uint64_t HFRDY:1;
      uint64_t MMRDY:1;
      uint64_t BFRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t MONRDY:1;
      uint64_t reservedSpace2:21;
      uint64_t LSPEN:1;
      uint64_t ASPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_FPCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRESS:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_FPCAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t RMode:2;
      uint64_t FZ:1;
      uint64_t DN:1;
      uint64_t AHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_FPDSCR;

};

#define S32_SCB (*(volatile struct S32_SCB_tag *) 0xe000e008)

struct S32_SysTick_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t TICKINT:1;
      uint64_t CLKSOURCE:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNTFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t reservedSpace0:6;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CALIB;

};

#define S32_SysTick (*(volatile struct S32_SysTick_tag *) 0xe000e010)

struct S32_NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISER3;

  uint8_t res0[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICER3;

  uint8_t res1[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICISPR3;

  uint8_t res2[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICICPR3;

  uint8_t res3[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICIABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICIABR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICIABR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICIABR3;

  uint8_t res4[240];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI9:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI10:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI12:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI13:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI14:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI16:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI17:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI18:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI20:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI21:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI22:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI24:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI25:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI26:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI27:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI28:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI29:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI30:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI31:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI32:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI33:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI34:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI35:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI36:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI37:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI38:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI39:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI40:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI41:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI42:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI44:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI45:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI46:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI47:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI48:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI49:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI50:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI51:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI52:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI53:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI54:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI55:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI56:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI57:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI58:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI59:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI60:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI61:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI62:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI64:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI65:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI66:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI67:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI68:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI69:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI70:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI71:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI72:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI73:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI74:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI75:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI76:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI77:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI78:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI79:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI80:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI81:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI82:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI83:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI84:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI85:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI86:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI87:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI88:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI89:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI90:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI91:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI92:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI93:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI94:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI95:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI96:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI97:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI98:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI99:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI100:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI101:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI102:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI103:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI104:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI105:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI106:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI107:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI108:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI109:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI110:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI111:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI112:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI113:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI114:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI115:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI116:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI117:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI118:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI119:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI120:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI121:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRI122:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NVICIP122;

  uint8_t res5[2693];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVICSTIR;

};

#define S32_NVIC (*(volatile struct S32_NVIC_tag *) 0xe000e100)

struct MCM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ASC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLASC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLAMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HLT_FSM_ST:2;
      uint64_t AXBS_HLT_REQ:1;
      uint64_t AXBS_HLTD:1;
      uint64_t FMC_PF_IDLE:1;
      uint64_t reservedSpace0:1;
      uint64_t PBRIDGE_IDLE:1;
      uint64_t reservedSpace1:2;
      uint64_t CBRR:1;
      uint64_t reservedSpace2:14;
      uint64_t SRAMUAP:2;
      uint64_t SRAMUWP:1;
      uint64_t reservedSpace3:1;
      uint64_t SRAMLAP:2;
      uint64_t SRAMLWP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t FIOC:1;
      uint64_t FDZC:1;
      uint64_t FOFC:1;
      uint64_t FUFC:1;
      uint64_t FIXC:1;
      uint64_t reservedSpace1:2;
      uint64_t FIDC:1;
      uint64_t reservedSpace2:8;
      uint64_t FIOCE:1;
      uint64_t FDZCE:1;
      uint64_t FOFCE:1;
      uint64_t FUFCE:1;
      uint64_t FIXCE:1;
      uint64_t reservedSpace3:2;
      uint64_t FIDCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISCR;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOREQ:1;
      uint64_t CPOACK:1;
      uint64_t CPOWOI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPO;

  uint8_t res2[956];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF0:4;
      uint64_t reservedSpace0:9;
      uint64_t MT:3;
      uint64_t LOCK:1;
      uint64_t DPW:3;
      uint64_t WY:4;
      uint64_t LMSZ:4;
      uint64_t LMSZH:1;
      uint64_t reservedSpace1:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF0:4;
      uint64_t reservedSpace0:9;
      uint64_t MT:3;
      uint64_t LOCK:1;
      uint64_t DPW:3;
      uint64_t WY:4;
      uint64_t LMSZ:4;
      uint64_t LMSZH:1;
      uint64_t reservedSpace1:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CF1:4;
      uint64_t reservedSpace1:5;
      uint64_t MT:3;
      uint64_t LOCK:1;
      uint64_t DPW:3;
      uint64_t WY:4;
      uint64_t LMSZ:4;
      uint64_t LMSZH:1;
      uint64_t reservedSpace2:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMDR2;

  uint8_t res3[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERNCR:1;
      uint64_t reservedSpace0:7;
      uint64_t ER1BR:1;
      uint64_t reservedSpace1:11;
      uint64_t ECPR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMPECR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENC:8;
      uint64_t E1B:8;
      uint64_t PE:8;
      uint64_t PEELOC:5;
      uint64_t reservedSpace0:2;
      uint64_t V:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMPEIR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEFPRT:4;
      uint64_t PEFSIZE:3;
      uint64_t PEFW:1;
      uint64_t PEFMST:8;
      uint64_t reservedSpace0:15;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMFATR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEFDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMFDHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEFDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMFDLR;

};

#define MCM (*(volatile struct MCM_tag *) 0xe0080008)

struct LMEM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCACHE:1;
      uint64_t reservedSpace0:1;
      uint64_t PCCR2:1;
      uint64_t PCCR3:1;
      uint64_t reservedSpace1:20;
      uint64_t INVW0:1;
      uint64_t PUSHW0:1;
      uint64_t INVW1:1;
      uint64_t PUSHW1:1;
      uint64_t reservedSpace2:3;
      uint64_t GO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMEM_PCCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LGO:1;
      uint64_t reservedSpace0:1;
      uint64_t CACHEADDR:12;
      uint64_t WSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t TDSEL:1;
      uint64_t reservedSpace2:3;
      uint64_t LCIVB:1;
      uint64_t LCIMB:1;
      uint64_t LCWAY:1;
      uint64_t reservedSpace3:1;
      uint64_t LCMD:2;
      uint64_t LADSEL:1;
      uint64_t LACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMEM_PCCLCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LGO:1;
      uint64_t reservedSpace0:1;
      uint64_t PHYADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMEM_PCCSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LMEM_PCCCVR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R15:2;
      uint64_t R14:2;
      uint64_t R13:2;
      uint64_t R12:2;
      uint64_t R11:2;
      uint64_t R10:2;
      uint64_t R9:2;
      uint64_t R8:2;
      uint64_t R7:2;
      uint64_t R6:2;
      uint64_t R5:2;
      uint64_t R4:2;
      uint64_t R3:2;
      uint64_t R2:2;
      uint64_t R1:2;
      uint64_t R0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCCRMR;

};

#define LMEM (*(volatile struct LMEM_tag *) 0xe0082000)

