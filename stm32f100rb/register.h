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
#define PORTA_CRL  (PORTA_REGBASE + 0x00)
#define PORTA_CRH  (PORTA_REGBASE + 0x04)
#define PORTA_IDR  (PORTA_REGBASE + 0x08)
#define PORTA_ODR  (PORTA_REGBASE + 0x0C)
#define PORTA_BSRR (PORTA_REGBASE + 0x10)
#define PORTA_BRR  (PORTA_REGBASE + 0x14)
#define PORTA_LCKR (PORTA_REGBASE + 0x18)

// PORT B registers
#define PORTB_CRL  (PORTB_REGBASE + 0x00)
#define PORTB_CRH  (PORTB_REGBASE + 0x04)
#define PORTB_IDR  (PORTB_REGBASE + 0x08)
#define PORTB_ODR  (PORTB_REGBASE + 0x0C)
#define PORTB_BSRR (PORTB_REGBASE + 0x10)
#define PORTB_BRR  (PORTB_REGBASE + 0x14)
#define PORTB_LCKR (PORTB_REGBASE + 0x18)

// PORT C registers
#define PORTC_CRL  (PORTC_REGBASE + 0x00)
#define PORTC_CRH  (PORTC_REGBASE + 0x04)
#define PORTC_IDR  (PORTC_REGBASE + 0x08)
#define PORTC_ODR  (PORTC_REGBASE + 0x0C)
#define PORTC_BSRR (PORTC_REGBASE + 0x10)
#define PORTC_BRR  (PORTC_REGBASE + 0x14)
#define PORTC_LCKR (PORTC_REGBASE + 0x18)

// PORT D registers
#define PORTD_CRL  (PORTD_REGBASE + 0x00)
#define PORTD_CRH  (PORTD_REGBASE + 0x04)
#define PORTD_IDR  (PORTD_REGBASE + 0x08)
#define PORTD_ODR  (PORTD_REGBASE + 0x0C)
#define PORTD_BSRR (PORTD_REGBASE + 0x10)
#define PORTD_BRR  (PORTD_REGBASE + 0x14)
#define PORTD_LCKR (PORTD_REGBASE + 0x18)

// PORT E registers
#define PORTE_CRL  (PORTE_REGBASE + 0x00)
#define PORTE_CRH  (PORTE_REGBASE + 0x04)
#define PORTE_IDR  (PORTE_REGBASE + 0x08)
#define PORTE_ODR  (PORTE_REGBASE + 0x0c)
#define PORTE_BSRR (PORTE_REGBASE + 0x10)
#define PORTE_BRR  (PORTE_REGBASE + 0x14)
#define PORTE_LCKR (PORTE_REGBASE + 0x18)

// Reset and Clock Control registers
#define RCC_CR       (*(unsigned long int*) (RCC_REGBASE + 0x00))
#define RCC_CFGR     (*(unsigned long int*) (RCC_REGBASE + 0x04))
#define RCC_CIR      (*(unsigned long int*) (RCC_REGBASE + 0x08))
#define RCC_APB2RSTR (*(unsigned long int*) (RCC_REGBASE + 0x0C))
#define RCC_APB1RSTR (*(unsigned long int*) (RCC_REGBASE + 0x10))
#define RCC_AHBENR   (*(unsigned long int*) (RCC_REGBASE + 0x14))
#define RCC_APB2ENR  (*(unsigned long int*) (RCC_REGBASE + 0x18))
#define RCC_APB1ENR  (*(unsigned long int*) (RCC_REGBASE + 0x1C))
#define RCC_BDCR     (*(unsigned long int*) (RCC_REGBASE + 0x20))
#define RCC_CSR      (*(unsigned long int*) (RCC_REGBASE + 0x24))
#define RCC_CFGR2    (*(unsigned long int*) (RCC_REGBASE + 0x2C))
