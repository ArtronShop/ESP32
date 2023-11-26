#include <ESP32AnalogRead.h>

ESP32AnalogRead tmp36;

#define TMP36_PIN (35)  // กำหนดแทนที่ TMP36_PIN ด้วย 35

void setup() {
  Serial.begin(115200);
  tmp36.attach(TMP36_PIN);
}

void loop() {
  float v = tmp36.readVoltage();
  float t = ((v - 0.75) / 0.01) + 25.0;
  Serial.print(t);
  Serial.println(" °C");
  delay(100);
}
