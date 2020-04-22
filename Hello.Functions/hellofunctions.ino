// Hello Functions
// Jeanne Berthy
// This assignment develops your knowledge of the function of functions and when to use them. This piece of code simply tells the servo to rotate 
// continuously, very fast, and as an object (my hand) moves further away, the servo slows down and then halts to a stop at 45 centimeters.
// used this link to help me with coding and wirng a servo: https://create.arduino.cc/projecthub/Arca_Ege/how-to-use-servo-motors-with-arduino-b02bed
// Useful information: for the continuous servo, the servo will stop spinning at exactly 90 degrees

#include <Servo.h> // includes the library to use servos
Servo myServo; // create servo object to control the servo
int servoData = 0; // defines the variable servoData
const int trigPin = 11; // sets the trigpin (ultrasonic sensor) to pin 11
const int echoPin = 8; // stes the echopin (ultrasonic sensor) to pin 8
int x = 0; // sets the number of degrees of the servo to 0
int timeSinceObject; // defines the variable timeSinceObject
int duration, cm; // defines the variables duration and cm
void setup()
{
	Serial.begin(9600);
	myServo.attach(5); // sets the servo pin to pin 5
}

void loop()
{
	cm = getDistance(); // this runs the function getDistance which calculates the distance of an object from the sensor
	x = cm + 45; // this just adds 45cm to any distance, so instead of 0cm, it starts at 45. that way, it stops at 45cm instead of 90cm
	cm = microsecondsToCentimeters(timeSinceObject);
	if (cm != 0) // if cm is not equal to 0 (! = not)
	{
		if (cm <= 90) // if an object is less than or equal to 90 centimeters away, **
		{
			myServo.write(x); // ** the servo goes at different speed between 1 and 90 centimeters. 
		}
		else
			if (cm >= 90) // if an object is more than or equal to 90 centimeters away, **
			{
				myServo.write(90); // ** then servo will stop moving
			}
		delay(100); // after the code runs, it waits 0.1 seconds
	}
	Serial.println(cm); // prints on the serial monitor, how many centimeters are between the object and the sensor
}

long microsecondsToCentimeters(long microseconds)
{
	// The speed of sound is 340 m/s or 29 microseconds per centimeter.
 	// The ping travels out and back, so to find the distance of the object we take half of the distance travelled.
	// information from: https://stackoverflow.com/questions/41501360/getting-distance-in-inches-and-cm-from-ultrasonic-sensor-in-arduino
	return microseconds / 29 / 2;
}

int getDistance() // this is essentially echolocation
{
	pinMode(trigPin, OUTPUT); // sets the trigPin as output
	digitalWrite(trigPin, LOW); // clears the trigPin
	delayMicroseconds(2); // clears the trigPin for 2 microseconds
	digitalWrite(trigPin, HIGH); // turns on the trigPin (very quiet chirping)
	delayMicroseconds(10); // turns it on for 10 microseconds
	digitalWrite(trigPin, LOW); // turns the trigPin off
	pinMode(echoPin, INPUT); // sets the echoPin as input
	timeSinceObject = pulseIn(echoPin, HIGH); // now, the echoPin recieves the chirp bouncing off an object, returns the sound wave travel time in microseconds

	return cm; 
}
