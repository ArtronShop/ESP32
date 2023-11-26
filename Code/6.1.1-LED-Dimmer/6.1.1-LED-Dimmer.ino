#define LED_PIN (12)  // กำหนดแทนที่ LED_PIN ด้วย 5

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  analogWrite(LED_PIN, 0);
  delay(500);
  analogWrite(LED_PIN, 64);
  delay(500);
  analogWrite(LED_PIN, 127);
  delay(500);
  analogWrite(LED_PIN, 191);
  delay(500);
  analogWrite(LED_PIN, 255);
  delay(500);
}
