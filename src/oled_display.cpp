#include "oled_display.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void initDisplay() {
    Wire.begin(OLED_SDA, OLED_SCL);
    if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
        Serial.println("OLED init failed!");
        ESP.restart();
    }
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.display();
}

void updateDisplay(ScanType scanType, const String* data, const int* values, int count) {
    const int maxLines = 6;
    display.clearDisplay();
    display.setTextSize(1);
    display.setCursor(0, 0);

    if (scanType == WIFI_SCAN) {
        display.println("Wi-Fi Scan");
    } else {
        display.println("Bluetooth Scan");
    }

    for (int i = 0; i < count && i < maxLines; i++) {
        display.setCursor(0, 10 + i * 10);
        display.printf("%s: %d", data[i].c_str(), values[i]);
    }

    display.display();
}
