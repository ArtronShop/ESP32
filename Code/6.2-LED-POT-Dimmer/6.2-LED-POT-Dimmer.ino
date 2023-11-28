#define LED_PIN (12) // กำหนดแทนที่ LED_PIN ด้วย 12
#define POT_PIN (35) // กำหนดแทนที่ POT_PIN ด้วย 35

void setup() {
  pinMode(LED_PIN, OUTPUT); // กำหนดขาต่อแอลอีดีเป็นเอาต์พุตดิจิทัล
}

void loop() {
  int adc = analogRead(POT_PIN); // อ่านค่าแอนะล็อกจากวอลุ่มเก็บลงตัวแปร adc
  int pwm = map(adc, 0, 4095, 0, 255); // แปลงช่วงค่า 0 - 4095 เป็น 0 - 255
  analogWrite(LED_PIN, pwm); // นำค่าในตัวแปร pwm มากำหนดค่า PWM ของแอลอีดี
  delay(10); // หน่วงเวลา 0.01 วินาที
}
