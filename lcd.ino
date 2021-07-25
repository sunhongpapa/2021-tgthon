#include <Wire.h>                                  
#include <LiquidCrystal_I2C.h>                     
LiquidCrystal_I2C lcd(0x3F, 16, 2);               

void setup() {
  lcd.init();                                   
  
  lcd.backlight();                               
  lcd.setCursor(0, 0);                               
  lcd.print("Hello, Tgwing!");
  lcd.setCursor(0, 1);                             // 1번 칸, 2번 줄
  lcd.print("Tg-thon Fighting ");
}

void loop() {
}
