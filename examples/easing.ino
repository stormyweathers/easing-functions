#include "easing.h"

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
  delay(4000);
  digitalWrite(13,LOW);
  while (!Serial);

  // Test each easing function
  testEasingFunction(ease::outSine, "outSine");
  testEasingFunction(ease::inSine, "inSine");
  testEasingFunction(ease::inOutSine, "inOutSine");
  testEasingFunction(ease::outQuad, "outQuad");
  testEasingFunction(ease::inQuad, "inQuad");
  testEasingFunction(ease::inOutQuad, "inOutQuad");
  testEasingFunction(ease::outCubic, "outCubic");
  testEasingFunction(ease::inCubic, "inCubic");
  testEasingFunction(ease::inOutCubic, "inOutCubic");
  testEasingFunction(ease::outQuart, "outQuart");
  testEasingFunction(ease::inQuart, "inQuart");
  testEasingFunction(ease::inOutQuart, "inOutQuart");
  testEasingFunction(ease::outExpo, "outExpo");
  testEasingFunction(ease::inExpo, "inExpo");
  testEasingFunction(ease::inOutExpo, "inOutExpo");
  testEasingFunction(ease::outQuint, "outQuint");
  testEasingFunction(ease::inQuint, "inQuint");
  testEasingFunction(ease::inOutQuint, "inOutQuint");
  testEasingFunction(ease::outCirc, "outCirc");
  testEasingFunction(ease::inCirc, "inCirc");
  testEasingFunction(ease::inOutCirc, "inOutCirc");
  testEasingFunction(ease::outElastic, "outElastic");
  testEasingFunction(ease::inElastic, "inElastic");
  testEasingFunction(ease::inOutElastic, "inOutElastic");
  testEasingFunction(ease::outBack, "outBack");
  testEasingFunction(ease::inBack, "inBack");
  testEasingFunction(ease::inOutBack, "inOutBack");
  testEasingFunction(ease::outBounce, "outBounce");
  testEasingFunction(ease::inBounce, "inBounce");
  testEasingFunction(ease::inOutBounce, "inOutBounce");
}

void loop() {
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(13,HIGH);
}

void testEasingFunction(float (*func)(float), const char* name) {
  Serial.print("Testing ");
  Serial.println(name);
  
  for (int i = 0; i <= 50; ++i) {
    float x = map(i, 0, 50, -100, 200) / 100.0;
    Serial.print(x);
    Serial.print(",");
    Serial.println(func(x));
    delay(100);
  }
}