//int ls=3;
int ld1=5;
int ld2=6;
//int rs=11;
int rd1=10;
int rd2=9;
char t;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
//pinMode(ls,OUTPUT);
pinMode(ld1,OUTPUT);
pinMode(ld2,OUTPUT);
//pinMode(rs,OUTPUT);
pinMode(rd1,OUTPUT);
pinMode(rd2,OUTPUT);

//digitalWrite(ls,150);
//digitalWrite(rs,150);

}


void loop() {
//  put your main code here, to run repeatedly:
while(Serial.available()>0){
     t=Serial.read();
      Serial.println(t);
    switch(t)
    
    {
    case 'F':
    digitalWrite(rd1,HIGH);
    digitalWrite(rd2,LOW);
    digitalWrite(ld1,LOW);
    digitalWrite(ld2,HIGH);
    break;
  
    case 'B':
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,HIGH);
    digitalWrite(ld1,HIGH);
    digitalWrite(ld2,LOW);
    break;
  
    case 'R':
        digitalWrite(rd1,LOW);
        digitalWrite(rd2,HIGH);
        digitalWrite(ld1,LOW);
        digitalWrite(ld2,HIGH);
    break;
    
    case 'L':
        digitalWrite(rd1,HIGH);
        digitalWrite(rd2,LOW);
        digitalWrite(ld1,HIGH);
        digitalWrite(ld2,LOW);

    break;
  
case 'S':
    digitalWrite(ld1,LOW);
    digitalWrite(ld2,LOW);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,LOW);
    break;
    }
//  }
}
}

/*
LEFT    
RIGHT  
BACKWARD
  
  FORWARD
     
    */



    