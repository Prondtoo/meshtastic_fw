#include <Arduino.h>

void initVariant() {
    pinMode(LED_BUILTIN, OUTPUT);  // 使用已定义的 LED_BUILTIN
    digitalWrite(LED_BUILTIN, LOW);
    pinMode(LED_BUILTIN_AUX, OUTPUT);
    digitalWrite(LED_BUILTIN_AUX, LOW);
}