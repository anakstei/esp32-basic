#include <Arduino.h>
#include <ESP32TimerInterrupt.h>

// LED pin
#define LEDPIN_RED  4
// Timer interrupt interval
#define TIMER0_INTERVAL_MS 500

// Init ESP32 timer 0
ESP32Timer ITimer0(0);

void IRAM_ATTR TimerHandler0()
{
  static bool toggle = false;

  digitalWrite(LEDPIN_RED, toggle);
  toggle = !toggle;
}

void setup()
{
  pinMode(LEDPIN_RED, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  // Attach interrupt handler (ISR) to the timer
  ITimer0.attachInterruptInterval(TIMER0_INTERVAL_MS * 1000, TimerHandler0);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);
}
