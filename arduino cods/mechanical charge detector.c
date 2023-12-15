#include <Servo.h>
Servo serv;
int serva = 8;
int kond = A0;
int val=0, ugol=0;

void setup(){
  serv.attach(serva);}

void loop(){
  val = analogRead(kond);
  ugol = map (val,0,1024,0,180);
  serv.write(ugol);}