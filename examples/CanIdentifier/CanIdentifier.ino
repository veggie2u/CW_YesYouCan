/*
  Identifier.ino

  Example to show use of creating and parsing the CAN identifier.
  The CAN identifier is 11 bits and here it is made up of 3 parts:
    Type(3), Device(4), Function(4)
    
  Created by Chris Ward, March 2023.
  Part of YouCanDoIt robot CAN library
	Released under MIT license.
*/

#include <CAN_IDs.h>
#include <CAN_ID_STRINGS.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Boolean Combine");

  uint8_t type = CAN_TYPE::CONTROL; // 0b001
  uint8_t device = CAN_DEVICE::DRIVE_MOTORS; // 0b0010
  uint8_t fn = CAN_MOTOR_FN::MOVE; // 0b0010

  // combine all three into one identifier
  uint16_t identifier = createIdentifier(type, device, fn);
  Serial.printf("Combined identifier: 0x%04X\n", identifier);
  Serial.print("Combined in boolean: ");
  printBin16(identifier, 11);
  Serial.println();

  // extract identifier into its parts
  uint8_t extracted_type, extracted_device, extracted_fn;
  parseIdentifier(identifier, &extracted_type, &extracted_device, &extracted_fn);

  Serial.print("Extracted values: ");
  printBin8(extracted_type, 3);
  Serial.print(": ");
  Serial.print(CAN_TYPE_STRING[extracted_type]);
  Serial.print(", ");
  printBin8(extracted_device, 4);
  Serial.print(": ");
  Serial.print(CAN_DEVICE_STRING[extracted_device]);
  Serial.print(", ");
  printBin8(extracted_fn, 4);
  Serial.print(": ");
  Serial.println(CAN_MOTOR_FN_STRING[extracted_fn]);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void printBin16(uint16_t value, int bitSize) {
  for (int8_t aBit = bitSize-1; aBit >= 0; aBit--)
    Serial.write(bitRead(value, aBit) ? '1' : '0');
}

void printBin8(uint8_t value, int bitSize) {
  for (int8_t aBit = bitSize-1; aBit >= 0; aBit--)
    Serial.write(bitRead(value, aBit) ? '1' : '0');
}

