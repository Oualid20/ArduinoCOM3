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

//********** Setup ****************************************************************
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

//********** Loop *****************************************************************
void loop()
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

  //Etapa 2 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

 //Etapa 2 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 3 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

 //Etapa 3 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 4 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

 //Etapa 4 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 5 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

 //Etapa 5 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos
  
  //Etapa 6 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 6 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 7 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 0V el pin 8
  digitalWrite(led4, LOW);    // posar a 0V el pin 9

  //Etapa 7 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 0V el pin 10
  digitalWrite(led6, LOW);    // posar a 0V el pin 11
  digitalWrite(led7, LOW);    // posar a 0V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 8 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 8 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 9 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 0V el pin 8
  digitalWrite(led4, LOW);    // posar a 0V el pin 9

  //Etapa 9 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 0V el pin 10
  digitalWrite(led6, LOW);    // posar a 0V el pin 11
  digitalWrite(led7, LOW);    // posar a 0V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 10 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 10 semàfor B 
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 11 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 11 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos
  
  //Etapa 12 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9

  //Etapa 12 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 13 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9

  //Etapa 13 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 14 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9

  //Etapa 14 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 15 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9

  //Etapa 15 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 16 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 16 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 17 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 0V el pin 8
  digitalWrite(led4, LOW);    // posar a 0V el pin 9

  //Etapa 17 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 0V el pin 10
  digitalWrite(led6, LOW);    // posar a 0V el pin 11
  digitalWrite(led7, LOW);    // posar a 0V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 18 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 18 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 19 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 0V el pin 8
  digitalWrite(led4, LOW);    // posar a 0V el pin 9

  //Etapa 19 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 0V el pin 10
  digitalWrite(led6, LOW);    // posar a 0V el pin 11
  digitalWrite(led7, LOW);    // posar a 0V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 20 semàfor A 
  
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 20 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

  //Etapa 20 semàfor A 
  
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9

  //Etapa 20 semàfor B 
  
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(temps);                  // es queden leds 500ms encesos

}

//********** Funcions *************************************************************
