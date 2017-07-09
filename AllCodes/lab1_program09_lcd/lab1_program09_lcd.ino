//----------------------------------------------------------------
//  Module name:
//      lab1_program09_lcd.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program allows buttons to control the cursur of lcd. One
//      button 
//  Author:
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8);     // Bus 1 of the Seeduino sensor Chasis
#define BUTTON_LEFT 11
#define BUTTON_RIGHT 12
int col = 0;                                // column of where the cursor should be
int row = 0;                                // row of where the cursor should be

void moveLeft() {                           // move the cursor left
    lcd.clear();                            // clear the output 'X' on lcd
    if (col > 1)                            // if 
        col -= 1;                           // let the column of the cursor down by 1
    else if (row > 0) {
        row -= 1;
        col = 16;
    }
    lcd.setCursor(col, row);
    lcd.print("X");
}




