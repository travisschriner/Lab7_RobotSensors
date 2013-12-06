Lab7_RobotSensors
=================

Description:
  This repository stores the neccessary code to read and operate the IR sensors on the robots 
  utilized by the USAFA DFEC. It utilizes an MSP430 microcontroller in conjunction with the 
  robot as well as two LEDs found on the MSP-EXP430G2 LaunchPad from Texas Instruments.
  
FUNCTIONS:
===========

1. void initialize()
   * Disables WDT
   * Initializes ADC10CTL Register
   * sets P1.0|P1.6 to out

2. void leftSensor()
   * Input: P1.3
   * Stops conversion
   * changes input channel to A3
   * Restarts Sampling and Conversion
   * Puts CPU to sleep

3. void rightSensor()
   * Input: P1.5
   * Stops conversion
   * changes input channel to A5
   * Restarts Sampling and Conversion
   * Puts CPU to sleep

4. void centerSensor()
   * Input: P1.4
   * Stops conversion
   * changes input channel to A4
   * Restarts Sampling and Conversion
   * Puts CPU to sleep


5. int leftWall(int threshhold)
   * Input: Threshhold 
      * User defined threshhold for ADC to register detection
   * Output: Returns a 1 if detecting, a 0 if not
   * Turns on LED on P1.0 if detecting, turns off if not


6. int rightWall(int threshhold)
   * Input: Threshhold 
      * User defined threshhold for ADC to register detection
   * Output: Returns a 1 if detecting, a 0 if not
   * Turns on LED on P1.6 if detecting, turns off if not



7. int frontWall(int threshhold)
   * Input: Threshhold 
      * User defined threshhold for ADC to register detection
   * Output: Returns a 1 if detecting, a 0 if not
   

LEGAL
=====

My code is completely open source. 
Please feel free to use any of it, just please document. Thank you.
