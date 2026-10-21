void oled_sensor_setup () {/*
*/
#include <Wire.h>
#include "Arduino_SensorKit.h"

void setup()
  Oled.begin();
  Oled.setFlipMode(true);   // sets the rotation of the screen


void loop()
  int random_value = analogRead(A0);   // read value from A0

  Oled.setFont(u8x8_font_chroma48medium8_r);
  Oled.setCursor(51, 35);      // set the coordinates
  Oled.print("Battery:");
  Oled.print("76%");   // print the values
  Oled.refreshDisplay();      // update the display
  delay(1000);
}
