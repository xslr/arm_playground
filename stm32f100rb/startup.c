
#include "register.h"

#define STACK_TOP 0x20000800

extern void main();

void init_clock()
{
  RCC_CFGR = 0x00110002;
  RCC_APB2ENR = 0x00000010;
  RCC_CR = 0x01000000;
}

void reset_init()
{
  init_clock();
  main();
}

void __attribute__ ((interrupt("IRQ"))) default_handler()
{}

void reset_handler()              __attribute__ ((weak, alias ("reset_init")));
void nmi_handler()                __attribute__ ((weak, alias ("default_handler")));
void hardfault_handler()          __attribute__ ((weak, alias ("default_handler")));
void memmanage_handler()          __attribute__ ((weak, alias ("default_handler")));
void busfault_handler()           __attribute__ ((weak, alias ("default_handler")));
void usagefault_handler()         __attribute__ ((weak, alias ("default_handler")));
void svc_handler()                __attribute__ ((weak, alias ("default_handler")));
void debugmon_handler()           __attribute__ ((weak, alias ("default_handler")));
void pendsv_handler()             __attribute__ ((weak, alias ("default_handler")));
void systick_handler()            __attribute__ ((weak, alias ("default_handler")));
void wnd_wdg_handler()            __attribute__ ((weak, alias ("default_handler")));
void pvd_handler()                __attribute__ ((weak, alias ("default_handler")));
void tamper_stamp_handler()       __attribute__ ((weak, alias ("default_handler")));
void rtc_wakeup_handler()         __attribute__ ((weak, alias ("default_handler")));
void flash_global_handler()       __attribute__ ((weak, alias ("default_handler")));
void rcc_global_handler()         __attribute__ ((weak, alias ("default_handler")));
void exti0_handler()              __attribute__ ((weak, alias ("default_handler")));
void exti1_handler()              __attribute__ ((weak, alias ("default_handler")));
void exti2_handler()              __attribute__ ((weak, alias ("default_handler")));
void exti3_handler()              __attribute__ ((weak, alias ("default_handler")));
void exti4_handler()              __attribute__ ((weak, alias ("default_handler")));
void dma1_c1_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma1_c2_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma1_c3_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma1_c4_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma1_c5_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma1_c6_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma1_c7_handler()            __attribute__ ((weak, alias ("default_handler")));
void adc1_handler()               __attribute__ ((weak, alias ("default_handler")));
void exti9_5_handler()            __attribute__ ((weak, alias ("default_handler")));
void tim15_brk_tim15_handler()    __attribute__ ((weak, alias ("default_handler")));
void tim1_up_tim16_handler()      __attribute__ ((weak, alias ("default_handler")));
void tim1_trg_com_tim17_handler() __attribute__ ((weak, alias ("default_handler")));
void tim1_cc_handler()            __attribute__ ((weak, alias ("default_handler")));
void tim2_handler()               __attribute__ ((weak, alias ("default_handler")));
void tim3_handler()               __attribute__ ((weak, alias ("default_handler")));
void tim4_handler()               __attribute__ ((weak, alias ("default_handler")));
void i2c1_event_handler()         __attribute__ ((weak, alias ("default_handler")));
void i2c1_error_handler()         __attribute__ ((weak, alias ("default_handler")));
void i2c2_event_handler()         __attribute__ ((weak, alias ("default_handler")));
void i2c2_error_handler()         __attribute__ ((weak, alias ("default_handler")));
void spi1_handler()               __attribute__ ((weak, alias ("default_handler")));
void spi2_handler()               __attribute__ ((weak, alias ("default_handler")));
void usart1_handler()             __attribute__ ((weak, alias ("default_handler")));
void usart2_handler()             __attribute__ ((weak, alias ("default_handler")));
void usart3_handler()             __attribute__ ((weak, alias ("default_handler")));
void exti15_10_handler()          __attribute__ ((weak, alias ("default_handler")));
void rtc_alarm_handler()          __attribute__ ((weak, alias ("default_handler")));
void cec_handler()                __attribute__ ((weak, alias ("default_handler")));
void tim12_handler()              __attribute__ ((weak, alias ("default_handler")));
void tim13_handler()              __attribute__ ((weak, alias ("default_handler")));
void tim14_handler()              __attribute__ ((weak, alias ("default_handler")));
void fsmc_handler()               __attribute__ ((weak, alias ("default_handler")));
void tim5_handler()               __attribute__ ((weak, alias ("default_handler")));
void spi3_handler()               __attribute__ ((weak, alias ("default_handler")));
void uart4_handler()              __attribute__ ((weak, alias ("default_handler")));
void uart5_handler()              __attribute__ ((weak, alias ("default_handler")));
void tim6_dac_und_handler()       __attribute__ ((weak, alias ("default_handler")));
void tim7_handler()               __attribute__ ((weak, alias ("default_handler")));
void dma2_c1_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma2_c2_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma2_c3_handler()            __attribute__ ((weak, alias ("default_handler")));
void dma2_c4_c5_handler()         __attribute__ ((weak, alias ("default_handler")));
void dma2_c5_handler()            __attribute__ ((weak, alias ("default_handler")));

