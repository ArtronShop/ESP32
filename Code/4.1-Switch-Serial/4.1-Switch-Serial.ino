#define SW_PIN (2) // กำหนดแทนที่ SW_PIN ด้วย 2

void setup() {
  Serial.begin(115200); // เริ่มต้นใช้ Serial ความเร็ว 115200
  pinMode(SW_PIN, INPUT); // กำหนดให้ขา LED1_PIN เป็นอินพุตดิจิทัล
}

void loop() {
  Serial.print("Switch = "); // ส่งข้อความไปที่ Serial Monitor
  Serial.println(digitalRead(SW_PIN)); // ส่งค่าที่อ่านได้ digitalRead()
  delay(100); // หน่วงเวลา 0.1 วินาที
}
