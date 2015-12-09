int ldrPin = A0;
int ldrValue = 0;
int ledPin = 11;

void setup()  { 
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
} 

void loop()  { 
  ldrValue = analogRead(ldrPin); 
  analogWrite(ledPin, ((1023-ldrValue)/4));
  delay(1000)
}
