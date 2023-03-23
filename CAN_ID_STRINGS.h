/*
	CAN_ID_STRINGS.h - Library for human readable CAN IDs
	Created by Chris Ward <veggie2u@cyberward.net>  March 2023.
  Part of YouCanDoIt robot CAN library
	Released under MIT license.
*/

#ifndef CAN_ID_STRINGS_H
#define CAN_ID_STRINGS_H

#include "Arduino.h"

// CAN_TYPE
const String CAN_TYPE_STRING[8] = { 
  "Emergency", 
  "Control", 
  "Function", 
  "Data",
  "Request",
  "Log",
  "Ping",
  "Other" 
};

// CAN_DEVICE
const String CAN_DEVICE_STRING[11] = {
  "Router",
  "Brains",
  "Drive Motors",
  "Battery",
  "Lights",
  "Sound",
  "GPS",
  "Gyro",
  "DSLAM",
  "Vision",
  "Sensors"
};

/*
  All the FN values
*/

const String CAN_ROUTER_FN_STRING[1] = { 
  "Ping"
};

const String CAN_BRAINS_FN_STRING[1] = { 
  "Ping"
};

const String CAN_MOTOR_FN_STRING[3] = { 
  "Ping",
  "Break",
  "Move"
};

const String CAN_BATTERY_FN_STRING[1] = { 
  "Ping"
};

const String CAN_LIGHTS_FN_STRING[1] = { 
  "Ping"
};

const String CAN_SOUND_FN_STRING[1] = { 
  "Ping"
};

const String CAN_GPS_FN_STRING[1] = { 
  "Ping"
};

const String CAN_GYRO_FN_STRING[1] = { 
  "Ping"
};

const String CAN_DSLAM_FN_STRING[1] = { 
  "Ping"
};

const String CAN_VISION_FN_STRING[1] = { 
  "Ping"
};

const String CAN_SENSORS_FN_STRING[1] = { 
  "Ping"
};

#endif