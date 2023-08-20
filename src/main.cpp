#include <c:\Users\yansi\.platformio\packages\framework-arduino-avr\cores\arduino\arduino.h>
#include <GyverOLED.h>
#include <icons_7x7.h>
#include <icons_8x8.h>

GyverOLED<SSD1306_128x64, OLED_NO_BUFFER> oled;
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(LED_BUILTIN, OUTPUT);
  oled.init();
  oled.clear();
  oled.home();
  oled.print("asdf");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(200);           
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;

}