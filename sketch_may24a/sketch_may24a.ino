int led0 = 0;
int led3 = 3;
int led4 = 4;
int led7 = 7;


void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led7, OUTPUT);
}

void loop() {
  digitalWrite(led0,1);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led7,1);
  delay(1000);

  digitalWrite(led0,0);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led7,0);
  delay(1000);

}
