//----------------------------------------------------------------
//  Module name:
//      lab1_program06_helloworld.ino
//  Languange:
//      Wiring/Arduino
//  Description:
//      The program keeps printing "hello world 9\nhow ya doin\n"
//      to the serial monitor with each line waiting for a second.
//  Author:
//      Forked from example code in the public domain
//      Mingxiao An, Man Sun, Muhan Li
//  Rev.0 26 June 2017
//  Rev.1 8 July 2017
//----------------------------------------------------------------

int i = 9;                          // an integer for the serial output test

// the setup routine runs once when you press reset:
void setup() {
    Serial.begin(9600);             // start serial port at 9600 bps
}

// the loop routine runs over and over again forever:
void loop() {
    Serial.print("hello world ");   // print a string to the monitor
    Serial.println(i);              // print an integer with return
    delay(1000);                    // wait for a second
    Serial.println("how ya doin");  // print a string with return
    delay(1000);                    // wait for a second
}
