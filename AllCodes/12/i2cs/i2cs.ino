#include <Wire.h>
// Pin 13
int led = 13;
void setup()
{
  
  Wire.begin(4);         // join i2c bus with address #4
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);       // start serial for output
  pinMode(led,OUTPUT);
}
void loop()
{
  delay(100);
}
// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany)
{
  while(1 <Wire.available())  // loop through all but the last
  {
    Serial.print("received");
    bool on = Wire.read();    // receive byte as a character
    if(on)
    {
      digitalWrite(led,HIGH);
      Serial.print("LED on\n");
    }
    else
    {
      digitalWrite(led,LOW);
      Serial.print("LED off\n");
    }
  }
}
