int latchPin = 8;int clockPin = 12;
int dataPin = 11;int a,i;
void setup(){ pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);  pinMode(dataPin, OUTPUT);
void loop(){
for (i=0; i<4; i++){  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin,  MSBFIRST, 0b10101010);
  digitalWrite(latchPin, HIGH);  delay(500);}
 a+0b00000001}};