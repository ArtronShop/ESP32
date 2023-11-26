#define LDR_PIN (35)  // กำหนดแทนที่ LDR_PIN ด้วย 35
#define LED_PIN (12)  // กำหนดแทนที่ LED_PIN ด้วย 12

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (analogRead(LDR_PIN) < 1000) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}
