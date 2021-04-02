/**********************************************************************************
**                                                                               **
**                              Cruïlla de semàfors                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
unsigned long temps = 500;   // variable per definir el temps per el delay(temps)

void setup() 
{
  //semàfor A pins 7, 8 i 9
  
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida

  //semàfor B pins 10, 11 i 12
  
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida

}

void loop() 
{
  for(int i=1; i<22; i++)
 {
  
  if (i == 1 || i == 11 || i == 21 )

   {
    //Etapa 1 semàfor A 
    
    digitalWrite(led2, HIGH);    // posar a 5V el pin 7
    digitalWrite(led3, LOW);    // posar a 5V el pin 8
    digitalWrite(led4, LOW);    // posar a 5V el pin 9
  
    //Etapa 1 semàfor B 
    
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, LOW);    // posar a 5V el pin 11
    digitalWrite(led7, LOW);    // posar a 5V el pin 12
    
    delay(temps);                  // es queden leds 500ms encesos 
   } 

  else if (i > 1 && i < 6  )
  
   {
    //Etapa 2,3,4,5 semàfor A 
    
    digitalWrite(led2, HIGH);    
    digitalWrite(led3, LOW);    
    digitalWrite(led4, LOW);    
  
    //Etapa 2 semàfor B 
    
    digitalWrite(led5, LOW);    
    digitalWrite(led6, LOW);    
    digitalWrite(led7, HIGH);    
    
    delay(temps);                  // es queden leds 500ms encesos
   }

  else if (i > 5 && i < 11  )
  
   {
    
    if (i == 6 || i == 8 || i == 10)

    {
     //semàfor A 
    
    digitalWrite(led2, HIGH);    
    digitalWrite(led3, LOW);    
    digitalWrite(led4, LOW);    
  
    //semàfor B 
    
    digitalWrite(led5, LOW);    
    digitalWrite(led6, HIGH);    
    digitalWrite(led7, LOW);    
    
    delay(temps);                  // es queden leds 500ms encesos
    }

    else

    {
    digitalWrite(led2, HIGH);   
    digitalWrite(led3, LOW);    
    digitalWrite(led4, LOW);    
  
    //Etapa 7 semàfor B 
    
    digitalWrite(led5, LOW);    
    digitalWrite(led6, LOW);    
    digitalWrite(led7, LOW);    
    
    delay(temps);                  // es queden leds 500ms encesos
    }
   }

  else if (i > 11 && i < 16  ) 

   {
    
    digitalWrite(led2, LOW);    // posar a 5V el pin 7
    digitalWrite(led3, LOW);    // posar a 5V el pin 8
    digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  
    //Etapa 12 semàfor B 
    
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, LOW);    // posar a 5V el pin 11
    digitalWrite(led7, LOW);    // posar a 5V el pin 12
    
    delay(temps);                  // es queden leds 500ms encesos 
      
   }

  else if (i > 15 && i < 21  ) 

   {
    
    if (i == 16 || i == 18 || i == 20)
    
    {
    digitalWrite(led2, LOW);    // posar a 5V el pin 7
    digitalWrite(led3, HIGH);    // posar a 5V el pin 8
    digitalWrite(led4, LOW);    // posar a 5V el pin 9
  
    //Etapa 16 semàfor B 
    
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, LOW);    // posar a 5V el pin 11
    digitalWrite(led7, LOW);    // posar a 5V el pin 12
    
    delay(temps);                  // es queden leds 500ms encesos
    }

    else 
    
    {
    //Etapa 17 semàfor A 
    
    digitalWrite(led2, LOW);    // posar a 5V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
  
    //Etapa 17 semàfor B 
    
    digitalWrite(led5, HIGH);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
    
    delay(temps);                  // es queden leds 500ms encesos 
    }
      
   }

  else 

   {
      
    i = 1 ;  

    delay(temps);                  // es queden leds 500ms encesos  
   }

}

}
