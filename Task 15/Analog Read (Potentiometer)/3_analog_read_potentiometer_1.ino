// Constants for pin assignments
const int potPin = A0;    // Pin where the potentiometer is connected
const int ledPin = 9;     // Pin where the LED is connected

// Variable to store the potentiometer value
int potValue = 0;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the value from the potentiometer
  potValue = analogRead(potPin);
  
  // Map the potentiometer value to the PWM range (0-255)
  int ledValue = map(potValue, 0, 1023, 0, 255);
  
  // Set the brightness of the LED
  analogWrite(ledPin, ledValue);
  
  // Small delay to smooth out the reading
  delay(10);
}
