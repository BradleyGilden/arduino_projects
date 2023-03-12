int del=700;


void PinSetup(){

  for(int i=2; i<6; i++)
pinMode(i, OUTPUT);
  
}


void setup() {
  
 PinSetup();
}

// the loop function runs over and over again forever
void loop() {

  BinaryCount(); 

}

void All_Blink(){

for(int i=2; i<6;i++){

  digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
   
}
 delay(200);    

 for(int i=2; i<6;i++){

  digitalWrite(i, LOW);// turn the LED on (HIGH is the voltage level)
   
}                   // wait for a second
      // turn the LED off by making the voltage LOW
  delay(200);

}

void BinaryCount(){

digitalWrite(2, LOW); 
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(del+300);

digitalWrite(2, HIGH); 
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(del);

digitalWrite(2, LOW); 
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(del);

digitalWrite(2, HIGH); 
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

delay(del);

digitalWrite(2, LOW); 
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);

delay(del);

digitalWrite(2, HIGH); 
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);

delay(del);

digitalWrite(2, LOW); 
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);

delay(del);

digitalWrite(2, HIGH); 
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);

delay(del);

digitalWrite(2, LOW); 
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);

delay(del);

digitalWrite(2, HIGH); 
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);

delay(del);

digitalWrite(2, LOW); 
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);

delay(del);

digitalWrite(2, HIGH); 
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);

delay(del);

digitalWrite(2, LOW); 
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);

delay(del);

digitalWrite(2, HIGH); 
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);

delay(del);

digitalWrite(2, LOW); 
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);

delay(del);

digitalWrite(2, HIGH); 
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);

delay(del);

}
