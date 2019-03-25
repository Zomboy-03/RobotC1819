#pragma config(Sensor, dgtl1,  bump1,          sensorTouch)
#pragma config(Sensor, dgtl6,  bump2,          sensorTouch)
#pragma config(Motor,  port2,           driver,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           hammer,        tmotorVex269_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: Auto - Piano Player
Team Members: Arnav Gahlot, Andres Arrizon, Anderson Lovett
Date:03/19/2019
Section:


Task Description: plays given song, on the push of buttons


Pseudocode:

*/

task main()
{
	untilBump(bump1, 1);
	startMotor(driver, -50);
	wait(2.5);

	untilBump(bump2, 1);
	startMotor(hammer, -60);
	wait(0.4);
	startMotor(hammer, 60);
	wait(0.4);

}//
