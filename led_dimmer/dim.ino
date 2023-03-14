int potPin=A0;
int redPin=9;
int del=500;

//this set up allows us to dim an LED using potentiometer

void setup() {

pinMode(potPin, INPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float potVal= analogRead(potPin);
  //we need to convert value read from the potentiometer to a parameter of 255
  float val = (255.0/1023.0)*potVal;
  analogWrite(redPin,val);

}
