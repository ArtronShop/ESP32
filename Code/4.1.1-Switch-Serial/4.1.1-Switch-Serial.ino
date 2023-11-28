#define SW_PIN (2) // กำหนดแทนที่ SW_PIN ด้วย 2

void setup() {
  Serial.begin(115200); // เริ่มต้นใช้ Serial ความเร็ว 115200
  pinMode(SW_PIN, INPUT); // กำหนดให้ขา LED1_PIN เป็นอินพุตดิจิทัล
}

void loop() {
  if (digitalRead(SW_PIN) == 1) { // ถ้าอ่านค่าสวิตช์ได้ 1
    Serial.println("Pressed"); // ส่งข้อความไปที่ Serial Monitor
  }
  delay(100); // หน่วงเวลา 0.1 วินาที
}
