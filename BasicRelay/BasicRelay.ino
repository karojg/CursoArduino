void setup() {
  pinMode(2,OUTPUT);
  
}

void loop() {
  digitalWrite(2,LOW);
  delay(1500);
  digitalWrite(2,HIGH);
  delay(1500);
}
