/*
Exercise 8: Analog input
Part C) Use multicolour-diode to change colors of rainbow (translate voltage to number within interval).
Use the voltage to make the RGB LED light in the colors of the rainbow.
When applying 0V the RGB LED should be violet/purple and when applying 5V on the A0 pin it should be red.
When tuning the potentiometer, the RGB LED should slowly fade between the different colors

Author: Bruno Duarte | 260207
*/

int potPin = A0;
int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // read the input on analog pin 0
  int sensorValue = analogRead(potPin);
  
  // map sensorValue into rgb values (256 values * 6 combinations = 1536 values)
  int rgbValue = map(sensorValue,0,1023,0,1535);
	
  int red,green,blue;
  
  if (rgbValue < 256) {
    red = 255 - rgbValue;
    green = 0;
    blue = 255;
    Serial.println("Violet to Indigo");
  }
  else if (rgbValue < 512) {
    red = 0;
    green = rgbValue - 256;
    blue = 255;
    Serial.println("Indigo to Blue");
  }
  else if (rgbValue < 768) {
    red = 0;
    green = 255;
    blue = 255 - (rgbValue - 512);
    Serial.println("Blue to Green");
  }
  else if (rgbValue < 1024) {
    red = rgbValue - 768;
    green = 255;
    blue = 0;
    Serial.println("Green to Yellow");
  }
  else if (rgbValue < 1280) {
    red = 255;
    green = 255 - (rgbValue - 1024);
    blue = 0;
    Serial.println("Yellow to Orange");
  }
  else {
    red = 255;
    blue = 0;
    green = 0;
    Serial.println("Orange to Red");
  }
  
  // set LED RGB values
  analogWrite(redPin,red);
  analogWrite(greenPin,green);
  analogWrite(bluePin,blue);
    
  delay(10);  // delay in between reads for stability
}