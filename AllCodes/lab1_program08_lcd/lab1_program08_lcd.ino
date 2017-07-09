//----------------------------------------------------------------
//  Module name:
//      lab1_program08_lcd.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program prints the names of our group on the LCD, with
//      two names on the first row of the display and one on the
//      second.
//  Author:
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8);     // Bus 1 of the Seeduino sensor Chasis

// the setup routine runs once when you press reset:
void setup() {
    lcd.begin(16, 2);                       // 16 * 2 character
    lcd.print("Man & Muhan");                // print two names on the first row
    lcd.setCursor(0, 1);                    // set the cursor to the beginning of the second row
    lcd.print("Mingxiao");                  // print one name
}

// the loop routine runs over and over again forever:
void loop() {
    // nothing to do
}
