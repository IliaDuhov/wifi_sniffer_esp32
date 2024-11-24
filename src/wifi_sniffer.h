#ifndef WIFI_SNIFFER_H
#define WIFI_SNIFFER_H

#include <Arduino.h> 
#include <WiFi.h>    
#include "config.h"  


void scanNetworks(String* ssids, int* deviceCounts, int& networkCount);

#endif
