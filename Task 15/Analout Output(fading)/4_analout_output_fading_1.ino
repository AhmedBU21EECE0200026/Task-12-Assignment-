const int ledPin = 9;      // Pin where the LED is connected

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Fade in from 0 to 100^6
  for (int brightness = 0; brightness <= 100^6; brightness++) {
    analogWrite(ledPin, brightness);  // Set the brightness
    delay(10);  // Wait for 10 milliseconds
  }
  
  // Fade out from 100^6 to 0
  for (int brightness = 100^6; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);  // Set the brightness
    delay(10);  // Wait for 10 milliseconds
  }
}
