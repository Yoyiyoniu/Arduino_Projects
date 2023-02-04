#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

int trig=2;
int echo=3;
int Tiempo;
int Distancia;
float tempC; // variable tipo float
int Sensor = 0; //se asigna de entrada del sensor (A0)
 
void setup() {
  
  pinMode(2,OUTPUT);//ponemos el trig en el 2
  pinMode(3,INPUT);//ponemos el echo en el 3
  lcd.begin(16,2);// Configuramos el puerto serial
  
}
 
void loop() {
  digitalWrite(2,HIGH);//prendemos 2
  delay(1);//delay
  digitalWrite(2,LOW);//apagamos 2
  Tiempo=pulseIn(3,HIGH);//ponemos 3 como
  
  // Con analogRead leemos el sensor, recuerda que es un valor de 0 a 1023
  tempC = analogRead(Sensor);//se asigna la lectura
   
  // Calculamos la temperatura con la fórmula
  tempC = (5.0 * tempC * 100.0)/1024.0; //como lo calculaa
  
  lcd.setCursor(0,1);//ponemos el cursor
  lcd.print("Temperatura ");//imprime texto temperatura
  lcd.println(tempC); //imprime la temperatura total

  delay(500);//delay de 1 seg 
}
