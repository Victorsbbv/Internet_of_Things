// const int pinoBuzzer = 2; //PINO DIGITAL EM QUE O BUZZER ESTÁ CONECTADO
int buzzer = 2;

int cm = 0;
int TMP = 0;
int buttonstate = 0;
float temperaturaC = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(8, OUTPUT); // VERDE
  pinMode(9, OUTPUT); // AMARELO
  pinMode(10, OUTPUT); // VERMELHO
  pinMode(buzzer, OUTPUT); // BUZZER
  pinMode(A0, INPUT); // TEMPERATURA
  pinMode (6, INPUT); // BOTÃO
  Serial.begin(9600);

}

void loop()
{
  int TMP = analogRead(A0);
  //temperaturaC = TMP * 0.48828125 - 49.765625;
  temperaturaC = TMP * 5/(1023);
  temperaturaC = temperaturaC * 100;
  buttonstate = digitalRead(6);
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(5, 7);
  // convert to inches by dividing by 2.54
  Serial.print(cm);
  Serial.println("cm");
  delay(100); // Wait for 100 millisecond(s)
  Serial.print("Estado do Botão: ");
  Serial.println(buttonstate);
  
  if (buttonstate == 1){
    noTone(buzzer);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  else{
  if(cm <= 20){
    Serial.print("Temperatura: ");
    Serial.println(temperaturaC);
    noTone(buzzer);
    tone(buzzer, 300, 100);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  }
    else{
     noTone(buzzer);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW); 
    }
  }
}