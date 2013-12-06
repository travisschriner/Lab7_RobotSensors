Lab7_RobotSensors
=================

Description:
  This repository stores the neccessary code to read and operate the IR sensors on the robots 
  utilized by the USAFA DFEC. It utilizes an MSP430 microcontroller in conjunction with the 
  robot as well as two LEDs found on the MSP-EXP430G2 LaunchPad from Texas Instruments.
  
FUNCTIONS:
===========

void initialize();

void leftSensor();

void rightSensor();

void centerSensor();

/*
 * Function: leftWall(int threshhold)
 *
 * Description: This function will return a 1 if the
 * 				sensor on pin 3 senses a wall. It will
 * 				return a 0 if no wall is detected.
 * 				It will also turn on the LED on P1.0
 * 				as long as the sensor detects a wall.
 *
 * 	Inputs: threshhold~ this is a user defined threshhold
 * 						level that can be calibrated
 * 						depending on the sensor, lighting,
 * 						wall, and many other factors.
 */
int leftWall(int threshhold);

/*
 * Function: rightWall(int threshhold)
 *
 * Description: This function will return a 1 if the
 * 				sensor on pin 5 senses a wall. It will
 * 				return a 0 if no wall is detected.
 * 				It will also turn on the LED on P1.6
 * 				as long as the sensor detects a wall.
 *
 * 	Inputs: threshhold~ this is a user defined threshhold
 * 						level that can be calibrated
 * 						depending on the sensor, lighting,
 * 						wall, and many other factors.
 */
int rightWall(int threshhold);

/*
 * Function: frontWall(int threshhold)
 *
 * Description: This function will return a 1 if the
 * 				sensor on pin 4 senses a wall. It will
 * 				return a 0 if no wall is detected.
 *
 * 	Inputs: threshhold~ this is a user defined threshhold
 * 						level that can be calibrated
 * 						depending on the sensor, lighting,
 * 						wall, and many other factors.
 */
int frontWall(int threshhold);
