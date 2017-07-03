
// LED Pin 8
int led = 8;

// Button Pin 9
int button = 9;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
  // 
  pinMode(button, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  if (digitalRead(button)) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  } else {
    digitalWrite(led, LOW);   // turn the LED off
  }
}
