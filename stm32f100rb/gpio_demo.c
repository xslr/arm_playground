#include "register.h"
#include "portconfig.h"

void toggle_led()
{
  if (PORTC_ODR)
  {
    PORTC_ODR = 0x0000;
  }
  else
  {
    PORTC_ODR = 0xFFFF;
  }
}

void main()
{
  PORTC_CRL = GPIOC_CRL;
  PORTC_CRH = GPIOC_CRH;

  while (1)
  {
    toggle_led();
  }
}
