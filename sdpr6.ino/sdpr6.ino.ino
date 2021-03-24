#include <SD.h>
File testfile01;
char c;
int i = 0;

void setup() {
  // put your setup code here, to run once:
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
  
  testfile01 = SD.open("sddat.txt", FILE_WRITE);
   if(SD.exists("sddat.txt") ){
       if(testfile01.available() > 0){
      c = Serial.read();
      if(i == 0){
      if (c == 'e') {
        i = -1;
      }
      testfile01.write(c);
      testfile01.close();
      }
   }
 }
}

