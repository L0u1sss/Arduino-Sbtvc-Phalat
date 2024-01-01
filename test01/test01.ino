int L1 = 1;
int L2 = 2;
int L3 = 3;
int L4 = 4;
void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
}

void loop() {
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(500);
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  delay(500);
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,LOW);
  delay(500);
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  delay(500);
}
