#include <msp430g2553.h>
#include "sensors.h"

/*
 * main.c
 *
 *  Created on: Dec 5, 2013
 *  Author: C15Travis.Schriner
 *
 *  Description: this main.c utilizes the sensors.h
 *  			 file which allows it to utilize the
 *  			 IR sensors on the USAFA DFEC robots.
 *
 *  			 The code initialzes the sensors, then
 *  			 switches between the left and right
 *  			 sensor, turning on an LED depending on
 *  			 if a wall is detected.
 *
 */

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

