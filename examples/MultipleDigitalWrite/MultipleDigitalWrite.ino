/*  MultipleDigitalWrite
    Demonstates how to use the multiplePinOpsAPIs
*/

#include <multiplePinOps.h>
const int numberOfOutputPins = 3;
const int outputPins[numberOfOutputPins] = {5, 6, 7}; // pins to use as output

void setup() {
  // put your setup code here, to run once:
  multiplePinMode(outputPins, numberOfOutputPins, OUTPUT); // set all the pins as output
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 8; i++) {
    // set output according to i (pin 5, 6, 7 from left to right in the sequence):
    //000 - 100 - 010 - 110 - 001 - 101 - 110- 111
    multipleDigitalWrite(outputPins, numberOfOutputPins, i);
    delay(1000);
  }
}
