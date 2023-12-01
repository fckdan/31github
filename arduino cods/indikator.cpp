int SegPin[7] =
{6,7,8,9,10,11,12,13};

int DigPin[4] = {2,3,4,5};

boolean Num [7] =
{1,1,0,1,1,1,0};

int Dot = 11;
int i;

void setup(){
  for (i = 0; i < 7; ++i){
   pinMode(SegPin[i], OUTPUT);}
  for (i = 0; i < 4; ++i){
   pinMode(DigPin[i], OUTPUT);}
  pinMode(Dot, OUTPUT); }

void loop() {
  for (i = 0; i < 7; i++) {
    digitalWrite(Segpin[i], Num[i]);}

   digitalWrite(DigPin[0], 1);}

#define buzer A0
#define button1 A1
#define button2 A2
int SegPin[7] =
 {6,7,8,9,10,11,12,13};
int DigPin[4] =
 {2,3,4,5};
int Dot = 11;

boolean Num[10][7] =
{{1,1,1,0,1,1,1}, //0
 {0,0,1,0,1,0,0}, //1
 {1,0,1,1,0,1,1}, //2
 {1,0,1,1,1,1,0}, //3
 {0,1,1,1,1,0,0}, //4
 {1,1,0,1,1,1,0}, //5
 {1,1,0,1,1,1,1}, //6
 {1,0,1,0,1,0,0}, //7
 {1,1,1,1,1,1,1}, //8
 {1,1,1,1,1,1,0}};//9

int i,j, chislo=0, chislo2=0;
boolean state = 0, val;
void setup() {
  for (i = 0; i<7; ++i){
    pinMode(SegPin[i], OUTPUT);}
  for (i = 0; i < 4; ++i){
    pinMode(DigPin[i], OUTPUT);}
pinMode(Dot, OUTPUT);
pinMode(buzer, OUTPUT);
pinMode(button1, INPUT);
pinMode(button2, INPUT);
randomSeed(analogRead(A5)); }

void indikator(int nomer){
  for (i = 0; i < 7; i++){
    digitalWrite(SegPin[i], Num[nomer][i]);}}

void loop(){
while (state == 0){
  digitalwrite(DigPin[0], 1);
  indikator(chislo);
  val = digitalRead(button1);
  if (val == HIGH){
    delay (300);
    chislo = chislo+1;
    if(chislo==10){chislo==0;}}
   val = digitalRead(button2);
   if (val==HIGH){state=1;}}
if (state == 1){
  digitalWrite(DigPin[0],0);
  for (j=3; j >= 0; j--){
    indikator(8);
    digitalWrite(DigPin[j,1]);
    tone(buzer,3000,250);
    delay(300);
    digitalWrite(DigPin[j],0);}
   delay (500);
   chislo2 = random(0,10);
   if (chislo2 == chislo){
    for (j=0; j < 4; j++){
      digitalWrite(DigPin[j],1);}
    indikator(chislo2);
    tone(buzer,5000,1000);
    delay(2000);
    for (j=0; j<4; j++){
      digitalWrite(Digpin[j],0);}}
  else {
    digitalWrite(DigPin[3],1);
    indikator(chislo2);
    tone(buzer,300,1000);
    delay(1000);
    digitalWrite(digPin[3],0);}
   state =0;}}