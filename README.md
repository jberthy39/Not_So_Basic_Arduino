# Not_So_Basic_Arduino

## New Ping
### Description
In this assignment, I learned to ue a library called [NewPing](https://playground.arduino.cc/Code/NewPing/). In this library, there were many functions, that someone else had created and I could use, without having to type them one at a time. (This library was created by Tim Eckel.) Using these commands and functions from the NewPing library, I had a little bit of freedom in what I wanted my code to do. When an object was less than 15 centimeters away from the sensor, the LED turned on. If it was more, the LED turned off. All of this coding was made using the NewPing lirary.

### Wiring Diagram
![new ping]()

### Problems
- I had difficulty downloading the NewPing library and learning how to access the functions. But after asking google and Mr. H a couple of questions, it was much easier to understand and I figured out how to include it into my code.

### Lesson(s) Learned
- I learned that sometimes, libraries are essential to you code. When using a library, you shorten your code and make it easier to understand. Instead of huge blocks of code throughout your page, you have functions or other ways that simplify your code to make it more understandable. (No one wants to read through a 9th grader's code that is over 100 lines long.)

## Hello Functions
### Description
In this assignment, we learn how to incorporate a function into our coding. A function, put simply, is an easy way to shorten your actual code and then reuse it whenever you want. I also learned about an [ultrasonic sensor](https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/), which is just a sensor that can sense distances by sending out little chirps. For my coding, I told it the servo to rotate continuously, very fast, and as an object (my hand) moves further away, the servo slows down and then halts to a stop at 45 centimeters.

### Wiring Diagram
![hello functions](http://wiki.chssigma.com/images/thumb/5/50/Ultrasonic_Sensor_with_Servo.PNG/600px-Ultrasonic_Sensor_with_Servo.PNG)

Credit : [Imogen A.](http://wiki.chssigma.com/index.php?title=Imogen%27s_Engineering_2_Notebook#Hello_Functions) 

```
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
```

- This is an example of a function that I used. This function told the Ultrasonic Sensor to send a chirp, recieve it, and then calculate the distance.

### Problems
- I had great difficuly when understanding what the anatomy of a function was and when or hor to use the return command. But by using the following [link](https://www.arduino.cc/en/Reference/FunctionDeclaration), I learned a lot about functions and understood their job/function much better.

### Lesson(s) Learned
- The Ultrasonic Sensor sends tiny chirps and uses the pins Echo and Trig to estimate/calculate the distance from any given object. 

- This was the first time I used a continuous servo. Previously, in Engineering 1, we had only used ones that had a span of 180º. So with a continuous servo, putting in a degree didn't mean it would go to 40º or 74º, it goes at different speeds.

## Hello_LCD
### Description
In this assignment, we used an LCD screeen to print a simple message: Hello World!. We also printed the number of seconds or miliseconds the LCD screen had been on and running. With the simple code given to us in the assignment, printing the message was simple, and the rest was google research.

### Wiring Diagram
![alt text](https://raw.githubusercontent.com/adent11/Intermediate-Arduino/master/FritzingDiagrams/Hello_LCDScreenshot.PNG)

Credit : [Mehki H.](https://github.com/mhernan80/Engineering_2.1)

```
#include <LiquidCrystal.h>
lcd.print("hello world :)"); 
lcd.print(millis() / 1000);
```
- The first line of code includes the library we needed to operate the LCD screen. The second code, allows you to print any message onto the screen. And the last section, along with setup code and such, prints the number of second the code or LCD screen has been running.

### Problems
- In this assignment, the coding was quite simple, granted that most of it was already provided for us. The most taxing and tedious part though was definitely wiring. Cutting and stripping 12 identical wires is not easy or fast.
 
### Lesson(s) Learned
- In this assignment, I learned a little bt about screens and what you do when printing a message on them. I learned that there are rowns and columns on each screen and you can control which parts of the screen turn on. 

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

### Problems
- My only problem was quite small and just had to do with the additional coding commands that we had to add into our initial code. I just was confused on where I should put the commands *lcd.init()* and *lcd.backlight()*.

### Lesson(s) Learned
- I found out that when there is a backpack to help you, you should use it. It really helps simplify your wiring and sometimes you code.

## LED Blink Revistited (Fading LED) 
### Description
I find that this assignemnt was both challenging, and fun once it started working. It also helped many of us reconnect with LEDs and coding them. Simply put, we made the LED go from it's brightest (255) to it's dimmest (0). I used diferent variables like *brightness* (how bright the LED was) and *fadeAmount* (how much the LED was fading by, the higher the number, the faster it fades) to work with the LED as well. We were also instructed to use analog pins and *analogWrite()* to make the LED fade, rather than blink. Additionally, we had to make the Serial Monitor print a certain number of "-" or "x" to represent visually the LED brightening and  dimming. 

### Wiring
![led fade](http://wiki.chssigma.com/images/e/e8/Fritzing_LED_fade.PNG)

Credit : [Imogen A.](http://wiki.chssigma.com/index.php?title=Imogen%27s_Engineering_2_Notebook#LED_Blink_Revisited_and_Hello_Serial_Monitor)

```
analogWrite(LED, brightness);
	brightness = brightness + fadeAmount;
	delay(100);
	Serial.println(brightness);
	if (brightness > 255 || brightness < 0)
	{
		fadeAmount = -fadeAmount;
	}
```
- This was the main part of my code. 

### Problems
- I had many small issues and questions about this assignment. It was very new to me and looking at the [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Engineering_2_Student_Pages) Page really helped me undertand what I needed to do in terms of variable and equatinos. This was the first time I had heard or even used the Student Notebooks. 

### Lesson(s) Learned
- I learned that there are a difference between *analogWrite()* and *digitalWrite()* in what their main function is to do.

- I also learned that there is a significant difference between *Serial.println()* and *Serial.print()*. Serial.println() prints each message on a new line, whereas Serial.print() continuously prints on that same line over and over.
