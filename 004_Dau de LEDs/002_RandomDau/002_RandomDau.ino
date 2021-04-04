/**********************************************************************************
**                                                                               **
**                            Dau de LEDs                                        **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int quatre = 5;
const int tres = 6;
const int dos = 7;
const int un = 8;
long randNumber = 0;
const int buttonPin = 2; 
int buttonState = LOW;     // variable per llegir l'estat del polsador
int temps = 500;

void setup() 
{
   pinMode(quatre, OUTPUT);
   pinMode(tres, OUTPUT);
   pinMode(dos, OUTPUT);
   pinMode(un, OUTPUT);
   pinMode(buttonPin, INPUT); 
   Serial.begin(9600);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) 
  
  {
    
      randNumber = random(1, 7);
      Serial.println(randNumber);
      delay(temps);
    
    if (randNumber == 1 )
    
   { 
     // 1
     
     digitalWrite(quatre, LOW);
     digitalWrite(tres, LOW);
     digitalWrite(dos, LOW);
     digitalWrite(un, HIGH);
      
     delay(temps);
     
    }
    
    else if (randNumber == 2 )
    
  {
    // 2
    
     digitalWrite(quatre, HIGH);
     digitalWrite(tres, LOW);
     digitalWrite(dos, LOW);
     digitalWrite(un, LOW);
      
     delay(temps);
     
   }
      
    else if (randNumber == 3 ) 
     
  {
    // 3
    
     digitalWrite(quatre, LOW);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, LOW);
     digitalWrite(un, HIGH);
      
     delay(temps);
     
  } 

     else if (randNumber == 4 )

  { 
    // 4
     
     digitalWrite(quatre, LOW);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, HIGH);
     digitalWrite(un, LOW);
      
     delay(temps);
    
  }   
     else if (randNumber == 5 ) 
     
  {
    // 5
    
     digitalWrite(quatre, LOW);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, HIGH);
     digitalWrite(un, HIGH);
      
     delay(temps);
      
  }
      
     else if (randNumber == 6 )

  {
    // 6
    
     digitalWrite(quatre, HIGH);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, HIGH);
     digitalWrite(un, LOW);
      
     delay(temps);
      
   }
   
 }

     else if (randNumber == 0)

   {
     digitalWrite(quatre, LOW);
     digitalWrite(tres, LOW);
     digitalWrite(dos, LOW);
     digitalWrite(un, LOW);
     
      delay(300); 
   }

}
