/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int A = 5;
const int B = 6;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 10;
const int G = 11;
const int buttonPin = 2; 
int buttonState = LOW;     // variable per llegir l'estat del polsador
int buttonPushCounter = 0;

void setup() 
{
   pinMode(A, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(C, OUTPUT);
   pinMode(D, OUTPUT);
   pinMode(E, OUTPUT);
   pinMode(F, OUTPUT);
   pinMode(G, OUTPUT);
   pinMode(buttonPin, INPUT); 
}

void loop() {
  
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) 
  
  {
    
    buttonPushCounter = buttonPushCounter + 1;
    
    if (buttonPushCounter == 1 )
    
   { 
     // 1
    
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      
      delay(500);
    }
    
    else if (buttonPushCounter == 2 )
    
  {
    // 2
    
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, LOW);
      
      delay(500);
   }
      
    else if (buttonPushCounter == 3 ) 
     
  {
    // 3
    
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, LOW);
      
      delay(500);
  } 

     else if (buttonPushCounter == 4 )

  { 
    // 4
      
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      
      delay(500);
    
  }   
     else if (buttonPushCounter == 5 ) 

     
   {
    // 5
      
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      
      delay(500);
    
      
  }
      
     else if (buttonPushCounter == 6 )

  {
    // 6
      
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      
      delay(500);
   }
      
     else if (buttonPushCounter == 7 ) 
           
   {
    // 7
      
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      
      delay(500);
   }
      
     else if (buttonPushCounter == 8 )
     
   {
    // 8
      
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      
      delay(500);
   }
      
    else if (buttonPushCounter == 9 )
    
   {
    // 9
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      
      delay(500); 
   }

      else 
      
   {
      // 0
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      
      delay(500);
      
      buttonPushCounter = 0 ;

   }
   
 }
    
} 
  
