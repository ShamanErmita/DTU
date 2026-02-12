int buttonPin = 8;
int ledPin = 12;
int ledState = LOW;
int lastledState = HIGH;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
}

void loop()
{
  int buttonState = digitalRead(buttonPin);
  c(buttonState);
}

void a(int buttonState){
  digitalWrite(ledPin,!buttonState);
}

void b(int buttonState){
	digitalWrite(ledPin,buttonState);
}

void c(int buttonState){
  if(buttonState == LOW && lastledState == HIGH){
  	ledState = !ledState;
    digitalWrite(ledPin,ledState);
    delay(50);
  }
  lastledState = buttonState;
}