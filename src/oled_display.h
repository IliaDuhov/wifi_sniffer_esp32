#ifndef OLED_DISPLAY_H
#define OLED_DISPLAY_H

#include <Arduino.h>            // Основная библиотека Arduino
#include <Wire.h>               // Для работы с шиной I2C
#include <Adafruit_GFX.h>       // Графическая библиотека Adafruit
#include <Adafruit_SSD1306.h>   // Библиотека для дисплея SSD1306
#include "config.h"             // Настройки проекта


void initDisplay();


void updateDisplay(const String* ssids, const int* deviceCounts, int networkCount);

#endif
