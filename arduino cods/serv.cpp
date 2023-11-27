#include<Servo.h> 
Servo serv1; 
int s1, angL1; 
 
void setup() 
{ 
  serv1.attach(11); 
} 
 
void loop() 
{ 
  s1 = analogRead(A0); 
  angL1 = map(s1,0,1023,5,175); 
  serv1.write(angL1); 
}