#include <Servo.h>

Servo myservo;
int val = 0;
int vr = A0;

void setup() {
  myservo.attach(8);
  myservo.write(0);
  delay(1000);
}

void loop() {
  val = analogRead(vr);
  val = map(val,0,1023,0,180);
  myservo.write(val);
  Serial.println(val);
  delay(20);
}
