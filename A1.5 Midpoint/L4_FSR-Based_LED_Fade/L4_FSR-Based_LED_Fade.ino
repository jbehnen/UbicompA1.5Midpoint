const int INPUT_PIN = A0;
const int OUTPUT_LED = LED_BUILTIN;
const int DELAY_MS = 50;

void setup() {
  pinMode(INPUT_PIN, INPUT);
  pinMode(OUTPUT_LED, OUTPUT);
}

void loop() {
  int fsrReading = analogRead(INPUT_PIN);
  int ledBrightness = map(fsrReading, 0, 1023, 0, 255);
  analogWrite(OUTPUT_LED, ledBrightness);

  Serial.print(fsrReading);
  Serial.print(",");
  Serial.println(ledBrightness);

  delay(DELAY_MS);
}
