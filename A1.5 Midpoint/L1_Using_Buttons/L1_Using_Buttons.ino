#include "ButtonLed.h"

const int DELAY_MS = 30;

ButtonLed _buttonLed1(2, 3, DELAY_MS, /* reverseButtonState= */ false, /* inputPullup = */ false);
ButtonLed _buttonLed2(4, 5, DELAY_MS, /* reverseButtonState= */ true, /* inputPullup = */ false);
ButtonLed _buttonLed3(7, 9, DELAY_MS, /* reverseButtonState= */ true, /* inputPullup = */ true);

void setup() {}

void loop() {
  _buttonLed1.update();
  _buttonLed2.update();
  _buttonLed3.update();
}
