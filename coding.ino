int tr = 1 , ec = A0 , x ;
int tr1 = 3 , ec1 = A1 , x1 ;
int tr2 = 5 , ec2 = A2 , x2 ;
int tr3 = 6 , ec3 = A3 , x3 ;
int tr4 = 8 , ec4 = A4 , x4 ;
int tr5 = 9 , ec5  = A5 , x5 ;
int led = 2;
int led1 = 4;
int led2 = 7 ;
void setup(){
  pinMode(tr,OUTPUT);
  pinMode(ec,INPUT);
  pinMode(tr1,OUTPUT);
  pinMode(ec1,INPUT);
  pinMode(tr2,OUTPUT);
  pinMode(ec2,INPUT);
  pinMode(tr3,OUTPUT);
  pinMode(ec3,INPUT);
  pinMode(tr4,OUTPUT);
  pinMode(ec4,INPUT);
  pinMode(tr5,OUTPUT);
  pinMode(ec5,INPUT);
  Serial.begin(9600);
}
void ultra_sonic_one(){
  digitalWrite(tr,LOW);
  delayMicroseconds(1);
  digitalWrite(tr,HIGH);
  delayMicroseconds(1);
  digitalWrite(tr,LOW);
  x=pulseIn(ec,HIGH);
  if(x <= 1500)
  {
    digitalWrite(led,HIGH);
  }
}

void ultra_sonic_two(){
  digitalWrite(tr1,LOW);
  delayMicroseconds(1);
  digitalWrite(tr1,HIGH);
  delayMicroseconds(1);
  digitalWrite(tr1,LOW);
  x1=pulseIn(ec1,HIGH);
  if(x1 <= 1500)
  {
    digitalWrite(led1,HIGH);
  }
}
void ultra_sonic_three(){
  digitalWrite(tr2,LOW);
  delayMicroseconds(1);
  digitalWrite(tr2,HIGH);
  delayMicroseconds(1);
  digitalWrite(tr2,LOW);
  x2=pulseIn(ec2,HIGH);
  if(x2 <= 1500)
  {
    digitalWrite(led,LOW);
  }

}
void ultra_sonic_four(){
  digitalWrite(tr3,LOW);
  delayMicroseconds(1);
  digitalWrite(tr3,HIGH);
  delayMicroseconds(1);
  digitalWrite(tr3,LOW);
  x3=pulseIn(ec3,HIGH);
  if(x3 <= 1500)
  {

    digitalWrite(led2,HIGH);
  }

}
void ultra_sonic_five(){
  digitalWrite(tr4,LOW);
  delayMicroseconds(1);
  digitalWrite(tr4,HIGH);
  delayMicroseconds(1);
  digitalWrite(tr4,LOW);
  x4=pulseIn(ec4,HIGH);
  if(x4 <= 1500)
  {

    digitalWrite(led1,LOW);
  }

}
void ultra_sonic_six(){
  digitalWrite(tr5,LOW);
  delayMicroseconds(1);
  digitalWrite(tr5,HIGH);
  delayMicroseconds(1);
  digitalWrite(tr5,LOW);
  x5=pulseIn(ec5,HIGH);
  Serial.println(x);
  if(x5 <= 1500)
  {

    digitalWrite(led2,LOW);
  }

}

void loop(){
  ultra_sonic_one();
  ultra_sonic_two();
  ultra_sonic_three();
  ultra_sonic_four();
  ultra_sonic_five();
  ultra_sonic_six();
}