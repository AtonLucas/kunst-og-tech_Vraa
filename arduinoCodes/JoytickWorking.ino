#include <Cabluino.h>

// Define the data addresses for the single-digit output
// Address for the single-digit value

void setup() {
  // Initialize Cabluino communication
  Cabluino.begin(115200);

  // Set a waiting time for Cabluino (optional)
  Cabluino.waitingTime(5);


  
}

void loop() {
  // Read the analog values from the joystick or potentiometer
  int x = analogRead(A0); // Read X value
  int y = analogRead(A1); // Read Y value

    OSCBundle bndl; // Create a bundle to send data
    bndl.add("/xVal").add(x);
    bndl.add("/yVal").add(y); // Add the single-digit value to the bundle
    Cabluino.send(bndl); // Send the bundle to Cables


  // Optional: Print the single digit to the Serial monitor for debugging
  

  // Add a small delay
  delay(100);
}