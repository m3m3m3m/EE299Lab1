//----------------------------------------------------------------
//  Module name:
//      lab1_program02_blink.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program controls the on-board LED so that the LED has 
//      two 1 second blinks followed by two 2 second blinks and then
//      repeats. On the UNO, the on-board LED is attached to digital
//      pin 13.
//  Author:
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#define LED 13                  // pin 13 is the pin attaching the on-board LED

// the setup routine runs once when you press reset:
void setup() {
    pinMode(LED, OUTPUT);       // initialize the digital pin as an output
    // the setup procedure is executed only once
}

// the loop routine runs over and over again forever:
void loop() {
    // the first 1 second blink
    digitalWrite(LED, HIGH);    // turn the LED on by making the voltage HIGH
    delay(1000);                // wait for a second
    digitalWrite(LED, LOW);     // turn the LED off by making the voltage LOW
    delay(1000);                // wait for a second
    // the second 1 second blink
    digitalWrite(LED, HIGH);    // turn the LED on by making the voltage HIGH
    delay(1000);                // wait for a second
    digitalWrite(LED, LOW);     // turn the LED off by making the voltage LOW
    delay(1000);                // wait for a second
    // the first 2 seconds blink
    digitalWrite(LED, HIGH);    // turn the LED on by making the voltage HIGH
    delay(2000);                // wait for two seconds
    digitalWrite(LED, LOW);     // turn the LED off by making the voltage LOW
    delay(2000);                // wait for two seconds
    // the second 2 seconds blink
    digitalWrite(LED, HIGH);    // turn the LED on by making the voltage HIGH
    delay(2000);                // wait for two seconds
    digitalWrite(LED, LOW);     // turn the LED off by making the voltage LOW
    delay(2000);                // wait for two seconds
}

