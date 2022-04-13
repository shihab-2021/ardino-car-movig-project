int m1 = 9;
int m2 = 3;
  
int in1 =7;
int in2 =6; 
int in3=5;
int in4 =4;
char sms;
int spd =150;


void setup() {
  Serial .begin(9600);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop()
{

if(Serial.available() !=0)
{
  sms=Serial.read();
}
if (sms == '1')
{
  spd = 40;
} 

if (sms == '2')
{
  spd = 60;
}
if (sms == '3')
{
  spd = 80;
}
if (sms == '4')
{
  spd = 100;
}
if (sms == '5')
{
  spd = 120;
}
if (sms == '6')
{
  spd = 140;
}
if (sms == '7')
{
  spd = 160;
}
if (sms == '8')
{
  spd = 200;
}
if (sms == '9')
{
  spd =255 ;
}
analogWrite(m1,spd);
analogWrite(m2,spd);

if(sms == 'F')
{
  //front
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
delay(5000);

//back
digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
delay(5000);

//right

digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(5000);

//left
digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in4,LOW);
delay(5000);

//stop
digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(5000);


}}
