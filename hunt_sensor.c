/*
    Project name : Hunt sensor module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-hunt-sensor-module
*/

const int sensorPin = 2; // Pin connected to the hunt sensor
int sensorState = 0;     // Variable to store the sensor state

void setup()
{
  Serial.begin(9600); // Initialize serial communication
  pinMode(sensorPin, INPUT); // Set sensor pin as input
}

void loop() 
{
  // Read the state of the hunt sensor
  sensorState = digitalRead(sensorPin);

  // Check if the sensor is triggered
  if (sensorState == HIGH) {
    Serial.println("Object detected!"); // Print message when object is detected
    delay(1000); // Delay to avoid multiple detections
  }
}
