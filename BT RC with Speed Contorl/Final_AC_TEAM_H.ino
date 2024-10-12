#include<SoftwareSerial.h>
SoftwareSerial Bluetooth(7,8);
int ld1=4;
int ld2=5;
int rd1=3;
int rd2=2;
int tx= 8;
int rx= 7;
int en= 6;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(ld1,OUTPUT);
pinMode(ld2,OUTPUT);
pinMode(rd1,OUTPUT);
pinMode(rd2,OUTPUT);
pinMode(en,OUTPUT);

Bluetooth.begin(9600);
}


void loop() {
//  put your main code here, to run repeatedly:

    char inChar = (char)Bluetooth.read();
    switch(inChar)
    {
    case 'F':
     digitalWrite(ld1,HIGH);
    digitalWrite(ld2,LOW);
    digitalWrite(rd1,HIGH);
    digitalWrite(rd2,LOW);
    break;
 
    case 'B':
     digitalWrite(ld1,LOW);
    digitalWrite(ld2,HIGH);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,HIGH);
    break;
 
    case 'R':
    digitalWrite(ld1,HIGH);
    digitalWrite(ld2,LOW);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,HIGH);
    break;
   
    case 'L':
    digitalWrite(ld1,LOW);
    digitalWrite(ld2,HIGH);
    digitalWrite(rd1,HIGH);
    digitalWrite(rd2,LOW);
    
    break;
 
    case 'S':
    digitalWrite(ld1,LOW);
    digitalWrite(ld2,LOW);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,LOW);
    break;

    case 'I':
    digitalWrite(ld2,LOW);
    digitalWrite(ld1,HIGH);
    digitalWrite(rd1,HIGH);
    digitalWrite(rd2,HIGH);
    break;

     case 'G':
    digitalWrite(ld2,HIGH);
    digitalWrite(ld1,HIGH);
    digitalWrite(rd1,HIGH);
    digitalWrite(rd2,LOW);
    break;

     case 'H':
     digitalWrite(ld1,LOW);
    digitalWrite(ld2,LOW);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,HIGH);
    break;

     case 'J':
     digitalWrite(ld1,LOW);
    digitalWrite(ld2,HIGH);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,LOW);
    break;

    case '1':
    analogWrite(en,100);
      break;

        case '2':
    analogWrite(en,120);
      break;
        case '3':
    analogWrite(en,140);
      break;
        case '4':
    analogWrite(en,160);
      break;
        case '5':
    analogWrite(en,180);
      break;
        case '6':
    analogWrite(en,200);
      break;
        case '7':
    analogWrite(en,220);
      break;
        case '8':
    analogWrite(en,230);
      break;
        case '9':
    analogWrite(en,240);
      break;
        case 'q':
    analogWrite(en,255);
      break;
    }
    

}
