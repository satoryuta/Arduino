int old_sw =0;
int new_sw;

void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  new_sw = digitalRead(7);
  
  if(new_sw == HIGH && old_sw == 0)
  {    
    digitalWrite(8,HIGH);
    old_sw = 1;
    delay(1000);
  }
  if(new_sw == HIGH && old_sw == 1){
    digitalWrite(8,LOW);
    old_sw = 0;
    delay(1000);
  }
  
}
