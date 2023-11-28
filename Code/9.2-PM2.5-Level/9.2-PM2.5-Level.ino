#include <PMS.h> // นำเข้าไลบรารี่ PMS Library

#define LED_GREEN_PIN  (4) // กำหนดแทนที่ LED_GREEN_PIN ด้วย 4
#define LED_YELLOW_PIN (16) // กำหนดแทนที่ LED_YELLOW_PIN ด้วย 16
#define LED_RED_PIN    (17) // กำหนดแทนที่ LED_RED_PIN ด้วย 17
#define PMS7003_TX_PIN (26) // กำหนดแทนที่ PMS7003_TX_PIN ด้วย 26

PMS pms(Serial1);

void setup() {
  Serial.begin(115200); // เริ่มต้นใช้งาน Serial ที่ความเร็ว 115200
  Serial1.begin(9600, SERIAL_8N1, 26); // เริ่มต้นใช้งาน Serial1 ที่ความเร็ว 9600

  pinMode(LED_GREEN_PIN, OUTPUT); // กำหนดขาต่อแอลอีดีสีเขียวเป็นเอาต์พุตดิจิทัล
  pinMode(LED_YELLOW_PIN, OUTPUT); // กำหนดขาต่อแอลอีดีสีเหลืองเป็นเอาต์พุตดิจิทัล
  pinMode(LED_RED_PIN, OUTPUT); // กำหนดขาต่อแอลอีดีสีแดงเป็นเอาต์พุตดิจิทัล
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

    if (data.PM_AE_UG_2_5 < 35) { // ถ้า PM2.5 น้อยกว่า 35
      digitalWrite(LED_GREEN_PIN, HIGH); // สั่งแอลอีดีสีเขียวติด
      digitalWrite(LED_YELLOW_PIN, LOW); // สั่งแอลอีดีสีเหลืองดับ
      digitalWrite(LED_RED_PIN, LOW); // สั่งแอลอีดีสีแดงดับ
    } else if (data.PM_AE_UG_2_5 < 55) {
      digitalWrite(LED_GREEN_PIN, LOW); // สั่งแอลอีดีสีเขียวดับ
      digitalWrite(LED_YELLOW_PIN, HIGH); // สั่งแอลอีดีสีเหลืองติด
      digitalWrite(LED_RED_PIN, LOW); // สั่งแอลอีดีสีแดงดับ
    } else {
      digitalWrite(LED_GREEN_PIN, LOW); // สั่งแอลอีดีสีเขียวดับ
      digitalWrite(LED_YELLOW_PIN, LOW); // สั่งแอลอีดีสีเหลืองดับ
      digitalWrite(LED_RED_PIN, HIGH); // สั่งแอลอีดีสีแดงติด
    }
  }
  delay(10); // หน่วงเวลา 0.01 วินาที
}


