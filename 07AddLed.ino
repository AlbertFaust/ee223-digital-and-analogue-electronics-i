int ldrPin = A0;
int ldrValue = 0;
int ledPinRed = 11;
int ledPinGreen = 12;

void setup()  { 
  pinMode(ldrPin, INPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
} 

void loop()  { 
  ldrValue = analogRead(ldrPin);
  analogWrite(ledPinGreen, (ldrValue/4); 
  analogWrite(ledPinRed, ((1023-ldrValue)/4));
  delay(1000)
}