void * interrupt_vector_table[] __attribute__ ((section(".vectors"))) =
{
  (unsigned int *) STACK_TOP,
  (unsigned int *) reset_handler,
  (unsigned int *) nmi_handler,
  (unsigned int *) hardfault_handler,
  (unsigned int *) memmanage_handler,
  (unsigned int *) busfault_handler,
  (unsigned int *) usagefault_handler,
  (unsigned int *) 0,
  (unsigned int *) 0,
  (unsigned int *) 0,
  (unsigned int *) 0,
  (unsigned int *) svc_handler,
  (unsigned int *) debugmon_handler,
  (unsigned int *) 0,
  (unsigned int *) pendsv_handler,
  (unsigned int *) systick_handler,
  (unsigned int *) wnd_wdg_handler,
  (unsigned int *) pvd_handler,
  (unsigned int *) tamper_stamp_handler,
  (unsigned int *) rtc_wakeup_handler,
  (unsigned int *) flash_global_handler,
  (unsigned int *) rcc_global_handler,
  (unsigned int *) exti0_handler,
  (unsigned int *) exti1_handler,
  (unsigned int *) exti2_handler,
  (unsigned int *) exti3_handler,
  (unsigned int *) exti4_handler,
  (unsigned int *) dma1_c1_handler,
  (unsigned int *) dma1_c2_handler,
  (unsigned int *) dma1_c3_handler,
  (unsigned int *) dma1_c4_handler,
  (unsigned int *) dma1_c5_handler,
  (unsigned int *) dma1_c6_handler,
  (unsigned int *) dma1_c7_handler,
  (unsigned int *) adc1_handler,
  (unsigned int *) 0,
  (unsigned int *) 0,
  (unsigned int *) 0,
  (unsigned int *) 0,
  (unsigned int *) exti9_5_handler,
  (unsigned int *) tim15_brk_tim15_handler,
  (unsigned int *) tim1_up_tim16_handler,
  (unsigned int *) tim1_trg_com_tim17_handler,
  (unsigned int *) tim1_cc_handler,
  (unsigned int *) tim2_handler,
  (unsigned int *) tim3_handler,
  (unsigned int *) tim4_handler,
  (unsigned int *) i2c1_event_handler,
  (unsigned int *) i2c1_error_handler,
  (unsigned int *) i2c2_event_handler,
  (unsigned int *) i2c2_error_handler,
  (unsigned int *) spi1_handler,
  (unsigned int *) spi2_handler,
  (unsigned int *) usart1_handler,
  (unsigned int *) usart2_handler,
  (unsigned int *) usart3_handler,
  (unsigned int *) exti15_10_handler,
  (unsigned int *) rtc_alarm_handler,
  (unsigned int *) cec_handler,
  (unsigned int *) tim12_handler,
  (unsigned int *) tim13_handler,
  (unsigned int *) tim14_handler,
  (unsigned int *) 0,
  (unsigned int *) 0,
  (unsigned int *) fsmc_handler,
  (unsigned int *) 0,
  (unsigned int *) tim5_handler,
  (unsigned int *) spi3_handler,
  (unsigned int *) uart4_handler,
  (unsigned int *) uart5_handler,
  (unsigned int *) tim6_dac_und_handler,
  (unsigned int *) tim7_handler,
  (unsigned int *) dma2_c1_handler,
  (unsigned int *) dma2_c2_handler,
  (unsigned int *) dma2_c3_handler,
  (unsigned int *) dma2_c4_c5_handler,
  (unsigned int *) dma2_c5_handler
};
