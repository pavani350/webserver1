#define led1 D2
#define led2 D3
#define Switch1 D4
#define Switch2 D5

void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(Switch1,INPUT);
pinMode(Switch2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean state1,state2;
state1=digitalRead(Switch1);
state2=digitalRead(Switch2);
if(state1==HIGH)
{
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  //boolean state;
}
if(state2==HIGH)
{
  digitalWrite(led1,1);
  digitalWrite(led2,0);
}
//state=digitalRead(Switch1);
//digitalWrite(led2,state);
//delay(100);

//state=digitalRead(Switch2);
//digitalWrite(led1,state);
//delay(100);
}
