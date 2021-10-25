void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, HIGH);
  Serial.println("Hello World printed to the Serial Monitor");
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000); 
}