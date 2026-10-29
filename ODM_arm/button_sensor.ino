#define button 4
#define button 3

int button_state = 0;

const int BUTTON_PIN = 4;  // Grove Button on D4
const int SERVO_PIN = 3;     // Grove SERVO on D3

void button_sensor_setup () {
  pinMode(SERVO_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);   // this pin will RECEIVE signals
  Serial.begin(115200);
}

void button_sensor_loop () {
  int buttonState = digitalRead(BUTTON_PIN);
  Serial.println(buttonState);
  delay(50);
}
