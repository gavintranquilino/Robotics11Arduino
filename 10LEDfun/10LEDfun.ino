// 10 LED fun
// Gavin's Code for the 10 LED fun
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int sleepTime = 100;

void rightToLeft() {
  // Lights up LEDs from right to left
  for (int i = 0; i < 10; i++) {
    // Counts 0 to 9
    
    Serial.print(i);
    
    digitalWrite(leds[i], HIGH);
    delay(sleepTime);
    
    digitalWrite(leds[i], LOW);
    delay(sleepTime);
  }
}

void leftToRight() {
  // Lights up LEDs from right to left
  for (int j = 10; j > 0; j--) {
    // Counts 9 to 0
    
    Serial.print(j);
    
    digitalWrite(leds[j], HIGH);
    delay(sleepTime);
    
    digitalWrite(leds[j], LOW);
    delay(sleepTime);
  }
}

void setup() {
  Serial.begin(9600);
  for (int a = 0; a < 10; a++) {
  	pinMode(leds[a], OUTPUT);
    // Set pin modes 
  }
}

void loop() {
  	rightToLeft();
  	leftToRight();
}