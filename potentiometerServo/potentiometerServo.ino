#include <Servo.h>

// Variables
// By Gavin
Servo servo;

int potPin = 0; // Analog In
int potVal;
int mappedDegrees;
int inputLag = 10;

void setup() {
  Serial.begin(9600);
  servo.attach(9);
  pinMode(potPin, INPUT);
}

void loop() {
  potVal = analogRead(potPin); // reads potentiometer 0 - 1023
  Serial.println(potVal);
  mappedDegrees = map(potVal, 0, 1023, 0, 180); // scale it to servo 0 - 180
  servo.write(mappedDegrees);
  //Serial.println(mappedDegrees);
  delay(inputLag);
}