/*
  Multiple Pin operation Library for Arduino.
  Copyright (c) 2017 Arturo Guadalupi. All right reserved.
*/

#include "multiplePinOps.h"

void multiplePinMode(const int *pins, const int numberOfPins, uint8_t mode) {
  for (uint8_t i  = 0; i < numberOfPins; i++) {
    if (mode == INPUT_PULLUP) pinMode(pins[i], INPUT_PULLUP);
    else if (mode == OUTPUT) pinMode(pins[i], OUTPUT);
    else pinMode(pins[i], INPUT);
  }
}

void multipleDigitalWrite(const int *pins, const int numberOfPins, uint16_t number) {
  for (uint8_t i = 0; i < numberOfPins; i++) {
    if (number & (1 << i)) {
      digitalWrite(pins[i], HIGH);
    }
    else {
      digitalWrite(pins[i], LOW);
    }
  }
}

uint64_t multipleDigitalRead(const int *pins, const int numberOfPins) {
  uint16_t value = 0;
  for (uint8_t i = 0; i < numberOfPins; i++) {
    if (digitalRead(pins[i])) {
      value += (uint16_t) (1 << i);
    }
  }
  return value;
}

void multipleAnalogRead(const int *pins, const int numberOfPins, int *values) {
  for (uint8_t i = 0; i < numberOfPins; i++) {
    values[i] = analogRead(pins[i]);
    Serial.println(values[i]);
  }
}

void multipleAnalogWrite(const int *pins, const int numberOfPins, uint8_t* values) {
  for (uint8_t i = 0; i < numberOfPins; i++) {
    analogWrite(pins[i], values[i]);
  }
}

