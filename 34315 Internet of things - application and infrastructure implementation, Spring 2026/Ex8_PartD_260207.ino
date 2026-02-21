/*
Exercise 8: Analog input
Part D) Add the 7-segment display. Use the potentiometer to count up the values from 0 to 9.

Author: Bruno Duarte | 260207
*/

int potPin = A0;

// order A B F G E D C DP  -> pins 2 to 9
int number[10][8] =
{
  {1,1,1,0,1,1,1,0}, //0
  {0,1,0,0,0,0,1,0}, //1
  {1,1,0,1,1,1,0,0}, //2
  {1,1,0,1,0,1,1,0}, //3
  {0,1,1,1,0,0,1,0}, //4
  {1,0,1,1,0,1,1,0}, //5
  {1,0,1,1,1,1,1,0}, //6
  {1,1,0,0,0,0,1,0}, //7
  {1,1,1,1,1,1,1,0}, //8
  {1,1,1,1,0,1,1,0}  //9
};

void numberShow(int n){
  for(int pin=2; pin<=9; pin++){
    digitalWrite(pin, number[n][pin-2]);
  }
}

void setup(){
  for(int pin=2; pin<=9; pin++){
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop(){

  int sensorValue = analogRead(A0);

  int digit = sensorValue / 102;
  // to fix flickering
  if(digit > 9) digit = 9;

  numberShow(digit);

  delay(10); // delay in between reads for stability
}
