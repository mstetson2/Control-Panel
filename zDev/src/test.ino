#include <Arduino.h>

void test1() {

    digitalWrite(opsLed, HIGH);
    Serial.println("Hello: ");
    Serial.print(testI);
    testI++;
    delay(500);
    digitalWrite(opsLed, LOW);
    delay(500);

}

void test2() {

}
