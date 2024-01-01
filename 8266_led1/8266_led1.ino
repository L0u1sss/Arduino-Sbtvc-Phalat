int LEDD0 = D0; 
int LEDD1 = D1; 
int LEDD2 = D2; 
int LEDD3 = D3; 
int LEDD4 = D4; 
void setup() {
  pinMode(LEDD0, OUTPUT); 
  pinMode(LEDD1, OUTPUT);
  pinMode(LEDD2, OUTPUT);
  pinMode(LEDD3, OUTPUT);
  pinMode(LEDD4, OUTPUT);

  digitalWrite(LEDD0, LOW);
  digitalWrite(LEDD1, LOW);
  digitalWrite(LEDD2, LOW);
  digitalWrite(LEDD3, LOW);
  digitalWrite(LEDD4, LOW);

}
void loop()
{
  digitalWrite(LEDD0, HIGH); 
  delay(50); 
  digitalWrite(LEDD1, HIGH); 
  delay(50);
  digitalWrite(LEDD2, HIGH); 
  delay(50);
  digitalWrite(LEDD3, HIGH); 
  delay(50);
  digitalWrite(LEDD4, HIGH); 
  delay(50);
  digitalWrite(LEDD0, LOW);  
  delay(50);
  digitalWrite(LEDD1, LOW);  
  delay(50);
  digitalWrite(LEDD2, LOW);  
  delay(50);
  digitalWrite(LEDD3, LOW);  
  delay(50);
  digitalWrite(LEDD4, LOW);  
  delay(50);
}
