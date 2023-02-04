int echo = 3;
int trig = 2;
int Tiempo;//Se ponemos Tiempo
int Distancia;//Se ponemos Distancia

int ledR = 8;
int ledV = 9;

void setup() {
  Serial.begin(9600);//Abrimos puerto serial

  pinMode(ledR,OUTPUT);
  pinMode(ledV,OUTPUT);
  
  pinMode(3,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);//Enciende Trig
  delay(200);//delay 1 ms
  digitalWrite(3,LOW);//Apaga Trig
  Tiempo=pulseIn(2,HIGH);//Tiempo = pulso de entrada enciende Echo
  Distancia = Tiempo/58.2;//Distancia tiempo/velocidad en cm/ms
  Serial.print("distancia: ");
  Serial.println(Distancia);//Se imprime valor de Distancia

  if(Distancia >= 10){
    digitalWrite(ledV,HIGH);
    delay(500);

  }else{
    digitalWrite(ledR,HIGH);
    delay(500);

  }
}
