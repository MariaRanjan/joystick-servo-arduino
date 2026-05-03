

#include <Servo.h>   // Include Servo library

Servo myServo;       // Create servo object

const int joyX = A0; // Joystick X-axis connected to A0
int joyValue;        // Variable to store joystick value
int angle;           // Variable to store mapped angle

void setup() {
  myServo.attach(2);   // Attach servo signal pin to digital pin 2
  Serial.begin(9600);  // Start serial monitor (optional for debugging)
}

void loop() {
  // Read joystick value (0 to 1023)
  joyValue = analogRead(joyX);

  // Map joystick value to servo angle (0° to 180°)
  angle = map(joyValue, 0, 1023, 0, 180);

  // Move servo to the mapped angle
  myServo.write(angle);

  // Print values for debugging (optional)
  Serial.print("Joystick: ");
  Serial.print(joyValue);
  Serial.print("  Angle: ");
  Serial.println(angle);

  delay(15); // Small delay for smooth movement
}
