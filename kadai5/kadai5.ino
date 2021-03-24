int val = 250;
int bthigh = 7;
int btlow = 8;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(bthigh,INPUT);
  pinMode(btlow,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int high_sw = 0;
  int low_sw = 0;
  
  high_sw = digitalRead(bthigh);
  low_sw  = digitalRead(btlow);
  analogWrite(ledPin,val);
  
    if(high_sw == HIGH){
      val = val + 25; 
      if(val >= 250){
        val = 250;
      }
    }else if(low_sw ==HIGH ){
      val = val - 25;  
      if(val <= 0){
        val =0;
      }     
    }
    delay(200);


  
  


  
}
