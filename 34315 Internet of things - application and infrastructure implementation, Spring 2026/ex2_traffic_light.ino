int RED_LED = 9;
int YELLOW_LED = 8;
int GREEN_LED = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(RED_LED,OUTPUT); 
  pinMode(YELLOW_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
}

void loop()
{
 digitalWrite(GREEN_LED,0);
 digitalWrite(RED_LED,1);
 Serial.println("RED");
 delay(1000);
 digitalWrite(YELLOW_LED,1);
 Serial.println("RED & YELLOW");
 delay(1000);
 digitalWrite(RED_LED,0);
 digitalWrite(YELLOW_LED,0);
 digitalWrite(GREEN_LED,1);
 Serial.println("GREEN");
 delay(3000);
 }