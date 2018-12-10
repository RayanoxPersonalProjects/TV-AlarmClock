#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <Math.h>

//INFORMATION: The code has been writed from scratch, without compiling at all, and it's been a long time I didn't code in C, so it might be several mistakes. This code is above all a template.

//[TO-CHECK]
struct pinLedValues {
	int pin_1;
	int pin_2;
	int pin_3;
	int pin_4;
}

//[TODO]
void main(int count, char** args) {
	
	//TODO: Declaration of the usefull datas	
	int btn_Start_PIN = 0;//TODO: Write the corresponding PIN number
	int btn_GetTime_PIN = btn_Start_PIN;
	int waitingLoopTime  = 30; //In seconds
	
	
	//TODO: Enable the rights output and input Pins	
	
	
	//TODO: The LEDs pins are initialized with the value set by the 4 buttons position (LED_1 = 1 if BTN_1 = 1)
	
	
	//TODO: Set the interruptions functions to update the led values when the buttons position are updated
	
	//TODO: Wait for the user to push the "Start" button
	
	int btn_1 = 0;//TODO: Retrieve Pin value
	int btn_2 = 0;//TODO: Retrieve Pin value
	int btn_3 = 0;//TODO: Retrieve Pin value
	int btn_4 = 0;//TODO: Retrieve Pin value
	
	int timeAlarmToWait; //In minutes
	timeAlarmToWait = btn_1 * pow(2,0) + btn_2 * pow(2,1) + btn_3 * pow(2,2) + btn_4 * pow(2,3);
	timeAlarmToWait *= 10; //Because I want to cover a larger range of time, it doesn't matter if each waiting time is separated by 10 minutes for our use case.
	
	
	bool isRemainingTimeDisplayed = 0;
	int remainingTime = timeAlarmToWait*60; //To convert minutes to seconds
	do {
		//Wait 30 seconds ('waitingLoopTime' seconds)
		remainingTime -= 30;
		
		//IF btn_Start has been pushed THEN
			isRemainingTimeDisplayed = 1;
			displayLedTime(remainingTime);
		//ELSE
			//IF isRemainingTimeDisplayed == true THEN
				displayLedTime(0); //To set all the leds to 0, so to switch them off.
				isRemainingTimeDisplayed = 0;
			//END-IF
		//END-IF
		
		
	
	}while(remainingTime > 0);
	
	//TODO: Implement the remote control button push sequence, to browse the ps4 menu until display the target video
	//Use a header file to define the function prototype of this function (it will act like an interface, and then we will be able to implement one file by behaviour for each kind of sequence we want(or each device))
}


//[TODO]
void displayLedTime(int remainingTime) {
	pinLedValues ledValues = convertTimeInPinValues();
	//TODO
}

//[TODO]
pinLedValues convertTimeInPinValues(int time) {
	//TODO
}

//[TODO]
pinLedValues getBtnLedsPinValues() {
	//TODO
}