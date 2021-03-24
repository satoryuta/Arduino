#include <SD.h>
File testfile01;

int sw = 8;

void setup() {
  // put your setup code here, to run once:
    pinMode(sw,INPUT);
    
    Serial.begin(9600);
    delay(100);
     Serial.print("ok");
        
    if(!SD.begin(4)){
    Serial.print("initialization failed!");
    }else{
    Serial.println("initialization done.");
    }

}

void loop() {
  // put your main code here, to run repeatedly:


  if(digitalRead(sw) == HIGH){
    testfile01 = SD.open("sddat.txt",FILE_WRITE);
    testfile01.println("SSSSSSSSSSEEEEEEEEEE");
    testfile01.close();
  }
  delay(1000);
  
   
  
}
