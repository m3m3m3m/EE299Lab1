//-----------------------------------------------------------  
// Module name:  
//     filename.c  
// Language:
//     Wiring/Arduino
// Description:  
//    Function counts the number of lines in a C source file.  
//     Does not count blanklines or comment lines.  
//    Reports the results to stdout. Also saves the results  
//    in a data file for further use.  
//  
// Author:  
//    Your Name 
// Rev. 0 15 March 2013 
//-----------------------------------------------------------  
// Pin 13
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);               // wait for two seconds
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
