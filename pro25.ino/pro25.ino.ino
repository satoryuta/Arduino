char incomingByte;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0 ) {
    incomingByte = Serial.read();

    if(incomingByte == 'A') {
      digitalWrite(7,HIGH);
    }else if (incomingByte == 'B') {
      digitalWrite(7,LOW);
    } 
  }
  
}
