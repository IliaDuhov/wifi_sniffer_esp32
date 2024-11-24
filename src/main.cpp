#include <Arduino.h>       
#include "oled_display.h"  
#include "wifi_sniffer.h"  
#include "config.h"        

#define MAX_NETWORKS 10

String ssids[MAX_NETWORKS];
int deviceCounts[MAX_NETWORKS];
int networkCount = 0;

unsigned long lastScanTime = 0; 
const unsigned long scanInterval = 5000;

void setup() {
    Serial.begin(115200);    
    initDisplay();           
    WiFi.mode(WIFI_MODE_STA); 
    WiFi.disconnect();       
}

void loop() {
    scanNetworks(ssids, deviceCounts, networkCount); 
    updateDisplay(ssids, deviceCounts, networkCount);
    delay(5000);
}

