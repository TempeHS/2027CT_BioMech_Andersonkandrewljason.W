void servo_motor_setup() {
  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

bool lastServoState = false;          // remembers the last ledState we saw
bool sweeping = false;                // true while the servo is at 180
unsigned long sweepStart = 0;         // when the sweep began
const unsigned long HOLD_TIME = 600;  // ms to stay at 180 (adjust to suit your servo)

void get_servo_movement_loop() {
  // a press flips ledState, so a change means a new press
  if (ledState != lastServoState) {
    if (ledState) {
      // arm turned ON: start the sweep to 180
      myServo.write(180);
      sweeping = true;
      sweepStart = millis();
    } else {
      // arm turned OFF: stay at 0 and cancel any sweep
      myServo.write(0);
      sweeping = false;
    }
    lastServoState = ledState;
  }

  // after HOLD_TIME, return to 0 without blocking the loop
  if (sweeping && millis() - sweepStart >= HOLD_TIME) {
    myServo.write(0);
    sweeping = false;
  }
}
