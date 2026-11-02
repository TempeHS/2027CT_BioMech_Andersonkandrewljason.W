#define button 4
#include <Servo.h>  // needs the Servo library installed
#include <Wire.h>
#include "Arduino_SensorKit.h"

int button_state = 0;

const int BUTTON_PIN = 4;  // Grove Button on D4
const int SERVO_PIN = 3;     // Grove SERVO on D3
const int POT_PIN = A0;   // Grove Potentiometer on A0

Servo myServo;

void setup() {
  button_sensor_setup(); // creates a on and off button for the entire arm
  oled_sensor_setup(); // has a screen for arm details
  servo_motor_setup(); // has a screen for arm details

  myServo.write(0); // Start with the arm in its off position.
}

void loop() {
  get_button_pressed_loop(); // button has turned on the arm
  get_screen_on_loop(); // screen is on

  // Share the button's toggle state between both outputs.
  if (button_state) {
    get_servo_movement_loop();
  } else {
    myServo.write(0);
  }
}
