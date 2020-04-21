// New Ping
// Jeanne Berthy
// This assgnment is meant to help you familiarize yourself with the library of New Ping, which shortens your code so that you don't need to use lengthy functions. 
// The functions are inside the NewPing library, so that you only need the return insteadof the entire function at the bottom of you code.

#include <Servo.h>
#include <NewPing.h>
int trigPin = 11; 
int echoPin = 8;
long duration;
int cm;
Servo myServo;
int servo = 5;
int led = 3;
NewPing myHCSR04(trigPin, echoPin); 
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
  myServo.attach(5);
  pinMode(3, OUTPUT);
}

void loop()
{
  cm = myHCSR04.ping_cm(); // this line of code replaces my getDistance function (in my previous assignment, hello functions). 
  {
    if (cm < 15) // if an object is less than 15cm away from the sensor **
    {
        myServo.write(180); // this makes the servo turn very fast
      digitalWrite(led, HIGH); // the led will turn on
    }
    else // if the distance is any other number besides 1-15, **
    {
        myServo.write(90);  // ** this makes the servo stop spinning
      digitalWrite(led, LOW); // the led will turn off
    }
  }
  delay(100); // this delays the loop for 0.1 seconds
  Serial.println(cm); // this prints the distance of an object (on serial monitor) from the ultrasonic sensor
}

