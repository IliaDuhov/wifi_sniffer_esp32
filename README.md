# Wi-Fi Analyzer for ESP32 with OLED Display

![Project](https://img.shields.io/badge/platform-PlatformIO-blue)  
![Board](https://img.shields.io/badge/board-ESP32--WROOM32-orange)  
![OLED](https://img.shields.io/badge/display-OLED%20I2C-green)  

## **Проект Wi-Fi Analyzer**

### **Описание**
Wi-Fi Analyzer — это проект, разработанный на основе микроконтроллера **ESP32 WROOM-32** и OLED-дисплея, подключенного по I2C.  
Проект анализирует доступные Wi-Fi сети и Bluetooth устройства в окружении, отображает их SSID (имя сети) и мощность сигнала (RSSI) в реальном времени на экране, и выводит mac-адрес устройства с мощностью сигнала.

### **Основные возможности**
1. **Wi-Fi Sniffing**:
   - Отображение SSID доступных сетей Wi-Fi.
   - Отображение мощности сигнала каждой сети (RSSI).
   - Поддержка вывода до 5-6 сетей на экран одновременно.
   
2. **Bluetooth Sniffing**:
   - Анализ BLE-устройств в зоне видимости.
   - Вывод MAC-адреса и RSSI Bluetooth-устройств.
   - Динамический переход между отображением данных Wi-Fi и Bluetooth.

3. **Графический интерфейс**:
   - Данные отображаются на OLED-дисплее (разрешение 128x64) в удобном формате.
   - Для Wi-Fi используется табличное представление, а для Bluetooth — список устройств с их характеристиками.

---

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
   upload_port = COM4
   monitor_speed = 115200


   build_flags =
      -Os                         ; Оптимизация для минимального размера
      -Wl,--gc-sections           ; Удаление неиспользуемых секций
      -ffunction-sections         ; Удаление неиспользуемых функций
      -fdata-sections             ; Удаление неиспользуемых данных
      -DCORE_DEBUG_LEVEL=0        ; Отключение отладочных сообщений Arduino
      -DESP32_WIFI_STATIC_RX_BUFFER_NUM=4 ; Снижение буферов Wi-Fi для экономии памяти
      -DESP32_WIFI_DYNAMIC_RX_BUFFER_NUM=4 ; Аналогично для динамических буферов

   lib_deps =
      adafruit/Adafruit GFX Library @ ^1.11.3   
      adafruit/Adafruit SSD1306 @ ^2.5.7
      adafruit/Adafruit BusIO @ ^1.14.1
      h2zero/NimBLE-Arduino @ ^1.4.0

   board_build.partitions = no_ota.csv
   board_build.filesystem = none


   board_upload.maximum_size = 1310720         
   
   
3.  - **Сканирование доступных Wi-Fi сетей.**
    - **Сканирование BLE устройств.**
    - **Отображение SSID и мощности сигнала (RSSI).**
    - **Отображение MAC-адреса и мощности сигнала.**
    - **Интерактивный OLED-дисплей (I2C).**

