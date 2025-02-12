void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int x = analogRead(A0); // Read X value
  int y = analogRead(A1); // Read Y value

  x = x / 256; // Normalize X to 0–3
  y = y / 256; // Normalize Y to 0–3

  int combined = x * 4 + y; // Combine X and Y (0–15)
  int singleDigit = map(combined, 0, 15, 0, 9); // Map to 0–9

  Serial.print(singleDigit); // Send the single digit
  delay(100); // Add a small delay
}