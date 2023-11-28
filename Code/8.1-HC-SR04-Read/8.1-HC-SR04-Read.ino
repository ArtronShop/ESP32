#define TRIG_PIN (12) // กำหนดแทนที่ TRIG_PIN ด้วย 12
#define ECHO_PIN (14) // กำหนดแทนที่ ECHO_PIN ด้วย 14

void setup() {
  pinMode(TRIG_PIN, OUTPUT); // กำหนดขา TRIG_PIN เป็นดิจิทัลเอาต์พุต
  pinMode(ECHO_PIN, INPUT); // กำหนดขา ECHO_PIN เป็นดิจิทัลอินพุต

  Serial.begin(115200); // เริ่มต้นใช้งาน Serial ด้วยความเร็ว 115200
}

void loop() {
  digitalWrite(TRIG_PIN, LOW); // ส่งลอจิก 0 ไปที่ขา Trig
  delayMicroseconds(5); // หน่วงเวลา 5 uS
  digitalWrite(TRIG_PIN, HIGH); // ส่งลอจิก 1 ไปที่ขา Trig
  delayMicroseconds(10); // หน่วงเวลา 10 uS
  digitalWrite(TRIG_PIN, LOW); // ส่งลอจิก 0 ไปที่ขา Trig
  unsigned int pulse_width = pulseIn(ECHO_PIN, HIGH); // จับเวลาพัลส์ขา Echo
  unsigned int distance = pulse_width * 0.0173681; // แปลงเวลาเป็นระยะทาง

  Serial.print("Distance is "); // ส่งข้อความไป Serial Monitor
  Serial.print(distance); // ส่งค่าในตัวแปร distance ไป Serial Monitor
  Serial.println(" cm."); // ส่งข้อความไป Serial Monitor
  delay(100); // หน่วงเวลา 0.1 วินาที
}