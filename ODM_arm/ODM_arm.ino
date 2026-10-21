#include <Servo.h>

const int SERVO_PIN = 3;  // Grove connector to D3 (PWM capable)
const int POT_PIN = A0;   // Grove Potentiometer on A0

Servo myServo;

void setup() {
  myServo.attach(SERVO_PIN);  // tell the library the servo signal is on D3
}

void servo_motor_setup () {
  myServo.attach(SERVO_PIN);  // tell the library the servo signal is on D3
}


  myServo.write(0);
  delay(800);
  myServo.write(180);
  delay(500);
