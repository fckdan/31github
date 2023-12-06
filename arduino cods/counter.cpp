int latchPin = 8;
int clockPin = 12;
int dataPin = 11;
int a,i;
void setup(){ 
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);  
  pinMode(dataPin, OUTPUT);}
void loop(){
for (i=0; i<4; i++){  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin,  
                  MSBFIRST, 0b10101010);
  digitalWrite(latchPin, HIGH);  
  delay(500);}
 a= 0b00000001;
for (i=0; i<8; i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin,
                  MSBFIRST, a);
  digitalWrite(latchPin, HIGH);
  delay(250);
  a = a << 1;}
 for (i=0; i<8; i++){
  a = a >> 1;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin,
                  MSBFIRST, a);
  digitalWrite(latchPin, HIGH);
  delay(250);}}