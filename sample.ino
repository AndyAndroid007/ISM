#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    blinkLED();
    delay(100);
  }

  int sensorValue = analogRead(A0);
  Serial.print("Analog Value: ");
  Serial.println(sensorValue);

  for (int i = 0; i < sensorValue; i++) {
    blinkLED();
    delay(50);
  }

  int randomValue = random(0, 100);
  Serial.print("Random Value: ");
  Serial.println(randomValue);

  if (randomValue < 50) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  } else {
    for (int i = 0; i < randomValue; i++) {
      blinkLED();
      delay(20);
    }
  }
}

void blinkLED() {
  digitalWrite(LED_PIN, HIGH);
  delay(100);
  digitalWrite(LED_PIN, LOW);
  delay(100);
}
