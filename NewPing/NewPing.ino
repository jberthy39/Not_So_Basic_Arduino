#include "Arduino.h"
#include <NewPing.h>
#define trigPin 11
#define echoPin 8
#define maxDistance 150
int led = 3;
int brightness = 0;
long duration, cm, inches;
NewPing sonar(trigPin, echoPin, maxDistance);
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led, brightness);
  delay(100);
  cm = sonar.ping_cm();
  if (cm != 0 && cm < 125)
  {
    if (cm == 20)
    {
      digitalWrite(led, 255);
    }
    if (cm <= 19 && cm >= 15)
    {
      digitalWrite(led, 150);
    }
    if (cm <= 14 && cm >= 10)
    {
      digitalWrite(led, 80);
    }
    if (cm <= 9 && cm >= 5)
    {
      digitalWrite(led, 50);
    }
    else
    {
      digitalWrite(led, LOW);
    }
    delay(100);
  }
}
