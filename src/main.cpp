#include <Arduino.h>

const int sensorPin = 34; 
int lightInit;            
int lightVal;              

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Start...");
  lightInit = analogRead(sensorPin);
}

void loop() {
  lightVal = analogRead(sensorPin);
  Serial.printf(">light:%d\n", lightVal);
  delay(200); 
}
