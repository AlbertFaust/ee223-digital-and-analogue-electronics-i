int ledPin = 11;

void setup()  { 
  pinMode(ledPin, OUTPUT);
} 

void loop()  { 
  for(int i=0; i<256; i+=5) { 
    analogWrite(ledPin, i);      
    delay(50);                         
  } 
  
  for(int i=255; i>=0; i-=5) { 
    analogWrite(ledPin, i);
    delay(50);      
  } 
}
