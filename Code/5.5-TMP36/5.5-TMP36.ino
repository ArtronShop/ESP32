#include <ESP32AnalogRead.h>

#define TMP36_PIN (35)  // กำหนดแทนที่ TMP36_PIN ด้วย 35

ESP32AnalogRead tmp36; // สร้างออปเจค tmp36 ด้วยคลาส ESP32AnalogRead

void setup() {
  Serial.begin(115200); // เริ่มนใช้งาน Serial ที่ความเร็ว 115200
  tmp36.attach(TMP36_PIN); // กำหนดขาที่จะอ่านค่าแอนะล็อกเป็น TMP36_PIN
}

void loop() {
  float v = tmp36.readVoltage(); // อ่านค่าแรงดันจาก TMP36
  float t = ((v - 0.75) / 0.01) + 25.0; // แปลงแรงดันเป็นอุณหภูมิ
  Serial.print(t); // แสดงผลค่าอุณหภูมิในตัวแปร t
  Serial.println(" °C"); // ส่งข้อความ " °C"
  delay(100); // หน่วงเวลา 0.1 วินาที
}
