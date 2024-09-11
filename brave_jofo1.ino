// C++ code
//
int digitalInput = 0;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  for(digitalInput=0; digitalInput<255; digitalInput++){
   Serial.print("digitalInput;");
   Serial.println(digitalInput);
   analogWrite(11, digitalInput);
   analogWrite(9, digitalInput);
   analogWrite(6, digitalInput);
    
  }
}