#include <Arduino.h>

void setup()
{
  // Initialize serial port
  Serial.begin(115200);

  // Print exmaple
  Serial.print('H');
  Serial.print('e');
  Serial.print('l');
  Serial.print('l');
  Serial.print('o');
  Serial.print('\n');

  // Println exmaple
  Serial.println(88); // Print integer number
  Serial.println(3.14);  // Print float number
  Serial.println('C'); // Print character
  Serial.println("Hello world!"); // Print string

  // Println exmaple with the number base
  Serial.println(10, DEC);
  Serial.println(10, HEX);
  Serial.println(10, OCT);
  Serial.println(10, BIN);

  // Printf format exmaple
  int i = 88;
  float f = 3.141592;
  char c = 'C';
  char s[] = "Hello world!";
  Serial.printf("Integer: %d, Hex: %x, Float: %f, Char: %c, String: %s\n", i, i, f, c, s);

  // Printf sub-specifiers exmaple
  Serial.printf("%08d\n", i);
  Serial.printf("%#x\n", i);
  Serial.printf("%.2f\n", f);
}

void loop()
{
}
