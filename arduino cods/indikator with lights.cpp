#define buzer A0#define button1 A1
#define button2 A2int SegPin[7] =
       {6,7,8,9,10,12,13};int DigPin[4] = {2,3,4,5};
int Dot = 11;
boolean Num[10][7] = {{1,1,1,0,1,1,1},
 {0,0,1,0,1,0,0}, {1,0,1,1,0,1,1},
 {0,1,1,1,1,1,0},
 {1,1,0,1,1,1,0}, {1,1,0,1,1,1,1},
 {1,0,1,0,1,0,0}, {1,1,1,1,1,1,1},
 {1,1,1,1,1,1,0}};int Razryad [4];
int i,j,sbros=1,val,state=0;double number, time;
void setup(){
  for (i = 0; i < 7; ++i){  pinMode(SegPin[i],OUTPUT);}
  for (i = 0; i < 4; ++i){  pinMode(DigPin[i],OUTPUT);}
  pinMode(Dot, OUTPUT);  pinMode(buzer, OUTPUT);}
void loop(){
val=digitalRead(button1);if (val == HIGH){
  delay(200);  tone(buzer, 300,200);
  state = 1-state;  if (sbros ==1){
    sbros =0;    time = millis();}}
while (state == 1){  number=(millis()-time)
                   /1000.0;  Indikator(number,1);
  val=digitalRead(button1);  if (val == HIGH){
   state = 1-state;   delay(300);tone(buzer, 3000,200);}}
Indikator(number,1);
val = digitalRead(button2);if (val == HIGH){
  sbros=1;  number = 0.0;
  tone(buzer, 1000,200); }}
void Indikator(double chislo,                     int Razr){
 chislo = chislo * pow(10,Razr); if (chislo>=10000){chislo=9999;}
 Razryad[3] = chislo/1000; Razryad[2] = (chislo-
            Razryad[3]*1000)/100;
 Razryad[1] = (chislo-           Razryad[3]*1000-
               Razryad[2]*100)/10;
 Razryad[0] = (chislo-          Razryad[3]*1000-
              Razryad[2]*100-                  Razryad[1]*10);
 for (j=0; j < 4; j++){  if (Razr == j){
    digitalWrite(Dot,HIGH);}  for (i = 0; i < 7; i++) {
    digitalWrite(SegPin[i],           Num[Razryad[j]][i]);}
  digitalWrite(DigPin[j],HIGH);  delay(1);
  digitalWrite(DigPin[j],LOW);  digitalWrite(Dot,LOW);}}