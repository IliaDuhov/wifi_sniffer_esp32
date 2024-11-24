#include "wifi_sniffer.h"

void scanNetworks(String* ssids, int* deviceCounts, int& networkCount) {
    int foundNetworks = WiFi.scanNetworks(); // Сканирование доступных сетей
    networkCount = (foundNetworks > WIFI_CHANNEL_MAX) ? WIFI_CHANNEL_MAX : foundNetworks;

    for (int i = 0; i < networkCount; i++) {
        ssids[i] = WiFi.SSID(i);    // Сохранение SSID
        deviceCounts[i] = WiFi.RSSI(i); // Сохранение уровня сигнала (RSSI)
    }
}
