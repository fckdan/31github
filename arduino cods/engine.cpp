#define buzer 11#define button 10
unsigned int LedHerz[7] ={1,2,3,4,,5,6,7};
unsigned int BuzerTone[7]={2,3,4,5,6,7,8};
unsigned int BuzerTone[7]={523,587,659,698,784,880,988};
int i,j=0,raz, val, vrem = 2;float time;
boolean state=0;
void setup(){
  pinMode (buzer, OUTPUT);  pinMode (button, INPUT);
    for (i= 0; i < 7; ++i){
    pinMode (Led[i], OUTPUT);  }}
void morganie(int Pin,
int Herz, int vrem){ raz = Herz*vrem;
for (int i=0; i < raz; i++){digitalWrite(Pin, HIGH);
delay(1000/(Herz*2));digitalWrite(Pin, LOW);
delay(1000/(Herz*2));}}
void loop(){val = digitalRead (button);
if (val == HIGH)}
{  state=0;
  time=millis();  while(val == HIGH){
    val = digitalRead(button);
    if (millis() - time > 3000){      val = LOW
      for (i=0; i<7; i++){        tone(buzer, BuzerTone[i]);
        morganie(Led[i], LedHerz[i],        vrem);
        noTone(buzer);        state=1;}}}
       if (state == 0){        tone (buzer, BuzerTone[j]);
        morganie(Led[j],LedHerz[j],        vrem);
        noTone(buzer);        j=j+1;
        if (j>6) {j=0;}}}