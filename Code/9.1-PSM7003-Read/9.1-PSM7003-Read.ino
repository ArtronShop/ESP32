#include <PMS.h> // นำเข้าไลบรารี่ PMS Library

#define PMS7003_TX_PIN (26) // กำหนดแทนที่ PMS7003_TX_PIN ด้วย 26

PMS pms(Serial1); // สร้างออปเจค pms จากคลาส PMS

void setup() {
  Serial.begin(115200); // เริ่มต้นใช้งาน Serial ที่ความเร็ว 115200
  Serial1.begin(9600, SERIAL_8N1, PMS7003_TX_PIN); // เริ่มต้นใช้งาน Serial1 ที่ความเร็ว 9600
}

void loop() {
  PMS::DATA data; // ประกาศตัวแปรชื่อ data ใช้เก็บค่าฝุ่นที่เซ็นเซอร์วัดได้
  if (pms.read(data)) { // ถ้าอ่านค่าจากเซ็นเซอร์วัดฝุ่นสำเร็จ
    Serial.print("PM 1.0 (ug/m3): "); // ส่งข้อความไปที่ Serial Monitor
    Serial.println(data.PM_AE_UG_1_0); // ส่งค่าในตัวแปร data.PM_AE_UG_1_0 พร้อมขึ้นบรรทัดใหม่
    Serial.print("PM 2.5 (ug/m3): "); // ส่งข้อความไปที่ Serial Monitor
    Serial.println(data.PM_AE_UG_2_5); // ส่งค่าในตัวแปร data.PM_AE_UG_2_5 พร้อมขึ้นบรรทัดใหม่
    Serial.print("PM 10.0 (ug/m3): "); // ส่งข้อความไปที่ Serial Monitor
    Serial.println(data.PM_AE_UG_10_0); // ส่งค่าในตัวแปร data.PM_AE_UG_10_0 พร้อมขึ้นบรรทัดใหม่
    Serial.println(); // ส่งตัวขึ้นบรรทัดใหม่ไปที่ Serial Monitor
  }
  delay(10); // หน่วงเวลา 0.01 วินาที
}