#include <Arduino.h>
#include "stdlib.h"
#include "binary_info.h"
#include <Wire.h>
#include "display.h"



void rand_chars(void){

	for(byte r = 0; r < 4; r++){
		for(byte c = 0; c < 20; c++){
			write_character(r, c, random(33, 126));
		}
	}
}

void setup(void)                      // INITIAL SETUP
{
	//   pinMode(RES, OUTPUT);            // Initializes Arduino pin for the Reset line (optional)
	//   digitalWrite(RES, HIGH);         // Sets HIGH the Reset line of the display (optional, can be always high)
	display_initialize();
}
// _______________________________________________________________________________________

void loop(void)                       // MAIN PROGRAM
{ 
	output();                          // Execute subroutine "output"
	rand_chars();                      // Waits, only for visual effect purpose
	for(int i = 0; i < 5; i++){
		digitalWrite(25, HIGH);
		delay(1000);
		digitalWrite(25, LOW);
		delay(1000);
	}


}