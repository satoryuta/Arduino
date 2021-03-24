void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:

  int sw1;
  int sw2;

  sw1 = digitalRead(6);
  sw2 = digitalRead(7);

  if(sw1 == HIGH)
  {
  digitalWrite(8,HIGH);  
  }else{
    digitalWrite(8,LOW);
  }
  
  
  if(sw2 == HIGH)
  {
  digitalWrite(9,HIGH);
  }else{
    digitalWrite(9,LOW);
  }


  

}
