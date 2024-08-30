// C++ code
//
int counter;
int buttonstate = 0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode (8, INPUT);
}

void loop()
{
  buttonstate = digitalRead(8);
  if (buttonstate == HIGH) {
     digitalWrite(13, HIGH);
     digitalWrite(9, HIGH);
     delay(20000); // Wait for 20000 millisecond(s)
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     for (counter = 0; counter < 5; ++counter) {
     digitalWrite(10, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(10, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     }
     digitalWrite(13, LOW);
     digitalWrite(11, HIGH);
     delay(30000); // Wait for 30000 millisecond(s)
     digitalWrite(11, LOW);
     digitalWrite(12, HIGH);
     delay(10000); // Wait for 10000 millisecond(s)
     digitalWrite(12, LOW);
     digitalWrite(10, LOW);
     }
}