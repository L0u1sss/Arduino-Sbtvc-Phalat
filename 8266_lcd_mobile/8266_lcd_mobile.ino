#define BLYNK_TEMPLATE_ID "TMPLfxNcuz5h"
#define BLYNK_DEVICE_NAME "666led"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG
#include "BlynkEdgent.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
int ledpin1 = D9;
int ledpin2 = D4;
int ledpin3 = D5;
int ledpin4 = D6;
int ledpin5 = D7;
int ledpin6 = 10;
BLYNK_WRITE(V0) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin1,pinvalue);
}
BLYNK_WRITE(V1) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin2,pinvalue);
}
BLYNK_WRITE(V2) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin3,pinvalue);
}
BLYNK_WRITE(V3) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin4,pinvalue);
}
BLYNK_WRITE(V4) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin5,pinvalue);
}
BLYNK_WRITE(V5) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin6,pinvalue);
}
void setup()
{
  Serial.begin(115200);
  delay(100);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("LCD1602 I2c Test");
  lcd.setCursor(0, 1);
  lcd.print("hello world");
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledpin4, OUTPUT);
  pinMode(ledpin5, OUTPUT);
  pinMode(ledpin6, OUTPUT);
  BlynkEdgent.begin();
  }

void loop() {
  BlynkEdgent.run();
}
