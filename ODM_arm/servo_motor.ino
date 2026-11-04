void servo_motor_setup() {
  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

bool lastServoState = false;
bool sweeping = false;
unsigned long sweepStart = 0;
const unsigned long HOLD_TIME = 1500;

void get_servo_movement_loop() {
  if (ledState != lastServoState) {
    if (ledState) {
      myServo.write(180);
      sweeping = true;
      sweepStart = millis();
    } else {
      myServo.write(0);
      sweeping = false;
    }
    lastServoState = ledState;
  }

  if (sweeping && millis() - sweepStart >= HOLD_TIME) {
    myServo.write(0);
    sweeping = false;
  }
}
