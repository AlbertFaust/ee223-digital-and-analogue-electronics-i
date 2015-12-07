int ldrPin = A0;
int ldrValue = 0;

void setup() {
  pinMode(ldrPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  ldrValue = analogRead(ldrPin);    
  
  Serial.print("LDR:");
  Serial.println(ldrValue);

  delay(1000);          
}
