int tempAigua = 99;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");
  } 
  if ( tempAigua >= 100)
  {
    Serial.print("Aigua bullint");
  } 
}

void loop()   // we need this to be here even though its empty
{
}

