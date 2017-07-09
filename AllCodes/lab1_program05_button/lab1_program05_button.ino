//----------------------------------------------------------------
//  Module name:
//      lab1_program05_blink.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program allows one to use a button attaching to digital
//		pin 12 to control a LED at digital pin 10.
//  Author:
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#define LED 10                  // pin 10 is the pin attaching the LED
#define BUTTON 12               // pin 12 is the pin attaching the button

// the setup routine runs once when you press reset:
void setup() {
    pinMode(LED, OUTPUT);       // initialize the digital pin as an output
    pinMode(BUTTON, INPUT);     // initialize the digital pin as an input
}

// the loop routine runs over and over again forever:
void loop() {
    if (digitalRead(BUTTON)) {      // on button pressed
        digitalWrite(LED, HIGH);    // turn the LED on
    } else {                        // on button released
        digitalWrite(LED, LOW);     // turn the LED off
    }
}
