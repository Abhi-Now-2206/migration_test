#include <Arduino.h>
#include"blink.h"
// put function declarations here:

#define led 2


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);

 
}

void loop() {
  blink();

}

