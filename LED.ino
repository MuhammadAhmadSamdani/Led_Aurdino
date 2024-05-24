
// LED 
int RedLed = 3;
int WhiteLed = 4;
int GreenLed = 7;
int YellowLed = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(RedLed,OUTPUT);
  pinMode(WhiteLed,OUTPUT);
  pinMode(GreenLed,OUTPUT);
  pinMode(YellowLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RedLed, HIGH);
  delay(2000);
  digitalWrite(WhiteLed, HIGH);
  delay(2000);
  digitalWrite(GreenLed, HIGH);
  delay(2000);
  digitalWrite(YellowLed, HIGH);
  delay(2000);
}
