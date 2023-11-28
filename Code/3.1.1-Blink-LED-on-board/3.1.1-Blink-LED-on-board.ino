#define LED1_PIN (5) // กำหนดแทนที่ LED1_PIN ด้วย 17

void setup() {
  pinMode(LED1_PIN, OUTPUT); // กำหนดให้ขา LED1_PIN เป็นเอาต์พุตดิจิทัล
}

void loop() {
  digitalWrite(LED1_PIN, HIGH); // สั่งขาที่ต่อ LED1 เอาต์พุตลอจิก 1
  delay(100); // หน่วงเวลา 0.1 วินาที
  digitalWrite(LED1_PIN, LOW); // สั่งขาที่ต่อ LED1 เอาต์พุตลอจิก 0
  delay(100); // หน่วงเวลา 0.1 วินาที
}
