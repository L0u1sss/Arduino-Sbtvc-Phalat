#define BLYNK_TEMPLATE_ID "TMPLUcLSgNmI"
#define BLYNK_DEVICE_NAME "PhalatLED2"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"
int ledpin1 = D6;
int ledpin2 = D7;
BLYNK_WRITE(V0) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin1,pinvalue);
}
BLYNK_WRITE(V1) {
  int pinvalue = param.asInt();
  digitalWrite(ledpin2,pinvalue);
}
void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
