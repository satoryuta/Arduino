#include <ST7735.h>

ST7735 tft = ST7735(6,7,11,13,8);

void setup() {
  // put your setup code here, to run once:
    tft.initR();
    tft.writecommand(ST7735_DISPON);
    tft.fillScreen(0x0000);

}

void loop() {
  // put your main code here, to run repeatedly:
  int input1,input2;
  float lux,tmpr;
  
  
  input1 = analogRead(1);
  input2 = analogRead(2);
  
  tmpr =(input1-129)/2.05;
  lux = input2 * 4.88 * 1.99 + 100;

  String stringtmpr = String(tmpr); 
  String stringlux = String(lux);
  char outtmpr[10];
  char outlux[10];
  stringtmpr.toCharArray(outtmpr,10);
  stringlux.toCharArray(outlux,10);
  
  

  tft.drawString(40,30,outtmpr,0xffff);
  tft.drawString(40,60,outlux,0x07e0);
  delay(50);
  tft.drawString(40,30,outtmpr,0x0000);
  tft.drawString(40,60,outlux,0x0000);
  

  

}
