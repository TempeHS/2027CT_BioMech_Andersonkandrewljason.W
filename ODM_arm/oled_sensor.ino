bool oledOn = false;           // set by the button
int lastOledButtonState = LOW; // remembers the previous reading


void oled_sensor_setup() {
  Oled.begin();
  Oled.setFlipMode(true);   // sets the rotation of the screen
}


void get_screen_on_loop() {
  int buttonState = digitalRead(BUTTON_PIN); // Input
  Serial.println(buttonState); // raw value, remove once it works


  // new press only: LOW -> HIGH
  if (buttonState == HIGH && lastOledButtonState == LOW) {
    oledOn = !oledOn; // toggle
    Oled.clear();     // wipe the old image on each change
  }
  lastOledButtonState = buttonState;


  if (oledOn) {
    Oled.setFont(u8x8_font_chroma48medium8_r);
    Oled.setCursor(0, 3);   // column 0-15, row 0-7
    Oled.print("Battery:76%");
    Oled.refreshDisplay();  // update the display
  }
  delay(50);
}

