// C++ code
//
int LDR = 0;
int LED = 8;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int LDR = analogRead(A0);
  
  if (LDR>650){
     digitalWrite(LED, HIGH);
    Serial.println("LED ligado");
     }
  else{
     digitalWrite(LED, LOW);
    Serial.println("LED desligado");
     }
     delay(500); // Wait for 1000 millisecond(s)
}