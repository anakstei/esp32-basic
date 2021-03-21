#include <Arduino.h>

// LED pin
#define LEDPIN    2
// Button pin
#define BUTTONPIN 25

void setup()
{
  // Set GPIO pin as output for on-board LED
  pinMode(LEDPIN, OUTPUT);
  // Set GPIO pin as input with pull-up resistor for button
  pinMode(BUTTONPIN, INPUT_PULLUP);
}

void loop()
{
  // If the button is pressed
  if (digitalRead(BUTTONPIN) == LOW)
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
