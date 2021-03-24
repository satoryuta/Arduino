#include <SD.h>
File testfile1;


int sw1 = 8;
int sw2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
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

  if(digitalRead(sw1) == HIGH){
    testfile1 = SD.open("sddat.txt",FILE_WRITE);
    testfile1.println("sato ryuta");
    testfile1.close();
  }else if (digitalRead(sw2) == HIGH){
    if(SD.exists("sddat.txt")){
      SD.remove("sddat.txt");
    }
  }
  delay(100);
  

}
