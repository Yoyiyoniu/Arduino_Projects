const int trig=2;
const int echo=3;
int boton=4;
int Tiempo;
int Distancia;

void setup() {

  pinMode(boton,INPUT);
  Serial.begin(9600);
  pinMode(2,OUTPUT);//ponemos el trig en el 2
  pinMode(3,INPUT);//ponemos el echo en el 3

}

void loop() {
  digitalWrite(2,HIGH);//Enciende Trig
  delay(900);//delay 1 ms
  digitalWrite(3,LOW);//Apaga Trig
  Tiempo=pulseIn(2,HIGH);//Tiempo = pulso de entrada enciende Echo
  Distancia = Tiempo/58.2;//Distancia tiempo/velocidad en cm/ms
  Serial.print("distancia: ");
  Serial.println(Distancia);//Se imprime valor de Distancia
  delay(100);//delay
}

