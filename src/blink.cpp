#include "Arduino.h"
#include "blink.h"

#define led 2

void blink() {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
    Serial.println("BLINK!");
}