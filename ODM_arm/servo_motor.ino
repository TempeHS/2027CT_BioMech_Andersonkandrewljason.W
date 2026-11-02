void servo_motor_setup() {
  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

void get_servo_movement_loop() {
  // Share the LED's toggle state without pausing button checks.
  if (button_state == HIGH) {
    myServo.write(180);
  } else {
    myServo.write(0);
  }
}
