int greenLed = 6;
int whiteLed = 7;
int IrSensor = 5;
int Trepin = 3;
int Echopin = 2;
int buzzer = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(greenLed, OUTPUT);
  pinMode(whiteLed,OUTPUT);
  pinMode(IrSensor,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(Trepin,OUTPUT);
  pinMode(Echopin,INPUT);
  
  
} 

void loop()
{
  long duration=5,distance;
  int value = digitalRead(IrSensor);
  Serial.println(value);
  // digitalWrite(greenLed,OUTPUT);
  digitalWrite(Trepin,LOW);
  digitalWrite(Trepin,HIGH);
  delay(1000);
  digitalWrite(Trepin,LOW);
  duration = pulseIn(Echopin, HIGH);
  digitalWrite(Trepin,LOW);
  distance = duration * 0.034 / 2; 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
  if(distance<5)
  {
    // digitalWrite(buzzer,HIGH);
    digitalWrite(whiteLed,HIGH);
  }
  else if(distance>=5)
  {
    digitalWrite(whiteLed,HIGH);
  }
   if(value == 1 )
  {
   delay(2000);
    // digitalWrite(buzzer,HIGH);
    digitalWrite(greenLed,HIGH);
    digitalWrite(whiteLed,HIGH);
    delay(1000);
  }
  else
  {
    delay(1000);
    digitalWrite(whiteLed,HIGH);
    delay(1000);
  }
  digitalWrite(whiteLed,OUTPUT);
}
