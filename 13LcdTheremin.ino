#include <LiquidCrystal.h>
int ldrPin = A0;
int ldrValue = 0;
int speakerPin = 9;
int val = 0;
LiquidCrystal lcd(11, 12, 1, 2, 3, 4, 5, 6, 7, 8);

void setup()  { 
  lcd.begin(8, 2);
  lcd.print("Theremin");
  pinMode(ldrPin, INPUT);
  pinMode(speakerPin, OUTPUT);
  for(int i=2; i<=8; i++){
     pinMode(i, OUTPUT); 
  }
  delay(3000);
} 

void display(int x){
   switch(x){
     case 0: displaySegment(1,1,1,1,1,1,0);
       break;
     case 1: displaySegment(0,1,1,0,0,0,0);
       break;
     case 2: displaySegment(1,1,0,1,1,0,1);
       break;
     case 3: displaySegment(1,1,1,1,0,0,1);
       break;
     case 4: displaySegment(0,1,1,0,0,1,1);
       break;
     case 5: displaySegment(1,0,1,1,0,1,1);
       break;
     case 6: displaySegment(0,0,1,1,1,1,1);
       break;
     case 7: displaySegment(1,1,1,0,0,0,0);
       break;
     case 8: displaySegment(1,1,1,1,1,1,1);
       break;
     case 9: displaySegment(1,1,1,1,0,1,1);
       break;
   }
} 

void displaySegment(int a, int b, int c, int d, int e, int f, int g){
  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
  digitalWrite(6,e);
  digitalWrite(7,f);
  digitalWrite(8,g);
}

void loop()  { 

  digialWrite(speakerPin, HIGH);
  delayMicroseconds(val);
  val = analogRead(ldrPin);
  val = val / 2;
  digitalWrite(speakerPin, LOW);
  delayMicroseconds(val);

  ldrValue = analogRead(ldrPin);
  display(ldrValue/100);

  lcd.setCursor(0,1);
  lcd.print("freq:");
  lcd.print(ldrValue / 4);
  
}
