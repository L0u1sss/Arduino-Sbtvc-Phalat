#define led  10
void setup() {
 Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available() > 0 ) {
    char val = Serial.read();
    if(val == 'a'){
      digitalWrite(led, HIGH);
    }else if (val == 'b') {
      digitalWrite(led, LOW);
    }
    }

  }
