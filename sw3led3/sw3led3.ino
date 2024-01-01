int s1 = 1;
int s2 = 2;
int s3 = 3;
int l4 = 4;
int l5 = 5;
int l6 = 6;
int l4_status = 0;
int l5_status = 0;
int l6_status = 0;
void setup() {
  pinMode(s1, INPUT_PULLUP);
  pinMode(s2, INPUT_PULLUP);
  pinMode(s3, INPUT_PULLUP);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
}
void loop() {
  if(digitalRead(s1)==0){
    if(l4_status==0){
      digitalWrite(l4,1);
      l4_status =1;
    }else{
      digitalWrite(l4,0);
      l4_status = 0;
    }
    delay(250);
  }
  if(digitalRead(s2)==0){
    if(l5_status==0){
      digitalWrite(l5,1);
      l5_status =1;
    }else{
      digitalWrite(l5,0);
      l5_status = 0;
    }
    delay(250);
  }
  if(digitalRead(s3)==0){
    if(l6_status==0){
      digitalWrite(l6,1);
      l6_status =1;
    }else{
      digitalWrite(l6,0);
      l6_status = 0;
    }
    delay(250);
  }
}
