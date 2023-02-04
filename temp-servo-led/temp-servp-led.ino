#include <Servo.h>//se llama libreria
Servo servito;//se crea objeto servito
int pos=0;//se declara variable pos=0
float tempC; // variable tipo float
int Sensor = 0; //se asigna de entrada del sensor (A0)
 
void setup() {
  servito.attach(4);//se configura servo en pin 4
  servito.write(pos);//se escribe posicion
  pos=0;//posicion 0

  pinMode(3, OUTPUT); //declaramos salida buzzer
  pinMode(2, OUTPUT); //declaramos salida pin 2
  Serial.begin(9600);// Configuramos el puerto serial
}
 
void loop() {
  // Con analogRead leemos el sensor, recuerda que es un valor de 0 a 1023
  tempC = analogRead(Sensor); 
   
  // Calculamos la temperatura con la fórmula
  tempC = (5.0 * tempC * 100.0)/1024.0; 

  Serial.print("Temperatura ");//imprime texto temperatura
  Serial.println(tempC); //imprime la temperatura total


  if(tempC <= 26){  
    digitalWrite(2, HIGH);//se prende el led
    digitalWrite(3, HIGH);//se prende buzzer 
    servito.write(pos);//se escribe posicion
    pos=90;//posicion 45
    delay(500);
  }else{
    digitalWrite(2, LOW);//se apaga el led
    digitalWrite(3, LOW);//se apaga buzzer
    servito.write(pos);//se escribe posicion
    pos=0;//posicion 0
    delay(500);
  }
}
