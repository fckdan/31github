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
{{1,1,1,0,1,1,1},
 {0,0,1,0,1,0,0},
 {1,0,1,1,0,1,1},
 {1,0,1,1,1,1,0},
 {0,1,1,1,1,0,0},
}