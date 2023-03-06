/**********************************************************************************
**                                                                               **
**                     TÍTOL: hellow world                                       **
**                                                                               **
**   NOM :BILAL NAMIR                            DATA :01/03/23                  **
**                                                                               **
**********************************************************************************/

//****************************** INCLUDES *****************************************

//****************************** VARIABLES ****************************************float qualEnergy = 3;

int taula = 2;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);    
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************