// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  
}

void loop()
{
  if(digitalRead(8)==HIGH){
  	digitalWrite(7,HIGH);
  }
  
  else if(digitalRead(9)==HIGH){
  	digitalWrite(6,HIGH);
  }
  
  else if(digitalRead(10)==HIGH){
  	digitalWrite(5,HIGH);
  }
  
  else if(digitalRead(11)==HIGH){
  	digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
  }
  
  else{
  	digitalWrite(7,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
}