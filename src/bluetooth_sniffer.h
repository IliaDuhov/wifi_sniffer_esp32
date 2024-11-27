#ifndef BLUETOOTH_SNIFFER_H
#define BLUETOOTH_SNIFFER_H

#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEScan.h>
#include "config.h" 

void scanBluetooth(String* deviceNames, int* rssiValues, int& deviceCount);

#endif
