
const byte pin1 = 5;
unsigned long pausa = 300;

void setup() 
{
 pinMode(pin1 , OUTPUT);
 
for (int i=0;i<30;i++)
 {
  digitalWrite(pin1 , HIGH);
    delay(pausa);

 digitalWrite(pin1 , LOW);
        delay(pausa); 
 }
 
 



}

void loop() 
{

}
