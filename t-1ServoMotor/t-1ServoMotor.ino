#include <Servo.h>//se llama libreria
Servo myservo;//se crea objeto myservo
int pos=0;//se declara variable pos=0

void setup() {
  
myservo.attach(8);//se configura servo en pin 4
myservo.write(pos);//se escribe posicion
pos=0;//posicion 0

}

void loop() {
myservo.write(pos);//se escribe posicion
 pos=180;//posicion 45 
 
 delay(1000);//espera 1 segundo
 
 myservo.write(pos);//se escribe posicion
 pos=-180;//posicion 90
 
 delay(1000);//espera 1 segundo
 
 myservo.write(pos);//se escribe posicion
 pos=180;//posicion 45
 
 delay(2000);//espera 2 segundos
 
 myservo.write(pos);//se escribe posicion
 pos=0;//posicion 0
 
 delay(2000);//espera 2 segundos
}
