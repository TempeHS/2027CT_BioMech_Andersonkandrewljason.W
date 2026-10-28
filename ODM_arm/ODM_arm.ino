#include <Servo.h>

const int SERVO_PIN = 3;  // Grove connector to D3 (PWM capable)
const int POT_PIN = A0;   // Grove Potentiometer on A0

Servo myServo;

void setup() {
  button_sensor();
  oled_sensor();
  servo_motor();

}

void loop (){


}

