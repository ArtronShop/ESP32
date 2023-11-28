#define POT_PIN (35)  // กำหนดแทนที่ POT_PIN ด้วย 2

void setup() {
  Serial.begin(115200); // เริ่มต้นใช้ Serial ความเร็ว 115200
}

void loop() {
  Serial.println(analogRead(POT_PIN)); // แสดงผลที่แอนะล็อกที่อ่านได้
  delay(100); // หน่วงเวลา 0.1 วินาที
}
