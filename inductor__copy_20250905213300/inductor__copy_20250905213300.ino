// ESP32 Back EMF Detector

const int emfPin = 35;  // Analog input pin

void setup() {
  Serial.begin(115200);   // Start Serial Monitor
  delay(1000);            // Small delay for stability
  Serial.println("ESP32 Back EMF Detector Started");
}

void loop() {
  int emfValue = analogRead(emfPin);   // Read ADC value (0 - 4095)

  // Used a threshold to filter noise. 
  if (emfValue > 100) {
    Serial.print("Back EMF detected! Value: ");
    Serial.println(emfValue);
  } else {
    // Optional: print nothing if below threshold, or uncomment to see all values
    // Serial.println("No significant spike");
  }

  delay(50);  // Short delay for responsiveness
}



