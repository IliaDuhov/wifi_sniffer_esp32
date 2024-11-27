#include "bluetooth_sniffer.h"

BLEScan* pBLEScan;

void scanBluetooth(String* deviceNames, int* rssiValues, int& deviceCount) {
    pBLEScan = BLEDevice::getScan();
    BLEScanResults scanResults = pBLEScan->start(3, false);

    int n = scanResults.getCount();
    deviceCount = n > 6 ? 6 : n; // Лимитируем до 6 устройств

    for (int i = 0; i < deviceCount; i++) {
        BLEAdvertisedDevice device = scanResults.getDevice(i);
        deviceNames[i] = device.getName().length() > 0 ? device.getName().c_str() : device.getAddress().toString().c_str();
        rssiValues[i] = device.getRSSI();
    }

    pBLEScan->clearResults();
}
