#include <Arduino.h>

// LED pin
#define LEDPIN    2
// Button pin
#define BUTTONPIN 25

void setup()
{
  // Set GPIO pin as output for on-board LED
  pinMode(LEDPIN, OUTPUT);
  // Set GPIO pin as input for button
  pinMode(BUTTONPIN, INPUT);
}

void loop()
{
  // If the button is pressed
  if (digitalRead(BUTTONPIN) == HIGH)
  {
    // Turn on LED
    digitalWrite(LEDPIN, HIGH);
  }
  else
  {
    // Turn off LED
    digitalWrite(LEDPIN, LOW);
  }
}
