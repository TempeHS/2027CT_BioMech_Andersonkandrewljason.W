void servo_motor_setup() {
  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

void get_servo_movement_loop() {
  // ledState is set by the button code, so the servo always matches the LED
  if (ledState) {
    myServo.write(180);
  } else {
    myServo.write(0);
  }
}
