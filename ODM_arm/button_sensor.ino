void button_sensor_setup () {
#define button 4

int button_state = 0;

void setup() {
    Serial.begin(9600);
    pinMode(button, INPUT);
}

void button_sensor_loop(){
    button_state = digitalRead(button);

    if (button_state == HIGH) {
        Serial.println("Arm turned on!");
    }
delay(50);
}
}
