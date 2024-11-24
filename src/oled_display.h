#ifndef OLED_DISPLAY_H
#define OLED_DISPLAY_H

#include <Arduino.h>            
#include <Wire.h>               
#include <Adafruit_GFX.h>       
#include <Adafruit_SSD1306.h>   
#include "config.h"             


void initDisplay();


void updateDisplay(const String* ssids, const int* deviceCounts, int networkCount);

#endif
