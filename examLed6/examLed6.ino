int L1 = 2;
int L2 = 3;
int L3 = 4;
int L4 = 5;
int L5 = 6;
int L6 = 7;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
}

void loop() {
  digitalWrite(L1,1);
  digitalWrite(L6,1);
  delay(1000);
  digitalWrite(L1,0);
  digitalWrite(L6,0);
  digitalWrite(L2,1);
  digitalWrite(L5,1);
  delay(1000);
  digitalWrite(L2,0);
  digitalWrite(L5,0);
  digitalWrite(L3,1);
  digitalWrite(L4,1);
  delay(1000);
  digitalWrite(L3,0);
  digitalWrite(L4,0);
}
