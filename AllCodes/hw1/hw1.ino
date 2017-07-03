

void setup()
{
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
  int pnum = 9;
  float cost = 977.5;
  float discount = .95;
  float tax = 1.095;
  float res = pnum * cost * discount * tax;
  Serial.println(res);
}

void loop()
{
//  Serial.print("hello world ");
//  Serial.println(i);
//  delay(1000);
//  Serial.println("how ya doin");
//  delay(1000);
}

