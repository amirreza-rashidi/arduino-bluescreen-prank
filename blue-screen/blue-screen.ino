#include <Keyboard.h>

void setup() {
  delay(2000);
  Keyboard.begin();

  // Run (Win + R)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  delay(500);

  // photo location
  Keyboard.print("C:\\Users\\Asus\\Desktop\\bluesc\\bluescreen.avif");
  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(600);  

  // F11 
  Keyboard.press(KEY_F11);
  delay(100);
  Keyboard.release(KEY_F11);

  Keyboard.end();
}

void loop() {}
