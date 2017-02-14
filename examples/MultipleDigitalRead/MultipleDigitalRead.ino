/*  MultipleDigitalRead
    Demonstates how to use the multiplePinOpsAPIs
*/

#include <multiplePinOps.h>
const int numberOfInputPins = 3;
const int inputPins[numberOfInputPins] = {5, 6, 7}; // pins to use as output

void setup() {
  // put your setup code here, to run once:
  multiplePinMode(inputPins, numberOfInputPins, INPUT); // set all the pins as input
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int number = multipleDigitalRead(inputPins, numberOfInputPins); // returns the corresponding decimal number reading from pin 5 to 6 (LSB to MSB)
  Serial.print("Reading (DEC) is: ");
  Serial.println(number);
  Serial.print("Reading (HEX) is: ");
  Serial.println(number, HEX);
  Serial.print("Reading (BIN) is: ");
  Serial.println(number, BIN);
  delay(1000);
}
