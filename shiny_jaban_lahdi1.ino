
void setup()
{
  pinMode(12, OUTPUT); // RED LED
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(1500); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}