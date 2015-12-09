void setup()  { 

  for(int i=2; i<=8; i++){
     pinMode(i, OUTPUT); 
  }
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

  for(int i=0; i<=9; i++){
    display(i);
    delay(1000);
  }
  
}
