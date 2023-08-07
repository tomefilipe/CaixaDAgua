#include "main.hpp"

void setup() {
  Serial.begin(115200);

  wifi.begin(SSID, WifiPassword);

  pinMode(RESET_WIFI_PIN, INPUT);
}

void loop() {
 if (digitalRead(RESET_WIFI_PIN) == HIGH) {
    wifi.reset();
 }
}
