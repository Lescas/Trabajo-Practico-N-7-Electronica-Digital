#include <Servo.h>
Servo servo;
#define A 2
#define B 3
#define POT A0
int valor=0;

void setup(){
  pinMode(A,INPUT);
  pinMode(B,INPUT);
  servo.attach(10);
}

void loop(){
  int acd=analogRead(A0);
  int angulo=map(acd, 0, 1023, 0, 180);
  servo.write(angulo);
  Serial.print(acd);
  Serial.println(angulo);
  boolean a=digitalRead(A);
  if(a==HIGH){
    valor=angulo;
    }
  boolean b=digitalRead(B);
  if(b==HIGH){
    servo.write(valor);
    delay(5000);
    }
  }
