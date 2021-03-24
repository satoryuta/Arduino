#include <SD.h>
File testfile01;

int sw = 8;
char c;


void setup() {
  // put your setup code here, to run once:
  pinMode(sw,INPUT);
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
        while((c = testfile01.read()) != -1){ 
          Serial.print(c);
        }
      }
    }
  }

  delay(500);
  

}
