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
  cm = myHCSR04.ping_cm();
  if (cm != 0 && cm < 100)
  {
    if (cm < 15)
    {
      moveServo();
      digitalWrite(led, HIGH);
    }
    else
    {
      stopServo();
      digitalWrite(led, LOW);
    }
  }
  delay(10);
  Serial.println(cm);
}

void moveServo()
{
  myServo.write(180);
}

void stopServo()
{
  myServo.write(90);
}
