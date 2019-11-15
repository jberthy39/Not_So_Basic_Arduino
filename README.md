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

```
#include <LiquidCrystal.h>
lcd.print("hello world :)"); 
lcd.print(millis() / 1000);
```
- The first line of code includes the library we needed to operate the LCD screen. The second code, allows you to print any message onto the screen. And the last section, along with setup code and such, prints the number of second the code or LCD screen has been running.

### Lesson(s) Learned
- In this assignment, I learned that

## LCD Backpack
### Description
In this assigment, we used most of the same coding, we just used a backpack instead. In the previous assigment, I had to cut and strip 12 wires to the exact same side and connect each to a different pin. It was tedious and unnecessay work apparently, so the backpack fixes many of these problems. The backpack uses only 2 analog pins to communicate to the LCD screen and also has two pins that connect to GND and 5V.

### Wiring Diagram
![backpack](http://wiki.chssigma.com/images/thumb/1/16/Lcd_backpack.png/600px-Lcd_backpack.png)

Credit : [Zoe D.](http://wiki.chssigma.com/index.php?title=Zoe%27s_Engineering_Notebook#LCD_Backpack)

```
lcd.init()
lcd.backlight();
```
- This was the only coding we had to change once we started using the backpack. Both of these commands would go into your setup.

### Lesson(s) Learned
- I found out that when there is a backpack to help you, you should always use it. It really helps simplify your wiring and sometimes you code.
## LED Blink Revistited (Fading LED) 
