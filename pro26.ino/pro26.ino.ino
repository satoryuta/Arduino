int black = 8;
int white = 7;
int lsw = 0;
int rsw = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(black,INPUT);
  pinMode(white,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:



  lsw = digitalRead(black);
  rsw = digitalRead(white);
  delay(200);
  
  
  if (lsw == HIGH) {
    Serial.println('A');
  }else if(rsw == HIGH) {
    Serial.println('B');
  }
  
}
