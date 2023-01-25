#include<LiquidCrystal.h>
int sensA;
int deger;
int ctr=0;
int led=7;
int buzzer=6;
int durum=0;
int sayac=0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
Serial.begin(9600);
lcd.begin(16,2);
pinMode(led, OUTPUT);
pinMode (buzzer, OUTPUT);

}

void loop() {

sensA = analogRead(A1);

deger = 140;
if(sensA>deger)
{
ctr=ctr+1;
delay(0);

digitalWrite(7,HIGH);
delay(2000);
digitalWrite(6,HIGH);
delay(2000);
}
else{
ctr=ctr;

digitalWrite(7,LOW);
digitalWrite(6,LOW);


}

lcd.clear();

lcd.print(" Sayi: ");
lcd.print(ctr);
Serial.println(sensA);
delay(1000);
}
