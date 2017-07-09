//----------------------------------------------------------------
//  Module name:
//      lab1_program11_i2cm.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program is deployed on the master of the I2C wire. The
//      master device send signals of its button to the slave device,
//      controlling it to switch on or off its LED.
//  Author:
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 28 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

#include <Wire.h>

#define I2C 4                   // using analog port 4 as i2c bus, port 5 should also be connected
#define BUTTON 12               // pin 12 is the pin attaching the button

// the setup routine runs once when you press reset:
void setup() {
    pinMode(BUTTON, INPUT);     // initialize the digital pin as an input
    Wire.begin();               // join i2c bus (address optional for master)
}

// the loop routine runs over and over again forever:
void loop() {
    Wire.beginTransmission(I2C);                // transmit to device #4
    Wire.write(digitalRead(BUTTON) != 0);       // send the signal of the button cond
    Wire.endTransmission();                     // stop transmitting
}

