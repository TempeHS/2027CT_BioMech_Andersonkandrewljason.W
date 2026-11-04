bool oledOn = false;           // set by the button
bool lastOledState = false; // remembers what the screen last showed
int lastOledButtonState = HIGH; // remembers the previous reading


void oled_sensor_setup() {
  Oled.begin();
  Oled.setFlipMode(true);   // sets the rotation of the screen
}


void get_screen_on_loop() {
  int buttonState = digitalRead(BUTTON_PIN); // Input

  // new press only: HIGH -> LOW
  if (buttonState == LOW && lastOledButtonState == HIGH) {
    oledOn = !oledOn;  // toggle
    Oled.clear();  // wipe the old image on each change
    Oled.refreshDisplay();  // make the screen go blank
  }
  lastOledButtonState = buttonState;

  if (oledOn) {
    Oled.setFont(u8x8_font_chroma48medium8_r);
    Oled.setCursor(51, 35);  // set the coordinates
    Oled.print("Battery:76%");  // print the text
    Oled.refreshDisplay();  // update the display
  }
}

