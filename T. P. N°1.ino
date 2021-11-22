#include <Servo.h>
Servo servomotor;
int a;
int b;
int c;
int d;
int e;
void setup() {
  Serial.begin(9600);
  servomotor.attach(10);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  a=digitalRead(7);
  b=digitalRead(6);
  c=digitalRead(4);
  d=digitalRead(3);
  e=digitalRead(2);
 
  if (a == HIGH){
    servomotor.write(0);
  }
  
  if (b == HIGH){
    servomotor.write(45);
  }
  
  if (c == HIGH){
    servomotor.write(90);
  }
  
  if (d == HIGH){
    servomotor.write(135);
  }
  
  if (e == HIGH){
    servomotor.write(180);
  }
}
