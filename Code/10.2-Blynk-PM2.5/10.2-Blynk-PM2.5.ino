/*************************************************************
  Blynk is a platform with iOS and Android apps to control
  ESP32, Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build mobile and web interfaces for any
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: https://www.blynk.io
    Sketch generator:           https://examples.blynk.cc
    Blynk community:            https://community.blynk.cc
    Follow us:                  https://www.fb.com/blynkapp
                                https://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  NOTE: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL6vQg_9j77"
#define BLYNK_TEMPLATE_NAME "ESP32 LED"
#define BLYNK_AUTH_TOKEN "0AvHPKRV8Y1VVgwBEJsRlkzCSlDpOWo5"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <PMS.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Artron@Kit";
char pass[] = "Kit_Artron";

PMS pms(Serial1);

void setup()
{
  // Debug console
  Serial.begin(9600);
  Serial1.begin(9600, SERIAL_8N1, 26);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();

  PMS::DATA data;
  if (pms.read(data)) {
    Blynk.virtualWrite(V0, data.PM_AE_UG_1_0);
    Blynk.virtualWrite(V1, data.PM_AE_UG_2_5);
    Blynk.virtualWrite(V2, data.PM_AE_UG_10_0);
  }
}

