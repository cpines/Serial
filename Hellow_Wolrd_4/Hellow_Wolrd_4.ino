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
int a = 5;
int b = 10;
int c = 20;
//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);

  Serial.println("Here's some math: ");

  Serial.print("a = 5");
 
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");   // add
  Serial.println(a + b);

  Serial.print("a * c = ");    // multiply
  Serial.println(a * c);

  Serial.print("c / b = ");   // divide
  Serial.println(c / b);

  Serial.print("b - c =");    // subtract
  Serial.println(b - c);

  Serial.print("c % b =");    //module
  Serial.println(c % b);
}



//********** Loop *****************************************************************
void loop()                 // run over and over again
{
  
}
  

//********** Funcions *************************************************************
