#include <ST7735.h>

ST7735 tft = ST7735(6,7,11,13,8);

void setup() {
  // put your setup code here, to run once:
  tft.initR();
  tft.writecommand(ST7735_DISPON);
  tft.fillScreen(0xf800);
  tft.drawString(40,30,"satoryuta",0xffff);
  tft.drawString(50,60,"1/23",0x001f);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}


