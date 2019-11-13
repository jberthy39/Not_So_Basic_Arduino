#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int x = 0;
int buttonPin = 7;
int buttonState = 0;
int oldState = 0;
void setup()
{
	Serial.begin(9600);
	lcd.init();
	lcd.backlight();
	lcd.print("button pressed:");
	pinMode(7, INPUT);
}

void loop()
{
	lcd.setCursor(0, 1);
	buttonState = digitalRead(7);
	if (buttonState == HIGH && oldState == LOW)
	{
		x++;
		lcd.print(x);
	}
	oldState = buttonState;
}
