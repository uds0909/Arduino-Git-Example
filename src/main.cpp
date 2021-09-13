#include <Arduino.h>

// ESP12 has one LED attached to GPIO2
const int   LED = 2;

void setup() {

  pinMode(LED, OUTPUT);
}

void loop() {
  
  digitalWrite(LED, HIGH);
  delay(1000);
  
  digitalWrite(LED, LOW);
  delay(1000);
}
