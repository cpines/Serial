/**********************************************************************************
**                                                                               **
**                               Hello World                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
/*
    Math is fun!
*/
//********** Variables ************************************************************

float a = 3;
float b = 2;
float d;



//********** Setup ****************************************************************
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);           // set up Serial library at 9600 bps

  Serial.print("Here is division ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;


  Serial.print("a / b = ");
  Serial.println(d);
}


//********** Loop *****************************************************************
void loop()                 // run over and over again
{

}


//********** Funcions *************************************************************
