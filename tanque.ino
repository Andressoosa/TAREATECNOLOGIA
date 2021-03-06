 /*
 ----------------------------------- 
  Encender LED con un pulsador
 -----------------------------------
 
 Oprimir un pulsador y mientras este se mantenga accionado 
  un LED se enciende
 
 Cosas de Mecatrónica y Tienda de Robótica
 
*/
 
//------------------------------------
//Declara puertos de entradas y salidas
//------------------------------------
int pulsador=2;        //Pin donde se encuentra el pulsador, entrada
int led=13;            //Pin donde se encuentra el LED, salida
int IN3 = 5;
int IN4 = 4; 
int IN1 = 9;
int IN2 = 8;
//------------------------------------
//Funcion principal
//------------------------------------
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
 pinMode(pulsador, INPUT); //Configurar el pulsador como una entrada
 pinMode(led,OUTPUT);      //Configurar el LED como una salida
 pinMode (IN4, OUTPUT); // Input4 conectada al pin 4
 pinMode (IN3, OUTPUT); // Input3 conectada al pin 5
 pinMode (IN1, OUTPUT); // input conectada al pin 9
 pinMode (IN2, OUTPUT); // Input conectada al pin 8
}
 
//------------------------------------
//Funcion ciclicla
//------------------------------------
void loop() // Esta funcion se mantiene ejecutando
{           //  cuando este energizado el Arduino
 
   //Condicional para saber estado del pulsador
   if (digitalRead(pulsador)==HIGH)
   {
     //Pulsador oprimido
     digitalWrite(led,LOW); //APAGA EL LED el LED
     digitalWrite (IN4, HIGH);
     digitalWrite (IN3, LOW);   
     digitalWrite (IN1,HIGH);
     digitalWrite (IN2,LOW);
    
 }
   else
   {
     //Pulsador NO oprimido
     digitalWrite(led,HIGH);  // el LED esta encendido 
     digitalWrite (IN3, HIGH);
     digitalWrite (IN4, LOW); 
     digitalWrite (IN1, LOW);
     digitalWrite (IN2, HIGH);
   }
}
 
//Fin programa
