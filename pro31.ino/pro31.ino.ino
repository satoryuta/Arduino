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
  int input;
  char outchar[10];

  
  
  input = analogRead(1);
  input = input/10.23;
  String stringinput = String(input);
  
  stringinput.toCharArray(outchar,10);

    tft.drawString(40,60,outchar,0x07ff);
    delay(100);
    tft.drawString(40,60,outchar,0x0000);
 
  

  


}
