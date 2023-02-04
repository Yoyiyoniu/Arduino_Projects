#include <Servo.h>
Servo myservo;//Se crea objeto myservo

int pos = 0;//Posicion 0
int infra = 8;//Se declara variable entera infra
int valor = 0;//Se declara variable entera valor
int ledR = 13;//Se declara led en pin 13
int ledV = 12;//Se declara led en pin 12

void setup(){
  Serial.begin(9600);//Encendemos puerto serial
  pinMode(infra,INPUT);//Configurado como entrada
  myservo.attach(4);//Se configura servo en pin 4
  myservo.write(pos);//Se escribe posicion
  pos = 0;//Posicion 0
  pinMode(13,OUTPUT);//Configurado como salida
  pinMode(12,OUTPUT);//Configurado como salida
 }

void loop(){
  Serial.println("valor");//Se imprime el mensaje valor
  Serial.print(valor);//Se imprime el valor contenido en la variable valor
  valor = digitalRead(infra);
  if(valor==LOW){//Si valor es igual a encendido
    prende90();//Ejecuta subrutina prende90
  }
  else{
    apaga90();//Ejecuta subrutina apaga90
  }
  }

void prende90(){//Subrutina prende90
  digitalWrite(13,HIGH);//Prende ledr
  digitalWrite(12,LOW);//Apaga ledv
  myservo.write(pos);//Se escribe posicion
  pos = 0;//Posicion 0
  
  }

  void apaga90(){//Subrutina apaga90
  myservo.write(pos);//Se escribe posicion
  pos=90;//Posicion 90
  delay(1000);//Espera 1seg.
  digitalWrite(12,HIGH);//prende ledv
  digitalWrite(13,LOW);//Apaga ledr
    }
