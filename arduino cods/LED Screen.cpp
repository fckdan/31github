#include <LiquidCrystal.h>
LiquidCrystal lcd(3, 4, 8, 9, 10, 11);
int BUTTON = 13, val = 0, num =0;
void setup()
{
lcd.begin(5, 2);
pinMode(BUTTON, INPUT);
randomSeed(analogRead(A5));
}

void loop()
{
val = digitalRead(BUTTON);
lcd.setCursor(0, 0);
lcd.print("GrowthHungry");
lcd.setCursor(0, 1);
lcd.print("31github");
 if (val == HIGH) {
  num = random(0, 10);
  lcd.clear();
 if (num == 0) {lcd.print ("Everyhing will be okay");}
 if (num == 1) {lcd.print ("You can do it");}
 if (num == 2) {lcd.print ("Break a leg");}
 if (num == 3) {lcd.print ("Best wishes");
   lcd.setCursor(0, 1); lcd.print("luck");}
 if (num == 4) {lcd.print("Welcome");
   lcd.setCursor(0, 1); lcd.print("no way");}
 if (num == 5) {lcd.print("You have a good");
   lcd.setCursor(0, 1); lcd.print("mood");}
 if (num == 6) {lcd.print("It will be better");}
 if (num == 7) {lcd.print("Waiting");}
   lcd.setCursor(0, 1); lcd.print("the weather is good");}
 if (num == 8) {lcd.print("Excellent, when");
   lcd.setCursor(0, 1); lcd.print("Everything is fine");}
 if (num == 9) {lcd.print("A life will be");
   lcd.setCursor(0, 1); lcd.print("happy");}
 delay(500);
 lcd.clear(); 
}