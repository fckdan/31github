#define Motor 9
#define BUTTON 5
int val=0, state=0, i=0, num;

void setup(){
  pinMode(Motor, OUTPUT);
  pinMode(BUTTON, INPUT);
  randomSeed(analogRead(A5));}

void loop(){
val = digitalRead(BUTTON);
if (val == HIGH){
  for (i=100;i <= 225;i++){
    analogWrite(Motor, i);
    delay(30);}
  num = random(10,30)*100;
  delay(num);
  for (i = 255; i >= 0; i--){
    analogWrite(Motor, i);
    delay(10); }}}