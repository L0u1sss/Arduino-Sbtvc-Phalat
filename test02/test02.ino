int L5 = D5;
int L6 = D6;
int L7 = D7;
int L8 = D8;
void setup() {
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
}

void loop() {
  digitalWrite(L5,LOW);
  digitalWrite(L6,HIGH);
  digitalWrite(L7,HIGH);
  digitalWrite(L8,LOW);
  delay(500);  
  digitalWrite(L5,HIGH);
  digitalWrite(L6,LOW);
  digitalWrite(L7,LOW);
  digitalWrite(L8,HIGH);
  delay(500);  
}
