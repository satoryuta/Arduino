int ledPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float input,lux;
  input = analogRead(0);
  lux = input * 4.88 * 1.99 + 100;

  Serial.println(lux);
  delay(500);

    if(lux>=300){
    digitalWrite(ledPin,HIGH);
  }else if(lux < 300){
    digitalWrite(ledPin,LOW);
  }
  

  
}
