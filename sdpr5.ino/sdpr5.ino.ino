#include <SD.h>
File testfile01;

int sw = 8;
int ledPin = 7;
char c;

void setup() {
  // put your setup code here, to run once:

  pinMode(sw,INPUT);
  pinMode(ledPin,OUTPUT);
 
  Serial.begin(9600);
  delay(100);

  if(!SD.begin(4)){
  Serial.print("initialization failed!");
  }else{
  Serial.println("initialization done.");
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sw) == HIGH){
    testfile01 = SD.open("sddat.txt",FILE_READ);
    if(SD.exists("sddat.txt")){
      if(testfile01.available() > 0){
        
        if (testfile01.seek(9)){  
          c = testfile01.peek();
          if (c == 'S'){
            digitalWrite(ledPin,HIGH);
            delay(2000);
          }else if (c  == 'E'){
            digitalWrite(ledPin,LOW);
            delay(2000);
          }
        }
        
        if (testfile01.seek(19)){  
          c = testfile01.peek();
          if (c == 'S'){
            digitalWrite(ledPin,HIGH);
            delay(2000);
          }else if (c  == 'E'){
            digitalWrite(ledPin,LOW);
            delay(2000);
          }
        }
        
      }
    }
  }
  
}
