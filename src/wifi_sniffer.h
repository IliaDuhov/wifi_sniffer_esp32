#ifndef WIFI_SNIFFER_H
#define WIFI_SNIFFER_H

#include <Arduino.h> // Основная библиотека Arduino
#include <WiFi.h>    // Для работы с Wi-Fi
#include "config.h"  // Настройки проекта

// Сканирование Wi-Fi сетей
void scanNetworks(String* ssids, int* deviceCounts, int& networkCount);

#endif
