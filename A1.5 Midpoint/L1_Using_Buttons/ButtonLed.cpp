#include "ButtonLed.h"
#include <Arduino.h>

ButtonLed :: ButtonLed(int inputButtonPin, int outputLedPin,
                       unsigned long delayMs, bool reverseButtonState, bool inputPullup)
  : _inputButtonPin(inputButtonPin), _outputLedPin(outputLedPin),
    _delayMs(delayMs), _reverseButtonState(reverseButtonState), _inputPullup(inputPullup) {
  int inputMode = _inputPullup ? INPUT_PULLUP : INPUT;
  pinMode(_inputButtonPin, inputMode);
  pinMode(_outputLedPin, OUTPUT);
}

void ButtonLed :: update() {
  int buttonState = digitalRead(_inputButtonPin);
  int adjustedButtonState = _reverseButtonState ? !buttonState : buttonState;
  digitalWrite(_outputLedPin, adjustedButtonState);
  delay(_delayMs);
}
