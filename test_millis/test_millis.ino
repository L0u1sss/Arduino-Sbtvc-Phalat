void setup() {
  Serial.begin(9600);
}

void loop() {
  static unsigned long time_1 = millis();
  static unsigned long time_2 = millis();
   if(millis() - time_1 > 2000){
    time_1 = millis();
    Serial.println("1");
    }
   if(millis() - time_2 > 4000){
    time_2 = millis();
    Serial.println("0");
    }
}
