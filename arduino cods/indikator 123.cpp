#define button 13
int DigPin[4] = {2,3,4,5};
int Num[10]=
{0b01110111,0b00010100,
0b01011011,0b01011110,
0b00111100,0b01101110,
0b01101111,0b01010100,
0b01111111,0b01111110};
int Razryad [4];
int i, j, dot, val, state;
double number = 0, time;
int latchPin = 8;
int clockPin = 12;
int dataPin = 11;

void setup(){
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  for (i = 0; i < 4; ++i){
    pinMode(digPin[i], OUTPUT);}}

void loop(){
  val = digitalRead(button);
  if (val == HIGH){
    delay(200);state=1-state;
    if (number == 0){
      time = millis();}}
   while (state == 1){
    number=(millis()
                  -time)/1000;
    Indikator(number,1);
    val = digitalRead(button);
    if (val == HIGH){
      state = 1-state;
      delay(200);}}
    Indikator(number,1);}

void Indikator(double chislo,
                    int Razr){
  chislo = chislo*pow(10,Razr);
   if (chislo >= 10000){
    chislo=9999;}
   Razryad[3] = chislo/1000;
   Razryad[2] = (chislo-
           Razryad[3]*1000-
           Razryad[2]*100)/10;
   Razryad[0] = (chislo-
           Razryad[3]*1000-
            Razryad[2]*100-
             Razryad[1]*10);
for (j=0; j < 4; j++){
  if (Razr == j){
   dot = 0b10000000;}
   else {dot = 0;}
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin,
       MSBFIRST,
          Num[Razryad[j]] | dot);
  digitalWrite(latchPin, HIGH);
  digitalWrite(DigPin[j], HIGH);
  delay(1);
  digitalWrite(DigPin[j], LOW);
 }}