#include <Arduino.h>

#define LEDPIN 2

void setup()
{
  pinMode(LEDPIN, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  // If there is data in receive buffer
  if (Serial.available() > 0)
  {
    // Read command from receive buffer until newline character
    String cmd = Serial.readStringUntil('\n');

    // Process the command
    if (cmd == "LED_ON")
    {
      digitalWrite(LEDPIN, HIGH);
    }
    else if (cmd == "LED_OFF")
    {
      digitalWrite(LEDPIN, LOW);      
    }
    else if (cmd == "LED")
    {
      Serial.printf("LED is %s\n", ((digitalRead(LEDPIN) == HIGH) ? "ON" : "OFF"));
    }
  }
}
