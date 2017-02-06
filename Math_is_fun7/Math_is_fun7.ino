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

int test = 32767;


//********** Setup ****************************************************************
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);
  
  test = test + 1;

  Serial.print("Now it is ");
  Serial.println(test);    
  /* Let's say we have a variable that is byte type, it's signed by default.
     It starts out with the value 127 and we add one to the variable, what will the
     new variable value be? Highlight the text below for the answer */
  /* Let's say now it is an unsigned byte type */
  /* If we have an unsigned byte and it starts out with the value 250 */
}


//********** Loop *****************************************************************
void loop()                 // we need this to be here even though its empty
{
  
}
  

//********** Funcions *************************************************************
