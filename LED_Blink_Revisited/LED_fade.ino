#include "Arduino.h"
int LED = 3;
int brightness = 1;
int fadeAmount = 5;
void setup()
{
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
}

void loop()
{
	analogWrite(LED, brightness);
	brightness = brightness + fadeAmount;
	delay(100);
	Serial.println(brightness);
	if (brightness > 255 || brightness < 0)
	{
		fadeAmount = -fadeAmount;
	}
}
