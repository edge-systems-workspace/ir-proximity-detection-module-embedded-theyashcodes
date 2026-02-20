#include <Arduino.h>

int irPin = 7;     // IR sensor OUT
int ledPin = 13;   // Onboard LED

void setup() {
    pinMode(irPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int irState = digitalRead(irPin);

    if (irState == LOW) { // Object detected (most IR modules)
        digitalWrite(ledPin, HIGH);
        Serial.println("Object Detected");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("No Object");
    }

    delay(500);
}