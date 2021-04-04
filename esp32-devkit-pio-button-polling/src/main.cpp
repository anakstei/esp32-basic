#include <Arduino.h>

#define LEDPIN_BLUE   2
#define LEDPIN_RED    4
#define BUTTONPIN     25

void setup()
{
  // Set GPIO pin as output for on-board LED
  pinMode(LEDPIN_BLUE, OUTPUT);
  // Set GPIO pin as output for LED
  pinMode(LEDPIN_RED, OUTPUT);
  // Set GPIO pin as input with pull-up resistor for button
  pinMode(BUTTONPIN, INPUT_PULLUP);
}

void loop()
{
  digitalWrite(LEDPIN_BLUE, HIGH);
  delay(3000);
  digitalWrite(LEDPIN_BLUE, LOW);
  delay(3000);

  // Read button state
  if (digitalRead(BUTTONPIN) == LOW)
  {
    // If button is pressed, then turn on the LED 
    digitalWrite(LEDPIN_RED, HIGH);
  }
  else
  {
    // If button is not pressed, then turn off the LED
    digitalWrite(LEDPIN_RED, LOW);
  }
}
