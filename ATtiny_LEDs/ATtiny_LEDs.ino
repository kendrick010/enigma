#include <FastLED.h>

#define DATA_PIN 0
#define NUM_LEDS 8

CRGB leds[NUM_LEDS];

uint8_t hue = 0;

void setup() {
  
  FastLED.addLeds<SK6812, DATA_PIN, GRB>(leds, NUM_LEDS);

  FastLED.setBrightness(50);
 
}

void loop() {

  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CHSV(hue + (i * 10), 255, 255);
  }

  EVERY_N_MILLISECONDS(15) {
    hue++;
  }

  FastLED.show();
  
}
