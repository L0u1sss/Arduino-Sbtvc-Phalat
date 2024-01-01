int sw = 12;
int led = 13;
int led_status = 0;
void setup() {
  pinMode(sw, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(sw)==0){
    if(led_status==0){
      digitalWrite(led,1);
      led_status =1;
    }else{
      digitalWrite(led,0);
      led_status = 0;
    }
    delay(250);
  }
  
}
