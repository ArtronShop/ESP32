void setup() {
  Serial.begin(115200); // เริ่มต้นใช้งาน Serial ที่ความเร็ว 115200
  
  int num = 10; // ประกาศตัวแปร num กำหนดค่าเป็น 10
  Serial.print("num = "); // ส่งข้อความ
  Serial.println(num); // ส่งค่าในตัวแปร num พร้อมขึ้นบรรทัดใหม่
  
  num = 35; // กำหนดค่า num เป็น 35
  Serial.print("num = "); // ส่งข้อความ
  Serial.println(num); // ส่งค่าในตัวแปร num พร้อมขึ้นบรรทัดใหม่
}

void loop() {

}
