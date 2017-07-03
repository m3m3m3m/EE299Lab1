#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8); // Bus 1

void setup() {
  lcd.begin(16, 2); // 16 * 2 character

  lcd.print("Man Muhan");
  lcd.setCursor(0, 1);
  lcd.print("Mingxiao");
  
}

void loop() {
  // put your main code here, to run repeatedly:
}
