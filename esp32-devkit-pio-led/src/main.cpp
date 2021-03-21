#include <Arduino.h>

// LED pin
#define LEDPIN  4

void setup()
{
  // Set GPIO pin as output for LED
  pinMode(LEDPIN, OUTPUT);
}

void loop()
{
  // Turn on LED
  digitalWrite(LEDPIN, HIGH);
  delay(500);
  // Turn off LED
  digitalWrite(LEDPIN, LOW);
  delay(500);
}
