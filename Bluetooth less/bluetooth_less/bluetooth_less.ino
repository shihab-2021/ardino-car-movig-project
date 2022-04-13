int m1 = 9;
 int m2 = 3;
  
  int in1 =7;
   int in2 =6; 
   int in3=5;
    int in4 =4;
   

void setup() {
 
  pinMode(m1,OUTPUT);
    pinMode(m2,OUTPUT);
       pinMode(in1,OUTPUT);
       pinMode(in2,OUTPUT);
       pinMode(in3,OUTPUT);
       pinMode(in4,OUTPUT);
  

}

void loop()
{
  digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
delay(5000);

digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
delay(5000);



digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(5000);


digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in4,LOW);
delay(5000);


digitalWrite(m1,HIGH);
digitalWrite(m2,HIGH);

digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(5000);


}
