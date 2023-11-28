void setup() {
  Serial.begin(115200); // เริ่มต้นใช้งาน Serial ที่ความเร็ว 115200
  for (int i=0;i<8;i++) { // ใช้คำสั่ง for วนรอบ 8 ครั้ง
    Serial.println("Hello, World!"); // ส่งข้อความพร้อมขึ้นบรรทัดใหม่
  }
}

void loop() {

}
