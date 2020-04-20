// Hello Functions
// Jeanne Berthy
// This assignment develop you knowledge of the function of functions and when to use them. This piece of code simply tells the servo to rotate 
// continuously, very fast, and as an object (my hand) moves further away, the servo slows down and then halts to a stop at 45 centimeters.
// used this link to help me with coding and wirng a servo: [How to Use Servo Motors with Arduino](https://create.arduino.cc/projecthub/Arca_Ege/how-to-use-servo-motors-with-arduino-b02bed)
#include <Servo.h> // includes the library to use servos
Servo myServo; //
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
	Serial.println(cm);
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
