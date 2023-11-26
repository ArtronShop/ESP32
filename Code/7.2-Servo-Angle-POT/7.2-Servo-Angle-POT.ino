#include <ESP32Servo.h> 

#define SERVO_PIN (25)
#define POT_PIN   (35)

Servo myservo;

void setup() {
  myservo.attach(SERVO_PIN);
}

void loop() {
  int val = analogRead(POT_PIN);
  int angle = map(val, 0, 4095, 0, 180);
  myservo.write(angle);
  delay(100);
}
