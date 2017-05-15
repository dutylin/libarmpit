SCB_CPUID  EQU  0xE000ED00   
SCB_ICSR   EQU  0xE000ED04 
SCB_VTOR   EQU  0xE000ED08 
SCB_AIRCR  EQU  0xE000ED0C 
SCB_SCR    EQU  0xE000ED10 
SCB_CCR    EQU  0xE000ED14 
SCB_SHPR1  EQU  0xE000ED18 
SCB_SHPR2  EQU  0xE000ED1C 
SCB_SHPR3  EQU  0xE000ED20 
SCB_SHCSR  EQU  0xE000ED24 
SCB_CFSR   EQU  0xE000ED28 
SCB_MMFSR  EQU  0xE000ED28 
SCB_BFSR   EQU  0xE000ED29 
SCB_UFSR   EQU  0xE000ED2A 
SCB_MMFAR  EQU  0xE000ED34 
SCB_BFAR   EQU  0xE000ED38 

CPACR      EQU  0xE000ED88 
FPCCR      EQU  0xE000EF34 
FPCAR      EQU  0xE000EF38 
FPDSCR     EQU  0xE000EF3C 

SCB_DEMCR  EQU  0xE000EDFC


SCB_CPUID_REVISION_SHIFT EQU 0
SCB_CPUID_PARTNO_SHIFT EQU 4
SCB_CPUID_ARCHITECTURE_SHIFT EQU 16
SCB_CPUID_VARIANT_SHIFT EQU 20
SCB_CPUID_IMPLEMENTER_SHIFT EQU 24

SCB_CPUID_REVISION_MASK     EQU (0xf    << SCB_CPUID_REVISION_SHIFT) 
SCB_CPUID_PARTNO_MASK       EQU (0x1000 << SCB_CPUID_REVISION_MASK) 
SCB_CPUID_ARCHITECTURE_MASK EQU (0xf    << SCB_CPUID_ARCHITECTURE_SHIFT) 
SCB_CPUID_VARIANT_MASK      EQU (0xf    << SCB_CPUID_VARIANT_SHIFT) 
SCB_CPUID_IMPLEMENTER_MASK  EQU (0xff   << SCB_CPUID_IMPLEMENTER_SHIFT) 

SCB_ICSR_VECTPENDING_SHIFT EQU 12
SCB_ICSR_VECTPENDING_MASK EQU (0x400 << SCB_ICSR_VECTPENDING_SHIFT)  
SCB_ICSR_PENDSTCLR   EQU (1<<25) 
SCB_ICSR_PENDSTSET   EQU (1<<26) 
SCB_ICSR_PENDSVCLR   EQU (1<<27)  
SCB_ICSR_PENDSVSET   EQU (1<<28)
SCB_ICSR_NMIPENDSET  EQU (1<<31)

SCB_AIRCR_VECTRESET     EQU (1<<0) 
SCB_AIRCR_VECTCLRACTIVE EQU (1<<1) 
SCB_AIRCR_SYSRESETREQ   EQU (1<<2) 
SCB_AIRCR_ENDIANNESS    EQU (1<<15) 
SCB_AIRCR_VECTKEY_SHIFT EQU 16 

SCB_SCR_SLEEPONEXIT   EQU (1<<1)
SCB_SCR_SLEEPDEEP     EQU (1<<2)
SCB_SCR_SEVONPEND     EQU (1<<4)

SCB_CCR_NONBASETHRDENA  EQU (1<<0)
SCB_CCR_USERSETMPEND    EQU (1<<1)
SCB_CCR_UNALIGN_TRP     EQU (1<<3)
SCB_CCR_DIV_0_TRP       EQU (1<<4)
SCB_CCR_BFHFNMIGN       EQU (1<<8)
SCB_CCR_STKALIGN        EQU (1<<9)

SCB_SHCSR_MEMFAULTACT  EQU (1<<0)
SCB_SHCSR_BUSFAULTACT  EQU (1<<1)
SCB_SHCSR_USGFAULTACT  EQU (1<<3)
SCB_SHCSR_SVCALLACT    EQU (1<<7)
SCB_SHCSR_MONITORACT   EQU (1<<8)
SCB_SHCSR_PENDSVACT    EQU (1<<9)
SCB_SHCSR_SYSTICKACT   EQU (1<<11)
SCB_SHCSR_USGFAULTPENDED  EQU (1<<12)
SCB_SHCSR_MEMFAULTPENDED  EQU (1<<13)
SCB_SHCSR_BUSFAULTPENDED  EQU (1<<14)
SCB_SHCSR_SVCALLPENDED  EQU (1<<15)
SCB_SHCSR_MEMFAULTENA  EQU (1<<16)
SCB_SHCSR_BUSFAULTENA  EQU (1<<17)
SCB_SHCSR_USGFAULTENA  EQU (1<<18)




SCB_CFSR_IACCVIOL EQU (1<<0) 
SCB_CFSR_DACCVIOL EQU (1<<1) 
SCB_CFSR_MUNSTKERR EQU (1<<3) 
SCB_CFSR_MSTKERR EQU (1<<4) 
SCB_CFSR_MLSPERR EQU (1<<5) 
SCB_CFSR_MMARVALID EQU (1<<7) 
SCB_CFSR_IBUSERR EQU (1<<8) 
SCB_CFSR_PRECISERR EQU (1<<9) 
SCB_CFSR_IMPRECISERR EQU (1<<10) 
SCB_CFSR_UNSTKERR EQU (1<<11) 
SCB_CFSR_STKERR EQU (1<<12) 
SCB_CFSR_LSPERR EQU (1<<13) 
SCB_CFSR_BFARVALID EQU (1<<15) 
SCB_CFSR_UNDEFINSTR EQU (1<<16) 
SCB_CFSR_INVSTATE EQU (1<<17) 
SCB_CFSR_INVPC EQU (1<<18) 
SCB_CFSR_NOCP EQU (1<<19) 
SCB_CFSR_UNALIGNED EQU (1<<24) 
SCB_CFSR_DIVBYZERO EQU (1<<25) 

CPACR_CP10_ACCESS_DENIED    EQU (0<<20)
CPACR_CP10_PRIVILEGED_ONLY  EQU (1<<20)
CPACR_CP10_FULL_ACCESS      EQU (3<<20)
CPACR_CP10_CLEARMASK        EQU (3<<20)

CPACR_CP11_ACCESS_DENIED    EQU (0<<22)
CPACR_CP11_PRIVILEGED_ONLY  EQU (1<<22)
CPACR_CP11_FULL_ACCESS      EQU (3<<22)
CPACR_CP11_CLEARMASK        EQU (3<<22)

SCB_DEMCR_TRCENA  EQU (1<<24)
    
        END

