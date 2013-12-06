#include <msp430g2553.h>
#include "sensors.h"

int main(void)
{

  initialize();

  for (;;)
  {

	leftSensor();
    leftWall(0x1D0);

    rightSensor();
    rightWall(0x1D0);


  }

    return 0;
}

// ADC10 interrupt service routine
#pragma vector=ADC10_VECTOR
__interrupt void ADC10_ISR(void)
{
  __bic_SR_register_on_exit(CPUOFF);        // Clear CPUOFF bit from 0(SR)
}

