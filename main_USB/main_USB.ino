#include "Keyboard.h"
#include "HID.h"

void setup() {
  Serial1.begin(115200);
  Keyboard.begin();
}


void loop() {
  char c = Serial1.read();
  
  //Acelerator
  if (c == 'a') {
    Keyboard.press(KEY_UP_ARROW);
  }

  if (c == 'b') {
    Keyboard.release(KEY_UP_ARROW);
  }

  //Marcha ++
  if (c == 'c') {
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(50);
    Keyboard.release(KEY_LEFT_SHIFT);
  }

  //Marcha --
  if (c == 'e') {
    Keyboard.press(KEY_LEFT_CTRL);
    delay(50);
    Keyboard.release(KEY_LEFT_CTRL);
  }

  //Freio de mao
  if (c == 'k') {            
    Keyboard.release(32);             
  }
  if (c == 'l') {
    Keyboard.press(32);
  }

  //Freio
  if (c == 'm') {            
    Keyboard.press(KEY_DOWN_ARROW);             
  }
  if (c == 'n') {
    Keyboard.release(KEY_DOWN_ARROW);
  }

  //Enter
  if (c == 'o') {            
    Keyboard.press(KEY_RETURN);
    delay(50);
    Keyboard.release(KEY_RETURN);             
  }






























































 

}
