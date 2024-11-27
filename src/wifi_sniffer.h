#ifndef WIFI_SNIFFER_H
#define WIFI_SNIFFER_H

#include <WiFi.h>
#include "config.h"

void scanWiFi(String* ssids, int* signalStrengths, int& networkCount);

#endif
