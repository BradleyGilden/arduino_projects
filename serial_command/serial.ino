int del=750;
int redPin= 8;
int BlinkNum;
String msg = "How many blinks do you want: ";

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){ //hangs program until we enter data

  }
  
  BlinkNum= Serial.parseInt();

  for(int i=0;i<BlinkNum;i++ ){
    digitalWrite(redPin,HIGH);
    delay(del);
    digitalWrite(redPin,LOW);
    delay(del);
  }

}
