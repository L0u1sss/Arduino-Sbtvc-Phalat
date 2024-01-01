#define BLYNK_TEMPLATE_ID "TMPLp341Ue85"
#define BLYNK_DEVICE_NAME "phalat led3lcd"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

#include "BlynkEdgent.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int ledpin1 = D6;
int ledpin2 = D7;
int ledpin3 = D8;
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
void setup()
{
  Serial.begin(115200);
  delay(100);
  lcd.clear();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Phalat");
  lcd.setCursor(0, 1);
  lcd.print("Amachayapha");
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  BlynkEdgent.begin();
}
void loop() 
{
  BlynkEdgent.run();
}
