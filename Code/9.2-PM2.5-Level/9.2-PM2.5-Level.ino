#include "PMS.h"

#define LED_GREEN_PIN  (4)
#define LED_YELLOW_PIN (16)
#define LED_RED_PIN    (17)

PMS pms(Serial1);

void setup() {
  Serial.begin(115200);
  Serial1.begin(9600, SERIAL_8N1, 26); // GPIO2 (D4 pin on ESP-12E Development Board)

  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
}

void loop() {
  PMS::DATA data;
  if (pms.read(data)) {
    Serial.print("PM 1.0 (ug/m3): ");
    Serial.println(data.PM_AE_UG_1_0);

    Serial.print("PM 2.5 (ug/m3): ");
    Serial.println(data.PM_AE_UG_2_5);

    Serial.print("PM 10.0 (ug/m3): ");
    Serial.println(data.PM_AE_UG_10_0);

    Serial.println();

    if (data.PM_AE_UG_2_5 < 35) {
      digitalWrite(LED_GREEN_PIN, HIGH);
      digitalWrite(LED_YELLOW_PIN, LOW);
      digitalWrite(LED_RED_PIN, LOW);
    } else if (data.PM_AE_UG_2_5 < 55) {
      digitalWrite(LED_GREEN_PIN, LOW);
      digitalWrite(LED_YELLOW_PIN, HIGH);
      digitalWrite(LED_RED_PIN, LOW);
    } else if (data.PM_AE_UG_2_5 < 150) {
      digitalWrite(LED_GREEN_PIN, LOW);
      digitalWrite(LED_YELLOW_PIN, LOW);
      digitalWrite(LED_RED_PIN, HIGH);
    }
  }
}