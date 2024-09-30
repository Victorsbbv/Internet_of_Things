#define R 3
#define B 5
#define G 6

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //COR VERMELHA *
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(1100);
  //COR LARANJA
  analogWrite(R, 255);
  analogWrite(G, 50);
  analogWrite(B, 0);
  delay(1200);
  //COR AMARELA
  analogWrite(R, 200);
  analogWrite(G, 200);
  analogWrite(B, 0);
  delay(1100);
  //COR LIMA *
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 50);
  delay(1200);
  //COR VERDE
  analogWrite(R, 0);
  analogWrite(G, 200);
  analogWrite(B, 0);
  delay(1100);
  //COR CIANO
  analogWrite(R, 0);
  analogWrite(G, 200);
  analogWrite(B, 200);
  delay(1100);
  //COR AZUL
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 200);
  delay(1100);
  //COR ROXO *
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 255);
  delay(1200);
  delay(1000);
}