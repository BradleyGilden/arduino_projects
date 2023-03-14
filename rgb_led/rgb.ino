int redPin=3;
int greenPin=5;
int bluePin=6;

int redSlide=A2;
int blueSlide=A0;
int greenSlide=A1;
String myColour;
String msg = "What colour do you want? ";

//this controls rgb LED with slide potentiometers
//You can uncomment the commented lines of code and vise versa to control..
//rgb colour by serial input
void setup() {
  // put your setup code here, to run once:


  // Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(redSlide, INPUT);
  pinMode(greenSlide, INPUT);
  pinMode(blueSlide, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Serial.println(msg);

  // while(Serial.available()==0){
  // }
  
  // myColour = Serial.readString();
  // if(myColour=="blue"){
  //   digitalWrite(redPin, HIGH);
  //   digitalWrite(greenPin, LOW);
  //   digitalWrite(bluePin, LOW);
  // }
  //   if(myColour=="green"){
  //   digitalWrite(redPin, LOW);
  //   digitalWrite(greenPin, HIGH);
  //   digitalWrite(bluePin, LOW);
  // }
  //     if(myColour=="red"){
  //   digitalWrite(redPin, LOW);
  //   digitalWrite(greenPin, LOW);
  //   digitalWrite(bluePin, HIGH);
  // }
  //     if(myColour=="off"){
  //   digitalWrite(redPin, LOW);
  //   digitalWrite(greenPin, LOW);
  //   digitalWrite(bluePin, LOW);
    
  // }

  float red = analogRead(redSlide);
  float green = analogRead(greenSlide);
  float blue = analogRead(blueSlide);

  analogWrite(redPin, (255.0/1023.0)*red);
  analogWrite(greenPin, (255.0/1023.0)*green);
  analogWrite(bluePin, (255.0/1023.0)*blue);

}
