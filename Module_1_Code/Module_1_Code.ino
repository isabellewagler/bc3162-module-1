/*
Display The Road Not Taken by Robert Frost on loop

 This sketch uses the GLCD (font 1) and font size 4
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

*/

// Pause in milliseconds between screens
#define WAIT 2000

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

unsigned long targetTime = 0; // Used for testing draw times

void setup(void) {
  tft.init();
  tft.setRotation(1);
}

void loop() {
  targetTime = millis();
  targetTime = millis();

  tft.setTextSize(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);

  tft.drawString("Two roads diverged", 0, 0, 4);
  delay(WAIT);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.drawString("in a wood, and I --", 0, 0, 4);
  delay(WAIT);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.drawString("I took the one", 0, 0, 4);
  tft.drawString("less traveled by,", 0, 26, 4);
  delay(WAIT);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.drawString("And that has made", 0, 0, 4);
  tft.drawString("all the difference.", 0, 26, 4);
  tft.drawString("-- Robert Frost", 0, 78, 4);

  delay(3000);;
}
