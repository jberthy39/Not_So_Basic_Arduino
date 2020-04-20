// Hello Functions
// Jeanne Berthy
// This assignment develop you knowledge of the function of functions and when to use them. This piece of code simply tells the servo to rotate 
// continuously, very fast, and as an object (my hand) moves further away, the servo slows down and then halts to a stop at 45 centimeters.
// used this link to help me with coding and wirng a servo: https://create.arduino.cc/projecthub/Arca_Ege/how-to-use-servo-motors-with-arduino-b02bed
#include <Servo.h> // includes the library to use servos
Servo myServo; // create servo object to control the servo
int servoData = 0; // 
const int trigPin = 11; // sets the trigpin (ultrasonic sensor) to pin 11
const int echoPin = 8; // stes the echopin (ultrasonic sensor) to pin 8
int x = 0; // sets the number of degrees of the servo to 0
int timeSinceObject; 
int duration, cm;
void setup()
{
	Serial.begin(9600);
	myServo.attach(5); // sets the servo pin to pin 5
}

void loop()
{
	cm = getDistance(); // this runs the function getDistance which calculates the distance of an object from the sensor
	x = cm + 45; // this means that when an object is 45 centimeters away from the sensor, the servo will completely stop spinning
	cm = microsecondsToCentimeters(timeSinceObject);
	if (cm != 0) // if cm is not equal to 0 (! = not)
	{
		if (cm <= 90) // if an object is less than or equal to 90 centimeters away, **
		{
			myServo.write(x); // ** the servo goes at different speed between 1 and 90 centimeters. 
			// it slows down when you approach 45 centimeters, and stops completely at 45 centimeters.
		}
		else
			if (cm >= 90) // if an object is more than or equal to 90 centimeters away, **
			{
				myServo.write(90); // ** then servo will stay at a constant speed for an distance above 90 centimeters
			}
		delay(100); // after the code runs, it waits 0.1 seconds
	}
	Serial.println(cm); // prints on the serial monitor, how many centimeters are between the object and the sensor
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
