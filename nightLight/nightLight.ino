// Arduino code by Gavin
int photoPin = 0; //Analog
int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(photoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLvl = analogRead(photoPin);
  Serial.println(lightLvl);
  
  // measured after testing range of photoresistor
  lightLvl = map(lightLvl, 344, 1017, 0, 255);
  
  lightLvl = constrain(lightLvl, 0, 255);
  analogWrite(ledPin, lightLvl);
}