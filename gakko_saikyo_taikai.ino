#include <NintendoSwitchControlLibrary.h>

void setup() {
  // put your setup code here, to run once:
  pushButton(Button::B, 500, 4);
}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton(Button::A, 500);
}
