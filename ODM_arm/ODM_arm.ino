#define button 4
#include <Servo.h>  // needs the Servo library installed
#include <Wire.h>
#include "Arduino_SensorKit.h"

int button_state = 0;

const int BUTTON_PIN = 4;  // Grove Button on D4
const int SERVO_PIN = 3;     // Grove SERVO on D3
const int buttonPin = 4;  // Grove Button on D4
const int ledPin = 6;     // Grove LED on D6 (change if yours differs)

bool ledState = false;        // shared: drives both the LED and the servo
int lastButtonState = HIGH;   // remembers the previous reading (INPUT_PULLUP idles HIGH)

Servo myServo;

void setup() {
  button_sensor_setup(); // creates a on and off button for the entire arm
  oled_sensor_setup(); // has a screen for arm details
  servo_motor_setup(); // has a screen for arm details

}

void loop() {
  get_button_pressed_loop(); // button has turned on the arm
  get_screen_on_loop();      // screen follows ledState
  get_servo_movement_loop();
  delay(10);                 // one short delay for the whole loop
}
