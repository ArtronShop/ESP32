#include <ESP32Servo.h> 

#define SERVO_PIN (25)

Servo myservo;

void setup() {
  myservo.attach(SERVO_PIN);
}

void loop() {
  myservo.write(0);
  delay(2000);
  myservo.write(90);
  delay(2000);
  myservo.write(180);
  delay(2000);
}
