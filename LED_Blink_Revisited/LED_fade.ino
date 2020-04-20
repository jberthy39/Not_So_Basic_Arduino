// LED Blink Revisited
// Jeanne Berthy
// This assignment simply  helps you to familiarize yourself with AnalogWrite() and PWM pins. 
// It makes an LED gradually turn on and gradually turn off or fade.

#include "Arduino.h" 
int LED = 3; // the only PWM pin on the Arudino Uno board are ~3, ~5, ~6, ~9, ~10 and ~11, I used pin ~3
int brightness = 1; // this is how bright your LED is, when my code starts, it starts at 1, the highest is 255
int fadeAmount = 5; // sets up how much your LED will fade and glow up by, the higher the number the faster the fade
void setup()
{
	// code put here to run once
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
}

void loop()
{
	// code put here to run in a loop or repeatedly
	analogWrite(LED, brightness); 
	brightness = brightness + fadeAmount; // this line sets up the formula for the brightness. the brighness plus the fadeAmount equals the new brighness.
	delay(100); // delays for 0.1 seconds
	Serial.println(brightness); // prints the brightess of the LED on the serial monitor, prints a number between 0 and 255
	if (brightness > 255 || brightness < 0) // if the brighness is greater than 255, if the brightness is less than 0, then **
	{
		fadeAmount = -fadeAmount; // ** the fadeAmount switches to either positive or negative depending on the brighness.
		// when the brightness reached 255, the fadeAmount changes to -5 and it fades to 0. Once it reaches 0, the fadeAmount
		// changes to 5, and the brighness increases by 5 until it reaches 255 and the whole pattern repeats.
	}
}
