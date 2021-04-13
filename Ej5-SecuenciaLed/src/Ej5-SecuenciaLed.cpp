#include <Arduino.h>

#define pulsador_A 11
#define pulsador_B 12

#define Led_1 4
#define Led_2 5
#define Led_3 6
void setup() {

pinMode(pulsador_A, INPUT);
pinMode(pulsador_B, INPUT);

pinMode(Led_1, OUTPUT);
pinMode(Led_2, OUTPUT);
pinMode(Led_3, OUTPUT);


}

void loop() 
{
  if(digitalRead (pulsador_A)==1&&digitalRead(pulsador_B)==0)
  {
   digitalWrite(Led_1,HIGH);
   delay(1000);
   digitalWrite(Led_1,LOW);
   
   digitalWrite(Led_2,HIGH);
   delay(1000);
   digitalWrite(Led_2,LOW);
   
   digitalWrite(Led_3,HIGH);
   delay(1000);
   digitalWrite(Led_3,LOW);
  }
  else
  {
    if(digitalRead (pulsador_A)==0&&digitalRead(pulsador_B)==1)
    {
    digitalWrite(Led_3,HIGH);
    delay(1000);
    digitalWrite(Led_3,LOW);
    
    digitalWrite(Led_2,HIGH);
    delay(1000);
    digitalWrite(Led_2,LOW);
    
    digitalWrite(Led_1,HIGH);
     delay(1000);
    digitalWrite(Led_1,LOW);
    }
  }
  
}