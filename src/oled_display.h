#ifndef OLED_DISPLAY_H
#define OLED_DISPLAY_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>
#include "config.h"

void initDisplay();

void updateDisplay(ScanType scanType, const String* data, const int* values, int count);

#endif
