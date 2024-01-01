int L1 = D5;
int L2 = D6;
int L3 = D7;
int L4 = D8;
void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
}

void loop() {
  digitalWrite(L1,1);
  digitalWrite(L2,0);
  digitalWrite(L3,0);
  digitalWrite(L4,0);
  delay(500);  
  digitalWrite(L1,0);
  digitalWrite(L2,1);
  digitalWrite(L3,0);
  digitalWrite(L4,0);
  delay(500);
  digitalWrite(L1,0);
  digitalWrite(L2,0);
  digitalWrite(L3,1);
  digitalWrite(L4,0);
  delay(500);   
  digitalWrite(L1,0);
  digitalWrite(L2,0);
  digitalWrite(L3,0);
  digitalWrite(L4,1);
  delay(500);     
}
