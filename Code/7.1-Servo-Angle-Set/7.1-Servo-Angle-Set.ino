#include <ESP32Servo.h> // นำเข้าไลบรารี่ ESP32Servo

#define SERVO_PIN (25) // กำหนดแทนที่ SERVO_PIN ด้วย 25

Servo myservo; // สร้างออปเจค myservo จากคลาส Servo

void setup() {
  myservo.attach(SERVO_PIN); // กำหนดขาต่อเซอร์โวเป็น SERVO_PIN
}

void loop() {
  myservo.write(0); // กำหนดเซอร์โวหมุน 0 องศา
  delay(2000); // หน่วงเวลา 2 วินาที
  myservo.write(90); // กำหนดเซอร์โวหมุน 90 องศา
  delay(2000); // หน่วงเวลา 2 วินาที
  myservo.write(180); // กำหนดเซอร์โวหมุน 180 องศา
  delay(2000); // หน่วงเวลา 2 วินาที
}
ฟ