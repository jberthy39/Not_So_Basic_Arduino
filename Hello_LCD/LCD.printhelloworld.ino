#include <LiquidCrystal.h> //Demonstrates the use a 16x2 LCD display. 

LiquidCrystal lcd (7, 8, 9, 10, 11, 12); // initialize the library with the numbers of the interface pins

void setup() {
lcd.begin(16,2); // sets up the number of rows and columns on screen
lcd.print("hello world :)"); // tells the LCD screen what to print, in this case, hello world :)
}

void loop() {
lcd.setCursor(0,1); // set the cursor to column 0, line 1 (which is second row)
lcd.print(millis()/1000); // print the number of seconds since the reset

}


