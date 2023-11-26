#define LED_PIN (12)  // กำหนดแทนที่ LED_PIN ด้วย 5
#define POT_PIN (35)

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int adc = analogRead(POT_PIN);
  int pwm = map(adc, 0, 4095, 0, 255);
  analogWrite(LED_PIN, pwm);
  delay(10);
}
