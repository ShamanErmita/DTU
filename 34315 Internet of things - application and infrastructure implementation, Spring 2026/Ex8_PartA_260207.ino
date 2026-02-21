/*
Exercise 8: Analog input
Part A) Open program ”AnalogReadSerial” and make it do the following:
– Read the input voltage from potentiometer
– Write the value to serial monitor with 3 decimals

Author: Bruno Duarte | 260207
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0
  int sensorValue = analogRead(A0);
  
  // convert sensorValue into voltageValue (0-5V)
  float voltageValue = sensorValue * (5.0/1023.0);

  // print out the voltage value with 3 decimals
  Serial.println(voltageValue,3);
  delay(10);  // delay in between reads for stability
}
