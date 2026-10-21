const int SERVO_PIN = 3;

void setup() {
  button_sensor();
  oled_sensor();
  servo_motor();

}

void loop (){
  myServo.write(0);
  delay(800);
  myServo.write(180);
  delay(500);


}

