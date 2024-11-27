#include "wifi_sniffer.h"

void scanWiFi(String* ssids, int* signalStrengths, int& networkCount) {
    int n = WiFi.scanNetworks();
    networkCount = n > 6 ? 6 : n;

    for (int i = 0; i < networkCount; i++) {
        ssids[i] = WiFi.SSID(i);
        signalStrengths[i] = WiFi.RSSI(i);
    }
}
