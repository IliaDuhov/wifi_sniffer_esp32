#include <Arduino.h>
#include "oled_display.h"
#include "wifi_sniffer.h"
#include "bluetooth_sniffer.h"
#include "config.h"

#define MAX_DISPLAY_ENTRIES 6 // Максимальное количество строк для отображения

String ssids[MAX_DISPLAY_ENTRIES];
int wifiSignalStrengths[MAX_DISPLAY_ENTRIES];
int wifiNetworkCount = 0;

String btDevices[MAX_DISPLAY_ENTRIES];
int btSignalStrengths[MAX_DISPLAY_ENTRIES];
int btDeviceCount = 0;

unsigned long lastWiFiScan = 0;
unsigned long lastBluetoothScan = 0;

void setup() {
    Serial.begin(115200);

    initDisplay();

    WiFi.mode(WIFI_MODE_STA);
    WiFi.disconnect();

    BLEDevice::init("");
}

void loop() {
    unsigned long currentMillis = millis();

    
    if (currentMillis - lastWiFiScan >= WIFI_SCAN_INTERVAL) {
        lastWiFiScan = currentMillis;
        scanWiFi(ssids, wifiSignalStrengths, wifiNetworkCount);
        updateDisplay(WIFI_SCAN, ssids, wifiSignalStrengths, wifiNetworkCount);
        delay(2000);
    }

    if (currentMillis - lastBluetoothScan >= BLUETOOTH_SCAN_INTERVAL) {
        lastBluetoothScan = currentMillis;
        scanBluetooth(btDevices, btSignalStrengths, btDeviceCount);
        updateDisplay(BLUETOOTH_SCAN, btDevices, btSignalStrengths, btDeviceCount);
        delay(2000);
    }
}
