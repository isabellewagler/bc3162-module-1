/*
 Display all the fast rendering fonts.

 This sketch uses the GLCD (font 1) and fonts 2, 4, 6, 7, 8
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
*/

// Pause in milliseconds between screens, change to 0 to time font rendering
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

  // Now test them with transparent background
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
