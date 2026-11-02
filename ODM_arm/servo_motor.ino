void servo_motor_setup () {
  myServo.attach(SERVO_PIN);  // tell the library the servo signal is on D3
}


void get_servo_movement_loop() {
  myServo.write(0);
  delay(800);
    myServo.write(90);
  delay(800);
  myServo.write(180);
  delay(800);
}
