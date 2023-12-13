#include <Stepper.h>
#define Button 7
const int stepsPerRevolution = 4096;
int termo = A0, Step, Stp, i;
int val, val2, state = 0, Step0=0;
float voltage;
float voltage2;
Stepper
   myStepper(stepsPerRevolution,
                          8,9,10,11);

void setup() {
  myStepper.setSpeed(5);}

void loop(){
  val2= digitalRead(Button);
  if (val2 == HIGH){
    if (state ==0){
      state = 1;
      val = analogRead(termo);
      voltage = (val*4.7/1023);
      Step0=0;
      digitalWrite(13,HIGH);}
     else {
      digitalWrite(13,LOW);
      myStepper.step(-Step0);
      state = 0;}
     delay(500);}
    if (state == 1){
      val = analogRead(termo);
      voltage2 = (val*4.7/1023);
      Stp = (voltage2-voltage)*100;
      Step = Stp*512 - Step0;
      myStepper.step(Step);
      Step0 = Stp*512;
      delay(300);}}