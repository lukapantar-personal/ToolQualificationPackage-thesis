/**************************************************************************
**                                                                        *
**  FILE        :  cstart.c                                               *
**                                                                        *
**  DESCRIPTION :                                                         *
**      The system startup code initializes the processor's registers     *
**      and the application C variables.                                  *
**                                                                        *
**  Copyright 1996-2007 Altium BV                                         *
**                                                                        *
**************************************************************************/

#include "cstart.h"                             /* include configuration */
#include "TriCore.h"

#include <stdlib.h>
#include <stdbool.h>

#pragma weak   exit
#pragma extern _Exit
#pragma profiling off                           /* prevent profiling information on cstart */
//#pragma optimize abcefgIKlpoRsy               /* preset optimizations */
//#pragma tradeoff 4                              /* preset tradeoff level (for size) */
#pragma runtime BCM                             /* disable runtime error checking for cstart */

/* linker definitions */
extern __far void _lc_ue_ustack[];      /* user stack end */
extern __far void _lc_ue_istack[];      /* interrupt stack end */
extern __far void _lc_u_int_tab[];      /* interrupt table */
extern __far void _lc_u_trap_tab[];     /* trap table */
extern __far void _SMALL_DATA_[];       /* centre of A0 addressable area */
extern __far void _LITERAL_DATA_[];     /* centre of A1 addressable area */
extern __far void _A8_DATA_[];          /* centre of A8 addressable area */
extern __far void _A9_DATA_[];          /* centre of A9 addressable area */

/* external functions */
extern void _c_init(void);              /* C initialization function */
extern void _call_init(void);           /* call a user function before main() */
extern void _endinit(void);             /* call a user function with protection switched off */

/* library references */
extern int main(void);

/*********************************************************************************
 * _reset() - reset vector
 *********************************************************************************/
#pragma section code libc.reset

void _START( void )
{
   __asm("nop");
# define STACK_ALIGN    0xfffffff8
   unsigned int sp = (unsigned int)(_lc_ue_ustack) & STACK_ALIGN;
   __asm("mov.a\tsp,%0"::"d"(sp));
   __asm("j\t_start");

}

/*********************************************************************************
 * _cstart() - initialize stackpointer
 *********************************************************************************/
#pragma section code libc

/*********************************************************************************
 * _cstart() - startup code
 *********************************************************************************/
void disable_watchdog()
{
  int key;
  
  /* Disable system watchdog */
  key = SCU_WDTSCON0;
  key ^= (0x3F << SCU_WDTSCON0_PW);         /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTSCON0_LCK);        /* Clear lock bit */
  key |= (0x1 << SCU_WDTSCON0_ENDINIT);     /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTSCON0 = key;
  SCU_WDTSCON1 |= (0x1 << SCU_WDTSCON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTSCON0_LCK);
  SCU_WDTSCON0 = key;
  
  /* Disable primary core watchdog, other cores watchdogs are disabled by default */
  key = SCU_WDTCPU0CON0;
  key ^= (0x3F << SCU_WDTCPU0CON0_PW);            /* Decrypt key (bottom 6 bits are inverted) */
  key &= ~(0x1 << SCU_WDTCPU0CON0_LCK);           /* Clear lock bit */
  key |= (0x1 << SCU_WDTCPU0CON0_ENDINIT);        /* Set ENDINIT bit, update SCU_WDTSCON0 */
  SCU_WDTCPU0CON0 = key;
  SCU_WDTCPU0CON1 |= (0x1 << SCU_WDTCPU0CON1_DR); /* Update password protected disable WDT field */
  key |= (0x1 << SCU_WDTCPU0CON0_LCK);
  SCU_WDTCPU0CON0 = key;
}
 
#define PSW  0xFE04
#define PCXI 0XFE00
#define BTV  0XFE24  
#define BIV  0XFE20
#define ISP  0XFE28
#define LCX  0XFE3C
#define FCX  0XFE38

void _start( void )
{       
        /* Do a dsync before changing any of the csfr values, thus any previous
         * background state gets flushed first. Required for applications that jump
         * to the reset address.
         */
        __dsync();
        
        __mtcr(PSW, 0x00000980);        /* clear PSW.IS */
        /* Set the PCXI to its reset value in case of a warm start */
        unsigned int pcxi = __mfcr(PCXI);
        pcxi &= 0xfff0;
        __mtcr(PCXI, pcxi);

        // Load Base Address of Trap Vector Table.
        __mtcr(BTV,  (unsigned int)_lc_u_trap_tab);
        // Load Base Address of Interrupt Vector Table.
        __mtcr(BIV, (unsigned int)(_lc_u_int_tab));
        // Load interupt stack pointer.
        unsigned int isp = (unsigned int)(_lc_ue_istack) & STACK_ALIGN;
        __mtcr(ISP, isp);
                                                          
        /* Setup the context save area linked list. */
        #  define MAX_NR_OF_CSA_AREAS     1
        extern int _lc_ub_csa_01[];    /* context save area 1 begin */
        extern int _lc_ue_csa_01[];    /* context save area 1 end   */
        int * csa_area_begin[] = { _lc_ub_csa_01 };        
        int * csa_area_end[]   = { _lc_ue_csa_01 };

        int  i, k;
        int  no_of_csas;
        int * csa;
        unsigned int  seg_nr, seg_idx, pcxi_val=0;
        _Bool first=true;
        
        for (i=0; i < MAX_NR_OF_CSA_AREAS; i++)
        {
                // first calculate nr of CSAs in this area 
                no_of_csas = (csa_area_end[i] - csa_area_begin[i]) >> 4;
                
                for (k=0; k < no_of_csas; k++)
                {                        
                        csa = csa_area_begin[i] + k*16;
                        // Store null pointer in last CSA (= very first time!) 
                        *csa = pcxi_val;                        

                        seg_nr  = __extru( (int) csa, 28, 4) << 16;
                        seg_idx = __extru( (int) csa, 6, 16);
                        pcxi_val = seg_nr | seg_idx;
                        if (first)
                        {
                                first = false;                                
                                __mtcr(LCX, pcxi_val);
                        }                        
                }
                __mtcr(FCX, pcxi_val);
        }
        
        // Inititialize global address registers a0/a1 to support
        // __a0/__a1 storage qualifiers of the C compiler.
        void * a0 = _SMALL_DATA_;        
        __asm( "mov.aa\ta0,%0"::"a"(a0) );

        void * a1 = _LITERAL_DATA_;        
        __asm( "mov.aa\ta1,%0"::"a"(a1) );

        // Inititialize global address registers a8/a9 to support
        //__a8/__a9 storage qualifiers of the C compiler. A8 and A9
        // are reserved for OS use, or for application use in cases 
        // where the application ans OS are tightly coupled.
        void * a8 = _A8_DATA_;        
        __asm( "mov.aa\ta8,%0"::"a"(a8) );

        void * a9 = _A9_DATA_;        
        __asm( "mov.aa\ta9,%0"::"a"(a9) );
               
 
         // Initialize and clear C variables.
        _c_init();      // initialize data 
        
        disable_watchdog();
        
        main();
}
