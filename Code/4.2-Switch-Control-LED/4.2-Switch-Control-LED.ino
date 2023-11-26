#define SW_PIN  (2)  // กำหนดแทนที่ SW_PIN ด้วย 2
#define LED_PIN (16) // กำหนดแทนที่ LED_PIN ด้วย 2

void setup() {
  Serial.begin(115200); // เริ่มต้นใช้ Serial ความเร็ว 115200
  pinMode(SW_PIN, INPUT); // กำหนดให้ขา SW_PIN เป็นอินพุตดิจิทัล
  pinMode(LED_PIN, OUTPUT); // กำหนดให้ขา LED1_PIN เป็นเอาต์พุตดิจิทัล
}

void loop() {
  if (digitalRead(SW_PIN) == 1) {
    while(digitalRead(SW_PIN) == 1) delay(10);
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  }
  delay(100);
}
