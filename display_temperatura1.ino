#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
 pinMode(A0, INPUT);
 lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{
  	float temperaturaC = 0;
  int TMP = analogRead(A0);
  temperaturaC = (float(analogRead(A0))*5/(1023))/0.01;
  //temperaturaC = (TMP * (5/1023))/0.01;
  //temperaturaC = temperaturaC * 100;
  lcd.setCursor(6,0);          
  lcd.print(temperaturaC);
  Serial.println(TMP);
    Serial.println(temperaturaC);


  }