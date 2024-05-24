const int buttonPin = 2;    // Pin where the push button is connected
volatile bool buttonPressed = false; // Flag to indicate button press

void setup() {
  pinMode(buttonPin, INPUT);          // Set the button pin as input
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPressISR, RISING); // Attach interrupt on rising edge
  Serial.begin(9600);                 // Initialize serial communication
}

void loop() {
  if (buttonPressed) {
    Serial.println("Button Pressed!");  // Print message when button is pressed
    buttonPressed = false;              // Reset the flag
  }
}

void buttonPressISR() {
  buttonPressed = true; // Set the flag to indicate button press
}
