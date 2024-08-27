const int Pin1=4,Pin2=5,Pin3=6,Pin4=7;
const int switchPin1=0,switchPin2=1,switchPin3=2,switchPin4=3;
int switchstate1 =0 ,switchstate2 =0,switchstate3 =0 ,switchstate4 =0  ;
void setup()
{
  

  pinMode(Pin1,OUTPUT);
  pinMode(Pin2,OUTPUT);
  pinMode(Pin3,OUTPUT);
  pinMode(Pin4,OUTPUT);
  pinMode(switchPin1,INPUT);
  pinMode(switchPin2,INPUT);
  pinMode(switchPin3,INPUT);
  pinMode(switchPin4,INPUT);
  Serial.begin(9600);
}
void loop()
{
  switchstate1 = digitalRead(switchPin1);
  switchstate2 = digitalRead(switchPin2);
  switchstate3 = digitalRead(switchPin3);
  switchstate4 = digitalRead(switchPin4);
  if (switchstate1 == HIGH)
  
{
  Serial.println('Forward');
  digitalWrite(Pin1,HIGH);
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,LOW);
}
 if(switchstate2 == HIGH)

{
  Serial.println('Reverse');
  digitalWrite(Pin1,LOW);
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,HIGH);
}
 if(switchstate3 == HIGH)
{
  Serial.println('Right');
  digitalWrite(Pin1,HIGH);
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,LOW);
}
 if(switchstate4 == HIGH)
{
  Serial.println('Left');
  digitalWrite(Pin1,LOW);
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,LOW);
}
else
{
  Serial.println('Stop');
  digitalWrite(Pin1,LOW);
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,LOW);
}
}
