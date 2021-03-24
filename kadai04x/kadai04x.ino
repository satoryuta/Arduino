int old_sw =0;
int sw1,sw2;

void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  sw1 = digitalRead(7);
  delay(50);
  sw2= digitalRead(7);
  

  if(sw1 == LOW && sw2 == HIGH){
    digitalWrite(8,old_sw);
    old_sw = old_sw ^ 1;
  }
  


  
}
