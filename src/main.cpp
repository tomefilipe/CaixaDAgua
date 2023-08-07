#include "main.hpp"

void setup() {
  Serial.begin(115200);

  wifi.begin(SSID, WifiPassword);

  pinMode(RESET_WIFI_PIN, INPUT);

  Serial.println("Wifi Ok!");
}

void loop() {
 if (digitalRead(RESET_WIFI_PIN) == HIGH) {
    wifi.reset();
 }
}
