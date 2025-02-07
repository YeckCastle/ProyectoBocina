int btn=7;
int buzz=11;

void setup() {
  pinMode(btn,INPUT);
  pinMode(buzz,OUTPUT); 
}

void loop() {
  if(digitalRead(btn)){
    digitalWrite(buzz,HIGH);
    delay(700);
  }else
  digitalWrite(buzz,LOW);

}
