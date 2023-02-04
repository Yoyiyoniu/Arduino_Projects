int ledr = 13;//Declaro led en pin 13
int ledv = 12;//Declaro led en pin 12
int Trig = 8;//Se ponemos entera Trig
int Echo = 9;//Se ponemos entera Echo
int Tiempo;//Se ponemos Tiempo
int Distancia;//Se ponemos Distancia

void setup(){
 Serial.begin(9600);//Abrimos puertzo serial
 pinMode(8,OUTPUT);//Declaramos como salida Trig
 pinMode(9,INPUT);//Declaramos como entrada Echo
 pinMode(13,OUTPUT);//Declaamos como salida ledr
 pinMode(12,OUTPUT);//Declaramos como salida ledv
}

void loop(){
  digitalWrite(8,HIGH);//Enciende Trig
  delay(1000);//delay 1 ms
  digitalWrite(8,LOW);//Apaga Trig
  Tiempo=pulseIn(9,HIGH);//Tiempo = pulso de entrada enciende Echo
  Distancia = Tiempo/58.2;//Distancia tiempo/velocidad en cm/ms
  Serial.print(Distancia);//Se imprime valor de Distancia
  Serial.println(" Distancia= ");//Se imprime " Distancia= "

  if(Distancia >=10){//Se declara distancia
    digitalWrite(13,HIGH);//Prende led Rojo
    digitalWrite(12,LOW);//Prende led Rojo
  }

  if(Distancia >=15){//Se declara distancia
    digitalWrite(12,HIGH);//Prende led Verde
    digitalWrite(13,LOW);//Prende led Verde
  }
  }
