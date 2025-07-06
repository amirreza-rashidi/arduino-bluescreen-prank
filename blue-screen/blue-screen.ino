#include <Keyboard.h>

void setup() {
  delay(2000);//2 sec delay
  Keyboard.begin();

  // Run (Win + R)
  Keyboard.press(KEY_LEFT_GUI);//windows key
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  delay(500);

  // photo location
  Keyboard.print("bluesc\\bluescreen.avif");//enter your own adress
  delay(500);

  Keyboard.press(KEY_RETURN);//enter key
  Keyboard.release(KEY_RETURN);
  delay(600);  

  // F11 
  Keyboard.press(KEY_F11);//f11 key 
  delay(100);
  Keyboard.release(KEY_F11);

  Keyboard.end();
}

void loop() {}
