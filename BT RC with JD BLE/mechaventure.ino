int cw_r = 7;
int ccw_r = 8;
int pwm_r = 5;
int cw_l = 4;
int ccw_l = 9;
int pwm_l = 6;


int ir_r = A0;
int ir_mr = A1;
int ir_m = A2;
int ir_ml = A3;
int ir_l = A4;

int r;
int mr;
int m;
int ml;
int l;

int black = 1;
int white = 0;
void setup() {
  pinMode(cw_r , OUTPUT);
  pinMode(ccw_r , OUTPUT);
  pinMode(pwm_r , OUTPUT);
  pinMode(cw_l , OUTPUT);
  pinMode(ccw_l , OUTPUT);
  pinMode(pwm_l , OUTPUT);
  pinMode(ir_r , INPUT);
  pinMode(ir_mr , INPUT);
  pinMode(ir_m , INPUT);
  pinMode(ir_ml, INPUT);
  pinMode(ir_l, INPUT);
  Serial.begin(9600);

}

void loop() {
  read_ir();
  
}

void read_ir() {
  r = digitalRead(ir_r);
  mr = digitalRead(ir_mr);
  m = digitalRead(ir_m);
  ml = digitalRead(ir_ml);
  l = digitalRead(ir_l);

  Serial.print("r: ");
  Serial.println(r);
  Serial.print("mr: ");
  Serial.println(mr);
  Serial.print("m: ");
  Serial.println(m);
  Serial.print("ml: ");
  Serial.println(ml);
  Serial.print("l: ");
  Serial.println(l);

}

void forward () {
  analogWrite(pwm_r, 70);
  digitalWrite(cw_r, 1);
  digitalWrite (ccw_r, 0);
  analogWrite(pwm_l, 70);
  digitalWrite(cw_l, 1);
  digitalWrite (ccw_l, 0);
}

void reverse() {
  analogWrite(pwm_r, 50);
  digitalWrite(cw_r, 0);
  digitalWrite (ccw_r, 1);
  analogWrite(pwm_l, 50);
  digitalWrite(cw_l, 0);
  digitalWrite (ccw_l, 1);
}

void right() {
  analogWrite(pwm_r, 0);
  digitalWrite(cw_r, 0);
  digitalWrite (ccw_r, 1);
  analogWrite(pwm_l, 70);
  digitalWrite(cw_l, 1);
  digitalWrite (ccw_l, 0);

}

void left() {
  analogWrite(pwm_r, 70);
  digitalWrite(cw_r, 1);
  digitalWrite (ccw_r, 0);
  analogWrite(pwm_l, 0);
  digitalWrite(cw_l, 0);
  digitalWrite (ccw_l, 1);

}

void stoppls() {
  analogWrite(pwm_r, 50);
  digitalWrite(cw_r, 0);
  digitalWrite (ccw_r, 0);
  analogWrite(pwm_l, 50);
  digitalWrite(cw_l, 0);
  digitalWrite (ccw_l, 0);

}
void jam() {
  analogWrite(pwm_r, 255);
  digitalWrite(cw_r, 1);
  digitalWrite (ccw_r, 1);
  analogWrite(pwm_l, 255);
  digitalWrite(cw_l, 1);
  digitalWrite (ccw_l, 1);

}

//forward();
//delay(2000);
//reverse();
//delay(2000);
//right();
//delay(2000);
//left();
//delay(2000);
//forward();
//delay(2000);
//stoppls();
//delay(2000);
//forward();
//delay(2000);
//jam();
//delay(2000);
