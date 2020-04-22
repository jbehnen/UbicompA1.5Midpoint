const int OUTPUT_PIEZO_PIN = 9;
const int OUTPUT_LED_PIN = LED_BUILTIN;
const int SOUND_DURATION_MS = 500;
const int HIGH_TONE = 392; // Hz square wave
const int LOW_TONE = 262; // Hz square wave

void setup() {
  pinMode(OUTPUT_PIEZO_PIN, OUTPUT);
  pinMode(OUTPUT_LED_PIN, OUTPUT);
}

void setLightAndTone(int ledOutput, int hzTone) {
  tone(OUTPUT_PIEZO_PIN, hzTone);
  digitalWrite(OUTPUT_LED_PIN, ledOutput);
}

void loop() {
  setLightAndTone(HIGH, HIGH_TONE);
  delay(SOUND_DURATION_MS);

  setLightAndTone(LOW, LOW_TONE);
  delay(SOUND_DURATION_MS);
}
