#include <Arduino.h>

#define LEDPIN_BLUE   2
#define LEDPIN_RED    4
#define BUTTONPIN     25

void IRAM_ATTR button_isr()
{ 
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

void setup()
{
  // Set GPIO pin as output for on-board LED
  pinMode(LEDPIN_BLUE, OUTPUT);
  // Set GPIO pin as output for LED
  pinMode(LEDPIN_RED, OUTPUT);
  // Set GPIO pin as input with pull-up resistor for button
  pinMode(BUTTONPIN, INPUT_PULLUP);
  // Attach interrupt handler (ISR) to the button
  attachInterrupt(digitalPinToInterrupt(BUTTONPIN), button_isr, CHANGE);
}

void loop()
{
  digitalWrite(LEDPIN_BLUE, HIGH);
  delay(3000);
  digitalWrite(LEDPIN_BLUE, LOW);
  delay(3000);
}
