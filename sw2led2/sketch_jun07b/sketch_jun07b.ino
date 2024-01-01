int s1 = 10;
int s2 = 11;
int l1 = 7;
int l2 = 6;
int l1_status = 0;
int l2_status = 0;
void setup() {
  pinMode(s1, INPUT_PULLUP);
  pinMode(s2, INPUT_PULLUP);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
}

void loop() {
  if(digitalRead(s1)==0){
    if(l1_status==0){
      digitalWrite(l1,1);
      l1_status =1;
    }else{
      digitalWrite(l1,0);
      l1_status = 0;
    }
    delay(250);
  }
  if(digitalRead(s2)==0){
    if(l2_status==0){
      digitalWrite(l2,1);
      l2_status =1;
    }else{
      digitalWrite(l2,0);
      l2_status = 0;
    }
    delay(250);
  }
}
