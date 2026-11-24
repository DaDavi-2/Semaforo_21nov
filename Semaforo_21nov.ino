/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// define pins on which the LEDs are connected
#define MY_LED_GREEN    3
#define MY_LED_YELLOW   5
#define MY_LED_RED      6


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as output.
  pinMode(MY_LED_GREEN, OUTPUT);
  pinMode(MY_LED_YELLOW, OUTPUT);
  pinMode(MY_LED_RED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(MY_LED_GREEN, HIGH);   // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000);                        // wait for a second
  digitalWrite(MY_LED_GREEN, LOW);    // change state of the LED by setting the pin to the LOW voltage level
  delay(10);                          // wait for ten milliseconds (almost instantly)
  digitalWrite(MY_LED_YELLOW, HIGH);   
  delay(1000);                      
  digitalWrite(MY_LED_YELLOW, LOW);   
  delay(10);                          
  digitalWrite(MY_LED_RED, HIGH);   
  delay(1000); 
  digitalWrite(MY_LED_RED, LOW);   
  delay(10);                           
}
