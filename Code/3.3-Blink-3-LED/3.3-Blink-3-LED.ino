#define LED1_PIN (17) // กำหนดแทนที่ LED1_PIN ด้วย 17
#define LED2_PIN (16) // กำหนดแทนที่ LED2_PIN ด้วย 16
#define LED3_PIN (4) // กำหนดแทนที่ LED3_PIN ด้วย 16

void setup() {
  pinMode(LED1_PIN, OUTPUT); // กำหนดให้ขา LED1_PIN เป็นเอาต์พุตดิจิทัล
  pinMode(LED2_PIN, OUTPUT); // กำหนดให้ขา LED2_PIN เป็นเอาต์พุตดิจิทัล
  pinMode(LED3_PIN, OUTPUT); // กำหนดให้ขา LED3_PIN เป็นเอาต์พุตดิจิทัล
}

void loop() {
  digitalWrite(LED1_PIN, HIGH);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, LOW);
  delay(500);
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
  digitalWrite(LED3_PIN, LOW);
  delay(500);
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, HIGH);
  delay(500);
}
