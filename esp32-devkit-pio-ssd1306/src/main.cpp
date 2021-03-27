#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>

// I2C pins
#define I2C_SDA 33
#define I2C_SCL 32

// OLED display width, in pixels
#define SCREEN_WIDTH 128
// OLED display height, in pixels
#define SCREEN_HEIGHT 64
// OLED I2C address
#define OLED_ADDR 0x3C

// OLED object declaration
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

void setup()
{
  // Initialize I2C pins
  Wire.begin(I2C_SDA, I2C_SCL, 400000);
  
  // Initialize and clear display
  oled.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  // Clear OLED buffer
  oled.clearDisplay();

  // Display text
  oled.setTextSize(1);
  oled.setTextColor(WHITE);
  oled.setCursor(27, 30);
  oled.print("Hello, world!");

  // Show OLED buffer on the display
  oled.display();
}

void loop()
{
}
