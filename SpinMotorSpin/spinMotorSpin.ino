// Spin Motor Spin
// By: Gavin

int motorPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void accelerate(int delayTime) {
  // accelerate motor to full speed for set duration
  for (int i = 0; i < 256; i++) {
    Serial.println(i);
    analogWrite(motorPin, i);
    delay(delayTime * 1000 / 256);
  }
}

void decelerate(int delayTime) {
  // decelerate motor to full stop for set duration
  for (int i = 256; i >= 0; i--) {
    // >= operator to get to 0 value
    
    Serial.println(i);
    analogWrite(motorPin, i);
    delay(delayTime * 1000 / 256);
  }
}

void loop() {
  accelerate(5); // accelerate over 5 seconds
  delay(2000);
  decelerate(5); // decelerate to a stop over 5 seconds
  delay(2000);
}