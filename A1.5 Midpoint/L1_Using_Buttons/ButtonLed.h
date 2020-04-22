#ifndef BUTTON_LED_H
#define BUTTON_LED_H

class ButtonLed {
  private:
    const int _inputButtonPin; // input button pin
    const int _outputLedPin; // output LED pin
    const unsigned long _delayMs; // loop delay in ms
    const bool _reverseButtonState; // true if should flip button state for activating LED
    const bool _inputPullup; // true if should use INPUT_PULLUP mode instead of INPUT
    
  public:
    // Constructor
    ButtonLed(int inputButtonPin, int outputLedPin, 
              unsigned long delayMs, bool reverseButtonState, bool inputPullup);
    /**
    * Calculates whether to toggle output state based on the set interval
    * Call this function once per loop()
    */ 
    void update();
};

#endif
