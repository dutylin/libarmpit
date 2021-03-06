#define RCC_AHB1RSTR  (*(volatile uint32_t*)(RCC_BASE + 0x10))

#define RCC_AHB1RSTR_GPIOARST (1<<0)
#define RCC_AHB1RSTR_GPIOBRST (1<<1)
#define RCC_AHB1RSTR_GPIOCRST (1<<2)
#define RCC_AHB1RSTR_GPIODRST (1<<3)
#define RCC_AHB1RSTR_GPIOERST (1<<4)
#define RCC_AHB1RSTR_GPIOFRST (1<<5)
#define RCC_AHB1RSTR_GPIOGRST (1<<6)
#define RCC_AHB1RSTR_GPIOHRST (1<<7)
#define RCC_AHB1RSTR_GPIOIRST (1<<8)
#define RCC_AHB1RSTR_GPIOJRST (1<<9)
#define RCC_AHB1RSTR_GPIOKRST (1<<10)

#define RCC_AHB1RSTR_CRCRST   (1<<12)
#define RCC_AHB1RSTR_DMA1RST  (1<<21)
#define RCC_AHB1RSTR_DMA2RST  (1<<22)
#define RCC_AHB1RSTR_OTGHSRST (1<<29)


#define RCC_AHB2RSTR  (*(volatile uint32_t*)(RCC_BASE + 0x14))
#define RCC_AHB2RSTR_DCMIRST (1<<0)
#define RCC_AHB2RSTR_OTGFSRST (1<<7)

#define RCC_AHB3RSTR  (*(volatile uint32_t*)(RCC_BASE + 0x18))
#define RCC_AHB3RSTR_FMCRST (1<<0)
#define RCC_AHB3RSTR_QSPIRST (1<<1)

#define RCC_AHB1ENR  (*(volatile uint32_t*)(RCC_BASE + 0x30))
#define RCC_AHB1ENR_GPIOAEN (1<<0)
#define RCC_AHB1ENR_GPIOBEN (1<<1)
#define RCC_AHB1ENR_GPIOCEN (1<<2)
#define RCC_AHB1ENR_GPIODEN (1<<3)
#define RCC_AHB1ENR_GPIOEEN (1<<4)
#define RCC_AHB1ENR_GPIOFEN (1<<5)
#define RCC_AHB1ENR_GPIOGEN (1<<6)
#define RCC_AHB1ENR_GPIOHEN (1<<7)
#define RCC_AHB1ENR_GPIOIEN (1<<8)
#define RCC_AHB1ENR_GPIOJEN (1<<9)
#define RCC_AHB1ENR_GPIOKEN (1<<10)
#define RCC_AHB1ENR_CRCEN   (1<<12)
#define RCC_AHB1ENR_DMA1EN  (1<<21)
#define RCC_AHB1ENR_DMA2EN  (1<<22)
#define RCC_AHB1ENR_OTGHSEN (1<<29)



#define RCC_AHB2ENR  (*(volatile uint32_t*)(RCC_BASE + 0x34))
#define RCC_AHB2ENR_DCMIEN (1<<0)
#define RCC_AHB2ENR_OTGFSEN (1<<7)


#define RCC_AHB3ENR  (*(volatile uint32_t*)(RCC_BASE + 0x38))
#define RCC_AHB3ENR_FMCEN (1<<0)
#define RCC_AHB3ENR_QSPIEN (1<<1)



#define RCC_AHB1LPENR  (*(volatile uint32_t*)(RCC_BASE + 0x50))
#define RCC_AHB1LPENR_GPIOA_LPEN (1<<0)
#define RCC_AHB1LPENR_GPIOB_LPEN (1<<1)
#define RCC_AHB1LPENR_GPIOC_LPEN (1<<2)
#define RCC_AHB1LPENR_GPIOD_LPEN (1<<3)
#define RCC_AHB1LPENR_GPIOE_LPEN (1<<4)
#define RCC_AHB1LPENR_GPIOF_LPEN (1<<5)
#define RCC_AHB1LPENR_GPIOG_LPEN (1<<6)
#define RCC_AHB1LPENR_GPIOH_LPEN (1<<7)
#define RCC_AHB1LPENR_CRC_LPEN   (1<<12)
#define RCC_AHB1LPENR_DMA1_LPEN  (1<<21)
#define RCC_AHB1LPENR_DMA2_LPEN  (1<<22)
#define RCC_AHB1LPENR_OTGHS_LPEN (1<<29)



#define RCC_AHB2LPENR  (*(volatile uint32_t*)(RCC_BASE + 0x54))
#define RCC_AHB2LPENR_DCMI_LPEN (1<<0)
#define RCC_AHB2LPENR_OTGFS_LPEN (1<<7)


#define RCC_AHB3LPENR  (*(volatile uint32_t*)(RCC_BASE + 0x58))
#define RCC_AHB3LPENR_FMC_LPEN (1<<0)
#define RCC_AHB3LPENR_QSPI_LPEN (1<<1)



