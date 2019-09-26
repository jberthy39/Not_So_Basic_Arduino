
#include <Servo.h>
Servo myServo;
int servoData = 0;
const int trigPin = 11;
const int echoPin = 8;
int x = 0;
int timeSinceObject;
int duration, cm;
void setup()
{
	Serial.begin(9600);
	myServo.attach(5);
}

void loop()
{
	cm = getDistance();
	x = cm + 45;
	cm = microsecondsToCentimeters(timeSinceObject);
	if (cm != 0)
	{
		if (cm <= 90)
		{
			myServo.write(x);
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
