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

LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8); // port 1
int buttonLeft = 10;
int buttonRight = 9;
int col = 0;
int row = 0;
