#include <Arduino.h>

// LED pin
#define LEDPIN  4

void setup()
{
  // Set GPIO pin as output for LED
  pinMode(LEDPIN, OUTPUT);
  // Turn on LED
  digitalWrite(LEDPIN, HIGH);
}

void loop()
{
}
