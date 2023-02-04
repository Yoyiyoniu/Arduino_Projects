#include<LiquidCrystal.h>//Abrimos libreria LCD
LiquidCrystal lcd(2,3,4,5,6,7);//Se asginan pines de conexion.

int Trig = 8;//Se declara variable entera Trig
int Echo = 9;//Se declara variable entera Echo
int Tiempo;//Se declara variable entera Tiempo
int Distancia;//Se declara variable entera Distancia

void setup(){
  Serial.begin(9600);//Se enciende puerto Serial
  lcd.begin(16,2);//Se configura para LCD
  pinMode(8,OUTPUT);//Se configura como salida Trig
  pinMode(9,INPUT);//Se configura como entrada Echo
  }

void loop(){
  digitalWrite(8,HIGH);//Se enciende pulso Trig
  delay(1);//delay
  digitalWrite(8,LOW);//Se apaga pulso Trig
  Tiempo=pulseIn(9,HIGH);//Tiempo= pulso de entrada enciende Echo
  Distancia=Tiempo/58.4;//Distancia tiempo/velocidad en cm/ms

  lcd.setCursor(0,1);//Se colocan cursor en la col.0,lin.1
  lcd.display();//Se enciende LCD
  
  lcd.print("Distancia= ");//Se imprime " Distancia= "
  lcd.print(Distancia);//Se imprime valor de Distancia
  
  }