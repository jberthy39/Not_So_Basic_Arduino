# Not_So_Basic_Arduino

## New Ping
### Description
In this assignment, I learned to ue a library called [NewPing](https://playground.arduino.cc/Code/NewPing/). In this library, there were many functions, that someone else had created and I could use, without having to type them one at a time. (This library was created by Tim Eckel.) 

## Hello Functions
### Description
In this assignment, we learn how to incorporate a function into our coding. A function, put simply, is an easy way to shorten your actual code and then reuse it whenever you want. I also learned about an [ultrasonic sensor](https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/), which is just a sensor that can sense distances by sending out little chirps. For my coding, I told it the servo to rotate continuously, very fast, and as an object (my hand) moves further away, the servo slows down and then halts to a stop at 45 centimeters.

### Wiring Diagram
![hello functions](http://wiki.chssigma.com/images/thumb/5/50/Ultrasonic_Sensor_with_Servo.PNG/600px-Ultrasonic_Sensor_with_Servo.PNG)
Credit : [Imogen A.](http://wiki.chssigma.com/index.php?title=Imogen%27s_Engineering_2_Notebook#Hello_Functions) 

`this is some code bla bla bla`

- This is an example of a function that I used. This function told the Ultrasonic Sensor to send a chirp, recieve it, and then calculate the distance.


### Lesson(s) Learned
- The Ultrasonic Sensor sends tiny chirps and uses the pins Echo and Trig to estimate/calculate the distance from any given object. 

- This was the first time I used a continuous servo. Previously, in Engineering 1, we had only used ones that had a span of 180º. So with a continuous servo, putting in a degree didn't mean it would go to 40º or 74º, it goes at different speeds.

## Hello_LCD
### Description
In this assignment, we used an LCD screeen to print a simple message: Hello World!. We also printed the number of seconds or miliseconds the LCD screen had been on and running. With the simple code given to us in the assignment, printing the message was simple, and the rest was google research.

### Wiring Diagram
![alt text](http://wiki.chssigma.com/images/thumb/e/e0/Lcdcap1.PNG/800px-Lcdcap1.PNG)

Credit : [Paul B.](http://wiki.chssigma.com/index.php?title=Paul%27s_Engineering_2_Notebook#Hello_LCD)

`#include <LiquidCrystal.h> `

`lcd.print("hello world :)"); `

`lcd.print(millis() / 1000);`

## LCD Backpack
### Description


## LED Blink Revistited (Fading LED) 
