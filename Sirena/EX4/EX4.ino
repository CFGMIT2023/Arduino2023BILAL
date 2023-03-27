/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{

  tone(xiulet, 2000, 500);    // xiulet de durada valPot0
  delay(500+100);              // esperar valPot0 del xiulet + valPot0 silenci

  tone(xiulet, 3000, 500);    // xiulet de durada valPot0
  delay(500+100);              // esperar valPot0 del xiulet + valPot0 silenci

}

//********** Funcions *************************************************************
