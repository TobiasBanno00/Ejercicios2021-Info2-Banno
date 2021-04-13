#define pote A0
#define led 4

int voltajePote=0;
void setup() 
{
  pinMode(pote, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {

  voltajePote=analogRead(pote);

  analogWrite(led,voltajePote);

}
