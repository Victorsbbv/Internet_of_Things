#define R 3
#define B 5
#define G 6


int buzzer = 8;
void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //COR VERMELHA *
  tone(buzzer, 300, 1000);
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(1100);
  noTone(buzzer);
  //COR LARANJA
  tone(buzzer, 340, 1000);
  analogWrite(R, 255);
  analogWrite(G, 50);
  analogWrite(B, 0);
  delay(1200);
  noTone(buzzer);
  //COR AMARELA
  tone(buzzer, 450, 1000);
  analogWrite(R, 200);
  analogWrite(G, 200);
  analogWrite(B, 0);
  delay(1100);
  noTone(buzzer);
  //COR LIMA *
  tone(buzzer, 490, 1000);
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 50);
  delay(1200);
  noTone(buzzer);
  //COR VERDE
  tone(buzzer, 550, 1000);
  analogWrite(R, 0);
  analogWrite(G, 200);
  analogWrite(B, 0);
  delay(1100);
  noTone(buzzer);
  //COR CIANO
  tone(buzzer, 370, 1000);
  analogWrite(R, 0);
  analogWrite(G, 200);
  analogWrite(B, 200);
  delay(1100);
  noTone(buzzer);
  //COR AZUL
  tone(buzzer, 550, 1000);
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 200);
  delay(1100);
  noTone(buzzer);
  //COR ROXO *
  tone(buzzer, 370, 1000);
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 255);
  delay(1200);
  delay(1000);
}