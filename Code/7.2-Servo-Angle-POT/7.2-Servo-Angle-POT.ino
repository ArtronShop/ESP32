#include <ESP32Servo.h> // นำเข้าไลบรารี่ ESP32Servo

#define SERVO_PIN (25) // กำหนดแทนที่ SERVO_PIN ด้วย 25
#define POT_PIN   (35) // กำหนดแทนที่ POT_PIN ด้วย 35

Servo myservo; // สร้างออปเจค myservo จากคลาส Servo

void setup() {
  myservo.attach(SERVO_PIN); // กำหนดขาต่อเซอร์โวเป็น SERVO_PIN
}

void loop() {
  int val = analogRead(POT_PIN); // อ่านค่าแอนะล็อกจากวอลุ่มใส่ลงตัวแปร val
  int angle = map(val, 0, 4095, 0, 180); // แปลงค่าแอนะล็อก 0 - 4095 เป็น 0 - 180
  myservo.write(angle); // นำค่าในตัวแปร angle สั่งงานเซอร์โวมอเตอร์
  delay(100); // หน่วงเวลา 0.1 วินาที
}
