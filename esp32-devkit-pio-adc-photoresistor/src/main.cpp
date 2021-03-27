#include <Arduino.h>

void setup()
{
  // Initialize serial port
  Serial.begin(115200);
}

void loop()
{
  // Read photoresistor value using ADC
  int photoresistor = analogRead(27);
  // Print the value to the serial monitor
  Serial.println(photoresistor);
  delay(1000);
}
