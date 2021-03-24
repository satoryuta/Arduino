void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw;
  
  sw = digitalRead(8);

  if(sw == HIGH)
  {
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  }
}
