#include "oled_display.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1); // Инициализация дисплея

void initDisplay() {
    Wire.begin(OLED_SDA, OLED_SCL); // Инициализация I2C шины
    if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
        Serial.println("OLED init failed!");
        ESP.restart(); // Перезагрузка в случае ошибки
    }
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.display();
}

void updateDisplay(const String* ssids, const int* deviceCounts, int networkCount) {
    display.clearDisplay();
    display.setTextSize(1);

    for (int i = 0; i < networkCount && i < 6; i++) { // Ограничение на 6 строк
        display.setCursor(0, i * 10);
        display.printf("%s: %d", ssids[i].c_str(), deviceCounts[i]);
    }

    display.display();
}
