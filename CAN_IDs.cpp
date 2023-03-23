/*
  CAN_IDs.h - Library for consistant CAN IDs
  Created by Chris Ward <veggie2u@cyberward.net>  March 2023.
  Part of YouCanDoIt robot CAN library
  Released under MIT license.
*/

#include "Arduino.h"
#include <CAN_IDs.h>

uint16_t createIdentifier(uint8_t type, uint8_t device, uint8_t fn) {
    uint16_t combined = (type << 8) | (device << 4) | fn;
    return combined;
}

void parseIdentifier(uint16_t identifier, uint8_t *type, uint8_t *device, uint8_t *fn) {
    *type = (identifier >> 8) & 0x07; // 0x07 = 0000 0111
    *device = (identifier >> 4) & 0x0F; // 0x0F = 0000 1111
    *fn = identifier & 0x0F;        // 0x0F = 0000 1111
}

String getBin16String(uint16_t value, int bitSize) {
  String out = "";
  for (int8_t aBit = bitSize-1; aBit >= 0; aBit--)
    out += (bitRead(value, aBit) ? '1' : '0');
  return out;
}

String getBin8String(uint8_t value, int bitSize) {
  String out = "";
  for (int8_t aBit = bitSize-1; aBit >= 0; aBit--)
    out += (bitRead(value, aBit) ? '1' : '0');
  return out;
}
