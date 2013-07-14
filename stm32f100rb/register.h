#define ADC1_REGBASE   0x40012400
#define CRC_REGBASE    0x40023000
#define DAC_REGBASE    0x40007400 
#define DMA1_REGBASE   0x40020000
#define I2C1_REGBASE   0x40005400
#define I2C2_REGBASE   0x40005800 
#define IWDG_REGBASE   0x40003000
#define PORTA_REGBASE  0x40010800
#define PORTB_REGBASE  0x40010C00
#define PORTC_REGBASE  0x40011000
#define PORTD_REGBASE  0x40011400
#define PORTE_REGBASE  0x40011800
#define PWR_REGBASE    0x40007000
#define RCC_REGBASE    0x40021000
#define RTC_REGBASE    0x40002800
#define SPI1_REGBASE   0x40013000
#define SPI2_REGBASE   0x40003800
#define USART1_REGBASE 0x40013800
#define USART2_REGBASE 0x40004400
#define USART3_REGBASE 0x40004800
#define WWDG_REGBASE   0x40002C00

// PORT A registers
#define PORTA_CRL  (* (unsigned *) (PORTA_REGBASE + 0x00))
#define PORTA_CRH  (* (unsigned *) (PORTA_REGBASE + 0x04))
#define PORTA_IDR  (* (unsigned *) (PORTA_REGBASE + 0x08))
#define PORTA_ODR  (* (unsigned *) (PORTA_REGBASE + 0x0C))
#define PORTA_BSRR (* (unsigned *) (PORTA_REGBASE + 0x10))
#define PORTA_BRR  (* (unsigned *) (PORTA_REGBASE + 0x14))
#define PORTA_LCKR (* (unsigned *) (PORTA_REGBASE + 0x18))

// PORT B registers
#define PORTB_CRL  (* (unsigned *) (PORTB_REGBASE + 0x00))
#define PORTB_CRH  (* (unsigned *) (PORTB_REGBASE + 0x04))
#define PORTB_IDR  (* (unsigned *) (PORTB_REGBASE + 0x08))
#define PORTB_ODR  (* (unsigned *) (PORTB_REGBASE + 0x0C))
#define PORTB_BSRR (* (unsigned *) (PORTB_REGBASE + 0x10))
#define PORTB_BRR  (* (unsigned *) (PORTB_REGBASE + 0x14))
#define PORTB_LCKR (* (unsigned *) (PORTB_REGBASE + 0x18))

// PORT C registers
#define PORTC_CRL  (* (unsigned *) (PORTC_REGBASE + 0x00))
#define PORTC_CRH  (* (unsigned *) (PORTC_REGBASE + 0x04))
#define PORTC_IDR  (* (unsigned *) (PORTC_REGBASE + 0x08))
#define PORTC_ODR  (* (unsigned *) (PORTC_REGBASE + 0x0C))
#define PORTC_BSRR (* (unsigned *) (PORTC_REGBASE + 0x10))
#define PORTC_BRR  (* (unsigned *) (PORTC_REGBASE + 0x14))
#define PORTC_LCKR (* (unsigned *) (PORTC_REGBASE + 0x18))

// PORT D registers
#define PORTD_CRL  (* (unsigned *) (PORTD_REGBASE + 0x00))
#define PORTD_CRH  (* (unsigned *) (PORTD_REGBASE + 0x04))
#define PORTD_IDR  (* (unsigned *) (PORTD_REGBASE + 0x08))
#define PORTD_ODR  (* (unsigned *) (PORTD_REGBASE + 0x0C))
#define PORTD_BSRR (* (unsigned *) (PORTD_REGBASE + 0x10))
#define PORTD_BRR  (* (unsigned *) (PORTD_REGBASE + 0x14))
#define PORTD_LCKR (* (unsigned *) (PORTD_REGBASE + 0x18))

// PORT E registers
#define PORTE_CRL  (* (unsigned *) (PORTE_REGBASE + 0x00))
#define PORTE_CRH  (* (unsigned *) (PORTE_REGBASE + 0x04))
#define PORTE_IDR  (* (unsigned *) (PORTE_REGBASE + 0x08))
#define PORTE_ODR  (* (unsigned *) (PORTE_REGBASE + 0x0c))
#define PORTE_BSRR (* (unsigned *) (PORTE_REGBASE + 0x10))
#define PORTE_BRR  (* (unsigned *) (PORTE_REGBASE + 0x14))
#define PORTE_LCKR (* (unsigned *) (PORTE_REGBASE + 0x18))

// Reset and Clock Control registers
#define RCC_CR       (* (unsigned *) (RCC_REGBASE + 0x00))
#define RCC_CFGR     (* (unsigned *) (RCC_REGBASE + 0x04))
#define RCC_CIR      (* (unsigned *) (RCC_REGBASE + 0x08))
#define RCC_APB2RSTR (* (unsigned *) (RCC_REGBASE + 0x0C))
#define RCC_APB1RSTR (* (unsigned *) (RCC_REGBASE + 0x10))
#define RCC_AHBENR   (* (unsigned *) (RCC_REGBASE + 0x14))
#define RCC_APB2ENR  (* (unsigned *) (RCC_REGBASE + 0x18))
#define RCC_APB1ENR  (* (unsigned *) (RCC_REGBASE + 0x1C))
#define RCC_BDCR     (* (unsigned *) (RCC_REGBASE + 0x20))
#define RCC_CSR      (* (unsigned *) (RCC_REGBASE + 0x24))
#define RCC_CFGR2    (* (unsigned *) (RCC_REGBASE + 0x2C))
