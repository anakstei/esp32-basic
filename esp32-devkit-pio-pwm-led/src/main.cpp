#include <Arduino.h>

#define LEDPIN  4

// PWM parameters
#define CHANNEL 0
#define FREQ    1000
#define RES     10

void setup()
{
  // Configure PWM
  ledcSetup(CHANNEL, FREQ, RES);
  // Attach the PWM channel to the LED
  ledcAttachPin(LEDPIN, CHANNEL);
}

void loop()
{
  // Increase brightness
  for (int i = 0; i <= 1023; i += 20)
  {
    ledcWrite(CHANNEL, i);
    delay(25);
  }
  // Decrease brightness
  for (int i = 1023; i >= 0; i -= 20)
  {
    ledcWrite(CHANNEL, i);
    delay(25);
  }
}
