#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println(F("calc.exe"));
  DigiKeyboard.delay(500);
  }

void loop(){
  } 