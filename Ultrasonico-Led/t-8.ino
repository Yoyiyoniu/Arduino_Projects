int TRIG=2;//se declara variable entera TRIG
int ECHO=3;//se declara variable entera ECHO
int tiempo;//se declara variable entera tiempo
int distancia;//se declara variable entera distncia
int ledR=8;//se declara led en pin 8
int ledV=9;//se declara led en pin 9

void setup() {
  Serial.begin(9600);//se enciende puerto serial
  pinMode(8,OUTPUT);//configuramos como salida pin 8
  pinMode(9,OUTPUT);//configurams como salida pin 9
  pinMode(3,INPUT);//se configura como salida TRIG
  pinMode(2,OUTPUT);//se configura como entrada ECHO
  
}

void loop() {
     
    digitalWrite(2,HIGH);//se enciente pulso TRIG
    delay(1);//espera 1 ms
    digitalWrite(2,LOW);//se apaga pulso TRIG]
    tiempo=pulseIn(3,HIGH);//tiempo=pulso de entrada enciende ECHO
    distancia=tiempo/58.4;//distancia=tiempo/velocidad en cm/ms
    Serial.println("estoyvivo")
    
  if(distancia == 20){ 
    Serial.println("Rojo ");//se imprime valor de distancia
    Serial.println(distancia);//se imprime valor de distancia
    digitalWrite(ledR,HIGH);//enciende ledR
    digitalWrite(ledV,LOW);//apaga ledV
    delay(500);
    }
  if(distancia>=50){
    Serial.println("Verde ");//se imprime valor de distancia
    Serial.println(distancia);//se imprime valor de distancia
    digitalWrite(ledV,HIGH);//enciende ledR
    digitalWrite(ledR,LOW);//enciende ledR
    delay(500);
}
}
