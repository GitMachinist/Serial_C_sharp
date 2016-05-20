
int randNumber;
char startRead;
char endRead;

void setup()                    // run once, when the sketch starts
{
  Serial.begin(115200);           // set up Serial library at 9600 bps
   //randomSeed(analogRead(0));
//  Serial.println("Hello world!");  // prints hello with ending line break 
}

     void loop()                       // run over and over again
     {
      Serial.begin(115200);
   if (Serial.available()) {
    /* read the most recent byte */
    startRead = Serial.read();
    /*ECHO the value that was read, back to the serial port. */
    //Serial.write(byteRead);
                           }
   if (startRead == 's') { //start the serial communication

     
      randNumber = random(300);
      Serial.println(randNumber);
      delay(500);
      endRead = Serial.read(); 
      if (endRead == 'c')    { // stop the serial communication
                              Serial.end();
                              startRead = 'q';
                             }
                       
                          }
     
     } 

  


