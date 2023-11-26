#define TRIG_PIN (12)
#define ECHO_PIN (14)

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.begin(115200);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  unsigned int pulse_width = pulseIn(ECHO_PIN, HIGH);
  unsigned int distance = pulse_width * 0.0173681;

  Serial.print("Distance is ");
  Serial.print(distance);
  Serial.println(" cm.");
  delay(100);
}