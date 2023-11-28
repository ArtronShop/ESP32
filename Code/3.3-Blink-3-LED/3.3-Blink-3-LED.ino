#define LED1_PIN (17) // กำหนดแทนที่ LED1_PIN ด้วย 17
#define LED2_PIN (16) // กำหนดแทนที่ LED2_PIN ด้วย 16
#define LED3_PIN (4) // กำหนดแทนที่ LED3_PIN ด้วย 4

void setup() {
  pinMode(LED1_PIN, OUTPUT); // กำหนดให้ขา LED1_PIN เป็นเอาต์พุตดิจิทัล
  pinMode(LED2_PIN, OUTPUT); // กำหนดให้ขา LED2_PIN เป็นเอาต์พุตดิจิทัล
  pinMode(LED3_PIN, OUTPUT); // กำหนดให้ขา LED3_PIN เป็นเอาต์พุตดิจิทัล
}

void loop() {
  digitalWrite(LED1_PIN, HIGH); // สั่งขาที่ต่อ LED1 เอาต์พุตลอจิก 1
  digitalWrite(LED2_PIN, LOW); // สั่งขาที่ต่อ LED2 เอาต์พุตลอจิก 0
  digitalWrite(LED3_PIN, LOW); // สั่งขาที่ต่อ LED2 เอาต์พุตลอจิก 0
  delay(500);
  digitalWrite(LED1_PIN, LOW); // สั่งขาที่ต่อ LED1 เอาต์พุตลอจิก 0
  digitalWrite(LED2_PIN, HIGH); // สั่งขาที่ต่อ LED2 เอาต์พุตลอจิก 1
  digitalWrite(LED3_PIN, LOW); // สั่งขาที่ต่อ LED3 เอาต์พุตลอจิก 0
  delay(500);
  digitalWrite(LED1_PIN, LOW); // สั่งขาที่ต่อ LED1 เอาต์พุตลอจิก 0
  digitalWrite(LED2_PIN, LOW); // สั่งขาที่ต่อ LED2 เอาต์พุตลอจิก 0
  digitalWrite(LED3_PIN, HIGH); // สั่งขาที่ต่อ LED3 เอาต์พุตลอจิก 1
  delay(500);
}
