#include <Wire.h>

void setup()
{
  Wire.begin();         // join i2c bus (address optional for master)
  Serial.begin(9600);       // start serial for output
}

byte lightOn = 1;

void loop()
{
  Wire.beginTransmission(4);  // transmit to device #4
  Wire.write(lightOn);      // send the signal of whether the LED is on

  Wire.endTransmission();     // stop transmitting
  if(lightOn == 1)
  {
    Serial.print("LED on\n");
    lightOn = 0;
  }
  else 
  {
    Serial.print("LED off\n");
    lightOn = 1;
  }
  delay(500);
}
