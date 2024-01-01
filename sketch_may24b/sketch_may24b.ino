int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;

void setup() {
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
}

void loop() {
  digitalWrite(led7,1);delay(500);
  digitalWrite(led6,1);delay(500);
  digitalWrite(led5,1);delay(500);
  digitalWrite(led4,1);delay(500);
  
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  delay(1000);

}
