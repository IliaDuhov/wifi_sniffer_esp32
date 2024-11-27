#ifndef CONFIG_H
#define CONFIG_H

#define OLED_SCL 22 
#define OLED_SDA 21 
#define OLED_ADDR 0x3C

#define WIFI_SCAN_INTERVAL 5000

#define BLUETOOTH_SCAN_INTERVAL 5000 

enum ScanType { WIFI_SCAN, BLUETOOTH_SCAN };

#endif
