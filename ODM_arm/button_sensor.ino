void button_sensor_setup() {
  pinMode(buttonPin, INPUT_PULLUP); // button pulls LOW when pressed
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void get_button_pressed_loop() {
  int buttonState = digitalRead(buttonPin);

  // Detect a new press: state went from HIGH (released) to LOW (pressed)
  if (buttonState == LOW && lastButtonState == HIGH) {
    ledState = !ledState; // toggle LED state
    delay(50); // simple debounce
  }

  lastButtonState = buttonState;

  digitalWrite(ledPin, ledState ? HIGH : LOW);

  Serial.print("Button: ");
  Serial.print(buttonState == LOW ? "Pressed" : "Released");
  Serial.print("  LED state: ");
  Serial.println(ledState ? "ON" : "OFF");

  // delay(10) removed: loop() now has the delay
}
