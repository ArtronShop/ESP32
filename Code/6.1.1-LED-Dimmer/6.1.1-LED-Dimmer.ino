#define LED_PIN (12)  // กำหนดแทนที่ LED_PIN ด้วย 12

void setup() {
  pinMode(LED_PIN, OUTPUT); // กำหนดขาต่อแอลอีดีเป็นเอาต์พุตดิจิทัล
}

void loop() {
  analogWrite(LED_PIN, 0); // กำหนดเอาต์พุต PWM = 0 (0%)
  delay(500); // หน่วงเวลา 0.5 วินาที
  analogWrite(LED_PIN, 64); // กำหนดเอาต์พุต PWM = 64 (25%)
  delay(500); // หน่วงเวลา 0.5 วินาที
  analogWrite(LED_PIN, 127); // กำหนดเอาต์พุต PWM = 127 (50%)
  delay(500); // หน่วงเวลา 0.5 วินาที
  analogWrite(LED_PIN, 191); // กำหนดเอาต์พุต PWM = 191 (75%)
  delay(500); // หน่วงเวลา 0.5 วินาที
  analogWrite(LED_PIN, 255); // กำหนดเอาต์พุต PWM = 255 (100%)
  delay(500); // หน่วงเวลา 0.5 วินาที
}

