#include "rgbLed.h"

//creates random colour sequence as long as button is held

RGBLed rgbLed;
bool buttonState = LOW;

void setup() {
Serial.begin(9600);
Serial.println("<<<Welcome to the LED colour sequencer>>>");
pinMode(2, INPUT_PULLUP); //Button pin set as active-low input
rgbLed.init(); //initiaise RGB LED pins
delay(1500);
}


void loop() {
      
  //Read button and display sequence if pressed
  buttonState = digitalRead(2);

  if(buttonState ==LOW)
  {// button is pressed 
    Serial.println("Button is pressed!!! initiating random colour sequence...");
    rgbLed.shuffleSequence();
    rgbLed.displaySequence();
  } else{ //button not pressed
    Serial.println("Press the button...");
    rgbLed.turnOffLED();
    delay(500);
  }
    
}
