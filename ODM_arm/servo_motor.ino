#include <Servo.h>
const int SERVO_PIN = 3;

void servo_motor_setup () {
  myServo.attach(SERVO_PIN);  // tell the library the servo signal is on D3
}

  myServo.write(0);
  delay(800);
  myServo.write(180);
  delay(500);
