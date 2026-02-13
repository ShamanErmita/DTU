int ledred = 10;
int ledgreen = 9;
int ledblue = 8;
char incomingChar;
int value1,value2,value3;

void setup() {
  Serial.begin(9600);
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  pinMode(ledblue, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    value1=Serial.parseInt();
  	value2=Serial.parseInt();
    value3=Serial.parseInt();
    digitalWrite(ledred,value1);
    digitalWrite(ledgreen,value2);
    digitalWrite(ledblue,value3);
  }
  
}