/*
	CAN_IDs.h - Library for consistant CAN IDs
	Created by Chris Ward <veggie2u@cyberward.net>  March 2023.
  Part of YouCanDoIt robot CAN library
	Released under MIT license.
*/

#ifndef CAN_IDS_H
#define CAN_IDS_H

#include "Arduino.h"

class CAN_TYPE
{
  public:
    static const uint8_t EMERGENCY = 0b000;
    static const uint8_t CONTROL = 0b001;
    static const uint8_t FUNCTION = 0b010;
    static const uint8_t DATA = 0b011;
    static const uint8_t REQUEST = 0b100;
    static const uint8_t LOG = 0b101;
    static const uint8_t PING = 0b110;
    static const uint8_t OTHER = 0b111;
};

class CAN_DEVICE
{
  public:
    static const uint8_t ROUTER = 0b0000;
    static const uint8_t BRAINS = 0b0001;
    static const uint8_t DRIVE_MOTORS = 0b0010;
    static const uint8_t BATTERY = 0b0011;
    static const uint8_t LIGHTS = 0b0100;
    static const uint8_t SOUND = 0b0101;
    static const uint8_t GPS = 0b0110;
    static const uint8_t GYRO = 0b0111;
    static const uint8_t DSLAM = 0b1000;
    static const uint8_t VISION = 0b1001;
    static const uint8_t SENSORS = 0b1010;
};

class CAN_ROUTER_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_BRAINS_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_MOTOR_FN
{
  public:
    static const uint8_t PING = 0b0000;
    static const uint8_t BREAK = 0b0001;
    static const uint8_t MOVE = 0b0010;
};

class CAN_BATTERY_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_LIGHTS_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_SOUND_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_GPS_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_GYRO_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_DSLAM_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_VISION_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

class CAN_SENSORS_FN
{
  public:
    static const uint8_t PING = 0b0000;
};

uint16_t createIdentifier(uint8_t type, uint8_t device, uint8_t fn);

void parseIdentifier(uint16_t identifier, uint8_t *type, uint8_t *device, uint8_t *fn);

String getBin16String(uint16_t value, int bitSize);

String getBin8String(uint8_t value, int bitSize);

#endif