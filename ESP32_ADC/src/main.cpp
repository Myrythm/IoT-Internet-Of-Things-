//Muhammad Azka Adhitama

#include <Arduino.h>

#define POT_PIN 15

int adcValue = 0;

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
    adcValue = analogRead(POT_PIN);
    Serial.println(adcValue);
    delay(5000);
}