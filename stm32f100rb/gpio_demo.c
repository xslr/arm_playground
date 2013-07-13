#include "register.h"
#include "portconfig.h"

unsigned long int portcData;

unsigned long int * GpioCCrlReg;
unsigned long int * GpioCCrhReg;


void toggle_led()
{
  unsigned long int * portCbits = (unsigned long int*) PORTC_ODR;

  portcData = *portCbits;

  if (*portCbits)
  {
    *portCbits = 0x0000;
  }
  else
  {
    *portCbits = 0xFFFF;
  }
}

void main()
{
  unsigned long int * portCCrl = (unsigned long int*) PORTC_CRL;
  unsigned long int * portCCrh = (unsigned long int*) PORTC_CRH;

  unsigned long int portCCrlData = *portCCrl;
  unsigned long int portCCrhData = *portCCrh;

  *portCCrl = GPIOC_CRL;
  *portCCrh = GPIOC_CRH;

  while (1)
  {
    toggle_led();
  }
}
