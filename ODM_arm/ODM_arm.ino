void setup() {
  button_sensor_setup(); // creates a on and off button for the entire arm
  oled_sensor_setup(); // has a screen for arm details
  servo_motor_setup(); // has a screen for arm details
}

void loop() {
get_button_pressed // button has turned on the arm
get_screen_on // screen is on
get_servo_movement // all motors have movement

}

