//f 前 b hou,l zuo, r you ,s ting;
void setup()
{
  pinmode(5,OUTPUT);
  pinmode(6,OUTPUT);
  pinmode(9,OUTPUT);
  pinmode(10,OUTPUT);
  Serial.begin(9600);
}

int incoome=0;Serial
void loop()
{
  
  
  switch(income)
  {
    case(f);forward();break;
    case(b);backward();break;
    case(l);left();break;
    case(r);right();break;
    case(S);stop();break;
    default break;
  }
}
void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void backward(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}
void left(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
void right(){
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void stop(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}