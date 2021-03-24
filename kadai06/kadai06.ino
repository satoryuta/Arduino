int ledPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  float i,g;
  i = analogRead(0);
  g =(i-129)/2.05;
  
  Serial.println(g);
  delay(500);
  
  if(g>=28){
    digitalWrite(ledPin,HIGH);
  }else if(g<28){
    digitalWrite(ledPin,LOW);
  }
  
}
