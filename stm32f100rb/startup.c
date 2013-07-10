
void default_handler()
{}

void reset_handler()              __attribute__ ((weak, alias ("default_handler")));
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

void * interrupt_vector_table[] =
{
  0,
  reset_handler,
  nmi_handler,
  hardfault_handler,
  memmanage_handler,
  busfault_handler,
  usagefault_handler,
  0,
  0,
  0,
  0,
  svc_handler,
  debugmon_handler,
  0,
  pendsv_handler,
  systick_handler,
  wnd_wdg_handler,
  pvd_handler,
  tamper_stamp_handler,
  rtc_wakeup_handler,
  flash_global_handler,
  rcc_global_handler,
  exti0_handler,
  exti1_handler,
  exti2_handler,
  exti3_handler,
  exti4_handler,
  dma1_c1_handler,
  dma1_c2_handler,
  dma1_c3_handler,
  dma1_c4_handler,
  dma1_c5_handler,
  dma1_c6_handler,
  dma1_c7_handler,
  adc1_handler,
  0,
  0,
  0,
  0,
  exti9_5_handler,
  tim15_brk_tim15_handler,
  tim1_up_tim16_handler,
  tim1_trg_com_tim17_handler,
  tim1_cc_handler,
  tim2_handler,
  tim3_handler,
  tim4_handler,
  i2c1_event_handler,
  i2c1_error_handler,
  i2c2_event_handler,
  i2c2_error_handler,
  spi1_handler,
  spi2_handler,
  usart1_handler,
  usart2_handler,
  usart3_handler,
  exti15_10_handler,
  rtc_alarm_handler,
  cec_handler,
  tim12_handler,
  tim13_handler,
  tim14_handler,
  0,
  0,
  fsmc_handler,
  0,
  tim5_handler,
  spi3_handler,
  uart4_handler,
  uart5_handler,
  tim6_dac_und_handler,
  tim7_handler,
  dma2_c1_handler,
  dma2_c2_handler,
  dma2_c3_handler,
  dma2_c4_c5_handler,
  dma2_c5_handler
};
