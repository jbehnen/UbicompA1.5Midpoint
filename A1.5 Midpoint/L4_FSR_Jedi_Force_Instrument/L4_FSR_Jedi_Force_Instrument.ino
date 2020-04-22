const int INPUT_PIN = A0;
const int OUTPUT_PIEZO_PIN = 3;
const int OUTPUT_LED_PIN = LED_BUILTIN;
const int DELAY_MS = 50;

void setup() {
  pinMode(INPUT_PIN, INPUT);
  pinMode(OUTPUT_PIEZO_PIN, OUTPUT);
  pinMode(OUTPUT_LED_PIN, OUTPUT);
}

void loop() {
  int fsrReading = analogRead(INPUT_PIN);
  int ledBrightness = map(fsrReading, 0, 1023, 0, 255);
  int frequency = map(fsrReading, 0, 1023, 31, 1000);
  analogWrite(OUTPUT_LED_PIN, ledBrightness);

  if (fsrReading > 0) {
    tone(OUTPUT_PIEZO_PIN, frequency);
  } else {
    noTone(OUTPUT_PIEZO_PIN);
  }

  Serial.print(fsrReading);
  Serial.print(",");
  Serial.print(ledBrightness);
  Serial.print(",");
  Serial.println(frequency);

  delay(DELAY_MS);
}
