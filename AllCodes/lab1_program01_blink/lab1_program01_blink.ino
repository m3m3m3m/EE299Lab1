//----------------------------------------------------------------
//  Module name:
//      lab1_program01_blink.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program controls the on-board LED so that the LED is 
//      on for 2 seconds and off for 1 second and repeats. On the
//      UNO, the on-board LED is attached to digital pin 13.
//  Author:
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#define LED 13                  // pin 13 is the pin attaching the on-board LED

// the setup routine runs once when you press reset:
void setup() {
    pinMode(LED, OUTPUT);       // initialize the digital pin as an output
}

// the loop routine runs over and over again forever:
void loop() {
    digitalWrite(LED, HIGH);    // turn the LED on by making the voltage HIGH
    delay(2000);                // wait for two seconds
    digitalWrite(LED, LOW);     // turn the LED off by making the voltage LOW
    delay(1000);                // wait for a second
}

