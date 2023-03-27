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

  tone(xiulet, 300, 1000 );    // xiulet de durada valPot0
  delay(1000+500);              // esperar valPot0 del xiulet + valPot0 silenci

   tone(xiulet, 3000,1000 );    // xiulet de durada valPot0
  delay(1000+500);              // esperar valPot0 del xiulet + valPot0 silenci

  tone(xiulet, 4000, 1000);    // xiulet de durada valPot0
  delay(1000+500);              // esperar valPot0 del xiulet + valPot0 silenci

  tone(xiulet, 5000, 1000);    // xiulet de durada valPot0
  delay(1000+500);              // esperar valPot0 del xiulet + valPot0 silenci

}

//********** Funcions *************************************************************
