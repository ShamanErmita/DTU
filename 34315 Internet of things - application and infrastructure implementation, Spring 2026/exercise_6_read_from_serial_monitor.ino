int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 8;
int led5 = 7;
char incomingChar;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    incomingChar = Serial.read();
    
    switch(incomingChar){
    	case 'a':
      		digitalWrite(led1,HIGH);
      		break;
      	case 'b':
      		digitalWrite(led2,HIGH);
      		break;
      	case 'c':
      		digitalWrite(led3,HIGH);
      		break;
      	case 'd':
      		digitalWrite(led4,HIGH);
      		break;
     	case 'e':
      		digitalWrite(led5,HIGH);
      		break;
      	default:
      		digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            digitalWrite(led3, LOW);
            digitalWrite(led4, LOW);
            digitalWrite(led5, LOW);
      		break;
    }
  }
}