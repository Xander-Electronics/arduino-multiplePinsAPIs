/*
  Multiple Pin operation Library for Arduino.
  Copyright (c) 2017 Arturo Guadalupi. All right reserved.
*/

#ifndef MULTIPLE_PIN_OPS_H
#define MULTIPLE_PIN_OPS_H
#include "Arduino.h"

void multiplePinMode(const int *pins, const int numberOfPins, uint8_t mode);
void multipleDigitalWrite(const int *pins, const int numberOfPins, uint16_t number);
uint16_t multipleDigitalRead(const int *pins, const int numberOfPins);
void multipleAnalogRead(const int *pins, const int numberOfPins, int *values);
void multipleAnalogWrite(const int *pins, const int numberOfPins, uint8_t* values);

#endif // MULTIPLE_PIN_OPS_H
