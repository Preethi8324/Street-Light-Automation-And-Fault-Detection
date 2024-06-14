const int sensorPin = A0; // Analog pin connected to the LDR
const int sensorPin1 = A4;
const int sensorPin2 = A3;
const int sensorPin3 = A2; 
const int threshold = 500; // Adjust this threshold value according to your needs
const int lightPin1 = 2; // Pin connected to the first light
const int lightPin2 = 3; // Pin connected to the second light
const int lightPin3 = 4; // Pin connected to the third light
const int lightPin4 = 5;
const int lightPin5 = 6;
const int lightPin6 = 7;

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  pinMode(lightPin1, OUTPUT); // Set lightPin1 as an output
  pinMode(lightPin2, OUTPUT); // Set lightPin2 as an output
  pinMode(lightPin3, OUTPUT); // Set lightPin3 as an output
  pinMode(lightPin4, OUTPUT); // Set lightPin1 as an output
  pinMode(lightPin5, OUTPUT); // Set lightPin2 as an output
  pinMode(lightPin6, OUTPUT); // Set lightPin3 as an output
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the sensor value
  int sensorValue1 = analogRead(sensorPin1);
  int sensorValue2 = analogRead(sensorPin2);
  int sensorValue3 = analogRead(sensorPin3); 
  Serial.println(sensorValue); // Output the sensor value for debugging
  
  if (sensorValue > threshold) {
    // If the sensor value is above the threshold, turn on all lights
    digitalWrite(lightPin1, HIGH);
    
    digitalWrite(lightPin2, HIGH);
    digitalWrite(lightPin3, HIGH);
  } else {
    // If the sensor value is below the threshold, turn off all lights
    digitalWrite(lightPin1, LOW);
    digitalWrite(lightPin2, LOW);
    digitalWrite(lightPin3, LOW);
  }
  if (sensorValue1 <threshold) {
    
    digitalWrite(lightPin6, LOW);
  }
  else {
    // If the sensor value is below the threshold, turn off all lights
    digitalWrite(lightPin6, HIGH);
  }
   if (sensorValue2 <threshold) {
    
    digitalWrite(lightPin5, LOW);
  }
  else {
    // If the sensor value is below the threshold, turn off all lights
    digitalWrite(lightPin5, HIGH);
  }
   if (sensorValue3 <threshold) {
    
    digitalWrite(lightPin4, LOW);
  }
  else {
    // If the sensor value is below the threshold, turn off all lights
    digitalWrite(lightPin4, HIGH);
  }



  
  delay(100); // Delay to make readings more manageable
}
