int boton=2;
int ledV=3;
int ledR=4;

void setup() {
  pinMode(boton,INPUT);
  pinMode(ledV,OUTPUT);
  pinMode(ledR,OUTPUT);

}

void loop() {
if( ) {

 EncendidolV();

}else{

EncendidolR();

}
} 

void EncendidolR(){
  digitalWrite(ledR,HIGH);
  digitalWrite(ledV,LOW);
}
  void EncendidolV(){
  digitalWrite(ledV,HIGH);
  digitalWrite(ledR,LOW);
}


