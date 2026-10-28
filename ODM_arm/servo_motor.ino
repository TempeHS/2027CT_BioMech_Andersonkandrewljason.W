#include <Servo.h>  // needs the Servo library installed

const int SERVO_PIN = 3;  // Grove connector to D3 (PWM capable)
const int POT_PIN = A0;   // Grove Potentiometer on A0

Servo myServo;

void servo_motor_setup () {
  myServo.attach(SERVO_PIN);  // tell the library the servo signal is on D3
}


void loop() {
  myServo.write(0);
  delay(800);
    myServo.write(90);
  delay(500);
  myServo.write(180);
  delay(500);
}
