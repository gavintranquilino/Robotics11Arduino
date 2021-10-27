// Pushbuttons by Gavin
//

// Variables
int ledPin = 13;
int onPin = 2;
int offPin = 3;
int responseDelay = 20;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(onPin, INPUT);
  pinMode(offPin, INPUT);
}

void loop() {
  if (digitalRead(onPin) == LOW) {
    Serial.println("on");
    digitalWrite(ledPin, HIGH);
    delay(responseDelay);
  }
  if (digitalRead(offPin) == LOW) {
    Serial.println("off");
    digitalWrite(ledPin, LOW);
    delay(responseDelay);
  }
}