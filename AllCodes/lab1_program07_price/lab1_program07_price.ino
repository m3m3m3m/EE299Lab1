//----------------------------------------------------------------
//  Module name:
//      lab1_program07_price.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program prints the result of how much to pay for a trip
//      to Europe, based on the problem in assignment 1, to the 
//      serial monitor.
//  Author:
//      Forked from example code in the public domain
//      Man Sun, Mingxiao An, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

// the setup routine runs once when you press reset:
void setup() {
    Serial.begin(9600);             // start serial port at 9600 bps
    int pnum = 9;                   // number of people
    float cost = 977.5f;            // unit cost per person
    float discount = .95f;          // discount rate
    float tax = 1.095f;             // tax rate
    float res = pnum * cost * discount * tax;
    
    // print the result to the serial monitor:
    Serial.print("The total price of the trip is $");
    Serial.println(res);
}

// the loop routine runs over and over again forever:
void loop() {
    // nothing to do
}

