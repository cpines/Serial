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

int drive_gb = 100 ;
long drive_mb ;    // we changed the type from "int" to "lon"

//********** Setup ****************************************************************
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  
  drive_mb = drive_gb; //define the operation
  drive_mb = drive_mb * 1024; /* In this part solve the operation
                                 1024 * 100 = 102400 Megabytes */

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");    

  
}


//********** Loop *****************************************************************
void loop()                 // we need this to be here even though its empty
{
  
}
  

//********** Funcions *************************************************************
