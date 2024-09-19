#include <Ticker.h>

#define LED 2
Ticker ticker;

void toggleLED() {
    digitalWrite(LED, !digitalRead(LED));
}

void setup() {
    pinMode(LED, OUTPUT);
    ticker.attach(0.5, toggleLED); // Call toggleLED function every 1 second
}

void loop() {
    // Empty loop as Ticker handles the timing in the background
}
