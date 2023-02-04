#include <Servo.h> //se llama libreria 
Servo Servito;//se crea objeto myservo
int TRIG=2;//se declara variable entera TRIG
int ECHO=3;//se declara variable entera ECHO
int tiempo;//se declara variable entera tiempo
int distancia;//se declara variable entera distncia
int pos=0;//posicion 0

void setup() {
  
  Servito.attach(4);//se configura servo en pin 4
  Servito.write(pos);//se escribe posicion
  pos=0;//posicion 0
  Serial.begin(9600);//se enciende puerto serial
  pinMode(3,INPUT);//se configura como salida TRIG
  pinMode(2,OUTPUT);//se configura como entrada ECHO
  
}

void loop() {
     
    digitalWrite(2,HIGH);//se enciente pulso TRIG
    delay(1);//espera 1 ms
    digitalWrite(2,LOW);//se apaga pulso TRIG]
    tiempo=pulseIn(3,HIGH);//tiempo=pulso de entrada enciende ECHO
    distancia=tiempo/58.4;//distancia=tiempo/velocidad en cm/ms
    
    if(distancia>=60){ 
    Serial.println("Nada ");//se imprime valor de distancia
    Servito.write(pos);//se escribe posicion
    pos=0;//posicion 45
    Serial.println(distancia);//se imprime valor de distancia
    delay(500);
    }
   }else{//si no
    Serial.println("Algo ");//se imprime valor de distancia
    Servito.write(pos);//se escribe posicion
    pos=90;//posicion 0
    Serial.println(distancia);//se imprime valor de distancia
    delay(500);
   }
}
