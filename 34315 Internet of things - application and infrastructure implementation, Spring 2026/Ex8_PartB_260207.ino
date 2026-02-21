/*
Exercise 8: Analog input
Part B) Add an single-color LED. Change light intensity depending on turning the potentiometer

Author: Bruno Duarte | 260207
*/

int potPin = A0;
int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the input on analog pin 0
  int sensorValue = analogRead(potPin);
  
  // convert sensorValue into PWM range (0-255)
  int brightness = sensorValue / 4;
	
  // set LED brightness
  analogWrite(ledPin,brightness);
  
  // print PWM value
  Serial.println(brightness);
  
  delay(10);  // delay in between reads for stability
}
