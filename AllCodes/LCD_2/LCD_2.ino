#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8); // port 1
int buttonLeft = 10;
int buttonRight = 9;
int col = 0;
int row = 0;


void moveLeft() {
  lcd.clear();
  if (col > 1)
    col -= 1;
  else if (row > 0) {
    row -= 1;
    col = 16;
  }
  lcd.setCursor(col, row);
  lcd.print("X");
}

void moveRight() {
  lcd.clear();
  if (col < 16)
    col += 1;
  else {
    row += 1;
    col = 1;
  }
  lcd.setCursor(col, row);
  lcd.print("X");
}

void setup() {
  pinMode(buttonLeft, INPUT);
  pinMode(buttonRight, INPUT);
  lcd.begin(16, 2); // 16 * 2 character
  lcd.autoscroll();
//  lcd.cursor();
  moveRight();
}

void loop() {
  if (digitalRead(buttonLeft)) {
    moveLeft();
    delay(300);
  }
  if (digitalRead(buttonRight)) {
    moveRight();
    delay(300);
  }
}
