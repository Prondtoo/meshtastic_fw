#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

static const uint8_t LED_BUILTIN = 12;
static const uint8_t BUTTON_BUILTIN = 9;

static const uint8_t TX = 21;
static const uint8_t RX = 16;

static const uint8_t SDA = 4;
static const uint8_t SCL = 5;

static const uint8_t SS = 7;
static const uint8_t MOSI = 3;
static const uint8_t MISO = 10;
static const uint8_t SCK = 2;

static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
//static const uint8_t A2 = 2;
//static const uint8_t A3 = 3;
//static const uint8_t A4 = 4;
//static const uint8_t A5 = 5;
#define LED_BUILTIN 12
#define LED_BUILTIN_AUX 13
#define LED_BUILTIN_ACTIVE_LOW

#endif /* Pins_Arduino_h */
