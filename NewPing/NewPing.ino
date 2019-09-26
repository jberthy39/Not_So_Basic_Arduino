#include <NewPing.h>
#include <Servo.h>
Servo myServo;
const int trigPin = 11;
const int echoPin = 8;
int duration, cm;
int servoPin = 5;
int timeSinceObject;
int ledPin = 3;
int x = 0;
int brightness = 0;
int fadeAmount = 5;
void setup()
{
	Serial.begin(9600);
	myServo.attach(5);
	pinMode(ledPin, OUTPUT);
}

void loop()
{
	brightness = x + 50;
	cm = getDistance();
	cm = microsecondsToCentimeters(timeSinceObject);
	if (cm != 0)
	{
		if (cm <= 90)
		{
			myServo.write(1);
		}
		else
			if (cm >= 90)
			{
				myServo.write(90);
			}
		delay(100);
	}
}

long microsecondsToCentimeters(long microseconds)
{
	return microseconds / 29 / 2;
}

int getDistance()
{
	pinMode(trigPin, OUTPUT);
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	pinMode(echoPin, INPUT);
	timeSinceObject = pulseIn(echoPin, HIGH);
	return cm;
}
