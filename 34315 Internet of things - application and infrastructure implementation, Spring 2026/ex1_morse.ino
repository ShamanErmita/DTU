int led = 12;
int mode = led;
//int mode = LED_BUILTIN;

void setup() {
  pinMode(mode, OUTPUT);
  // pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  BRUNO();
}

void BRUNO(){
  //B
  digitalWrite(mode, HIGH);
  delay(3000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(5000);

  //R
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(3000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(5000);

  //U
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(3000);
  digitalWrite(mode, LOW);
  delay(5000);

  //N
  digitalWrite(mode, HIGH);
  delay(3000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(1000);
  digitalWrite(mode, LOW);
  delay(5000);

  //O
  digitalWrite(mode, HIGH);
  delay(3000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(3000);
  digitalWrite(mode, LOW);
  delay(1000);
  digitalWrite(mode, HIGH);
  delay(3000);
  digitalWrite(mode, LOW);
  delay(5000);
}

void SOS(){
  for(int i = 0; i < 3; i++){
    digitalWrite(mode, HIGH);
    delay(1000);
    digitalWrite(mode, LOW);
    delay(1000);
  }
  delay(3000);
  for(int i = 0; i < 3; i++){
    digitalWrite(mode, HIGH);
    delay(3000);
    digitalWrite(mode, LOW);
    delay(1000);
  }
  delay(3000);
  for(int i = 0; i < 3; i++){
    digitalWrite(mode, HIGH);
    delay(1000);
    digitalWrite(mode, LOW);
    delay(1000);
  }
  delay(5000);
}
