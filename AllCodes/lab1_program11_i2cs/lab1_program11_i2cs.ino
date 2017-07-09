//----------------------------------------------------------------
//  Module name:
//      lab1_program11_i2cs.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program is deployed on the slave of the I2C wire. The
//      device receive signals from I2C wire, and switch on or off 
//      its LED by the result of the signals. 
//  Author:
//      Man Sun, Mingxiao An, Muhan Li
//  Rev.0 28 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#include <Wire.h>

#define I2C 4                   // using analog port 4 as i2c bus, port 5 should also be connected
#define LED 10                  // pin 10 is the pin attaching the LED

// the setup routine runs once when you press reset:
void setup() {
    pinMode(LED, OUTPUT);           // initialize the digital pin as an output
    Wire.begin(I2C);                // join i2c bus with address #4
    Wire.onReceive(receiveEvent);   // register event
}

// the loop routine runs over and over again forever:
void loop() {
    delay(100);
}

// this function is registered as an event:
void receiveEvent(int howMany) {
    byte on = Wire.read();              // read the input as byte
    if (on) {
        digitalWrite(LED, HIGH);        // turn the LED on
    } else {
        digitalWrite(LED, LOW);         // turn the LED off
    }
}

