#ifndef CONFIG_H
#define CONFIG_H

// OLED настройки
#define OLED_SCL 22 // Пин для SCL
#define OLED_SDA 21 // Пин для SDA
#define OLED_ADDR 0x3C

// Настройки Wi-Fi
#define WIFI_CHANNEL_MIN 1
#define WIFI_CHANNEL_MAX 13
#define WIFI_SCAN_INTERVAL 500 // Интервал переключения каналов в миллисекундах

#endif