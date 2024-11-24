# Wi-Fi Analyzer for ESP32 with OLED Display

![Project](https://img.shields.io/badge/platform-PlatformIO-blue)  
![Board](https://img.shields.io/badge/board-ESP32--WROOM32-orange)  
![OLED](https://img.shields.io/badge/display-OLED%20I2C-green)  

## **Проект Wi-Fi Analyzer**

### **Описание**
Wi-Fi Analyzer — это проект, разработанный на основе микроконтроллера **ESP32 WROOM-32** и OLED-дисплея, подключенного по I2C.  
Проект анализирует доступные Wi-Fi сети, отображает их SSID (имя сети) и мощность сигнала (RSSI) в реальном времени на экране.

### **Основные особенности**
- **Сканирование доступных Wi-Fi сетей.**
- **Отображение SSID и мощности сигнала (RSSI).**
- **OLED-дисплей (I2C).**

### **Технические требования**
- **Плата:** ESP32-WROOM-32
- **Дисплей:** OLED 128x64 с интерфейсом I2C (например, SSD1306)
- **Среда разработки:** Visual Studio Code с установленным **PlatformIO**.
- **Библиотеки:**
  - [Adafruit GFX](https://github.com/adafruit/Adafruit-GFX-Library)
  - [Adafruit SSD1306](https://github.com/adafruit/Adafruit_SSD1306)

---

### **Как запустить проект**

1. Установите **Visual Studio Code** и плагин **PlatformIO**.  
   [Скачать VS Code](https://code.visualstudio.com/) | [Документация PlatformIO](https://platformio.org/platformio-ide)

2. Подключите ESP32 и настройте PlatformIO:  
   В `platformio.ini` указаны следующие параметры:
   ```ini
   [env:upesy_wroom]
   platform = espressif32
   board = upesy_wroom
   framework = arduino
   upload_port = SET UP YOUR PORT!!!
   monitor_speed = 115200
   lib_deps =
      adafruit/Adafruit GFX Library
      adafruit/Adafruit SSD1306
      adafruit/Adafruit BusIO
   
   
3.  - **Сканирование доступных Wi-Fi сетей.**
    - **Отображение SSID и мощности сигнала (RSSI).**
    - **Интерактивный OLED-дисплей (I2C).**

