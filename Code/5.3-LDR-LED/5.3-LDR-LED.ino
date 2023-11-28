#define LDR_PIN (35)  // กำหนดแทนที่ LDR_PIN ด้วย 35
#define LED_PIN (12)  // กำหนดแทนที่ LED_PIN ด้วย 12

void setup() {
  pinMode(LED_PIN, OUTPUT); // กำหนดขาที่ต่อแอลอีดีเป็นดิจิทัลเอาต์พุต
}

void loop() {
  if (analogRead(LDR_PIN) < 1000) { // ถ้าผ่านค่าแอนะล็อกได้น้อยกว่า 100
    digitalWrite(LED_PIN, HIGH); // สั่งแอลอีดีติด
  } else { // ถ้าเงื่อนไขไม่เป็นจริง
    digitalWrite(LED_PIN, LOW); // สั่งแอลอีดีดับ
  }
  delay(100); // หน่วงเวลา 0.1 วินาที
}
