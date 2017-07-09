//----------------------------------------------------------------
//  Module name:
//      lab1_program09_lcd.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program allows buttons to control the cursur of lcd. One
//      button moves the cursor left when pressed, the other moves
//      the cursor right. 
//  Author:
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8);     // Bus 1 of the Seeduino sensor Chasis
#define BUTTON_LEFT 11                      // pin 11 is the pin attaching the move-left button
#define BUTTON_RIGHT 12                     // pin 12 is the pin attaching the move-right button
int col = 0;                                // column of where the cursor should be
int row = 0;                                // row of where the cursor should be

void moveLeft() {                           // move the cursor left
    lcd.clear();                            // clear the output 'X' on lcd
    if (col > 1)                            // if the cursor is not at the leftmost
        col -= 1;                           // the cursor goes left by 1
    else if (row > 0) {                     // if the cursor is not at the topmost
        row -= 1;                           // the cursor goes up by 1 
        col = 16;                           // the cursor goes to the rightmost
    }
    lcd.setCursor(col, row);                // apply the position change of the cursor
    lcd.print("X");                         // print "X" to the LCD
}

void moveRight() {
    lcd.clear();                            // clear the output 'X' on lcd
    if (col < 16)                           // if the cursor is not at the rightmost
        col += 1;                           // the cursor goes right by 1
    else {
        row += 1;                           // the cursor goes down by 1 
        col = 1;                            // the cursor goes to the leftmost
    }
    lcd.setCursor(col, row);                // apply the position change of the cursor
    lcd.print("X");                         // print "X" to the LCD
}

// the setup routine runs once when you press reset:
void setup() {
    pinMode(BUTTON_LEFT, INPUT);             // initialize the digital pin as an input
    pinMode(BUTTON_RIGHT, INPUT);            // initialize the digital pin as an input
    lcd.begin(16, 2);                       // 16 * 2 character
    lcd.autoscroll();                       // setup autoscroll so that the display will automatically move up & down with the cursor
    moveRight();                            // move the cursor right at first and print "X"
}

// the loop routine runs over and over again forever:
void loop() {
    if (digitalRead(BUTTON_LEFT)) {          // on buttonLeft pressed
        moveLeft();                         // move left the cursor
        delay(300);                         // delay 0.3s
    }
    if (digitalRead(BUTTON_RIGHT)) {        // on buttonRight pressed
        moveRight();                        // move right the cursor
        delay(300);                         // delay 0.3s
    }
}

