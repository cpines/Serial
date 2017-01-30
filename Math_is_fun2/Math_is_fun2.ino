/**********************************************************************************
**                                                                               **
**                               Hello World                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
/*
 *  Math is fun!
 */
//********** Variables ************************************************************
#include "math.h"               // include the Math Library

int a = 3;
int b = 4;
int h;
//********** Setup ****************************************************************
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);           // set up Serial library at 9600 bps

  Serial.println("Let's calculate a hypoteneuse");

  Serial.print("a = ");
  Serial.println(a);

  Serial.print("b = ");
  Serial.println(b);
  
  h = sqrt( a*a + b*b );
  
  Serial.print("h = ");
  Serial.println(h);
}


//********** Loop *****************************************************************
void loop()                 // run over and over again
{
  
}
  

//********** Funcions *************************************************************
