#include "pitches.h"

int buzzer = 13;
int jingleBells[] = {
  NOTE_E5, NOTE_E5, NOTE_E5, 0, NOTE_E5, NOTE_E5, NOTE_E5, 0, NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5, NOTE_E5, 0,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_D5, NOTE_C5, NOTE_G5, 0,
  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5, NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_D5, NOTE_C5
};


void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for(int i = 0; i < sizeof(jingleBells); i++) {
    tone(buzzer, jingleBells[i], 200);
    delay(500);
  }
}
