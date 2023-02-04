
int led = 11; //led en pin 11
int i; //declaramos i


void setup() {

  pinMode(11,OUTPUT); //declaramos pin 11 en salida
  analogWrite(led,0);  //declaramos led en apagado

}

void loop() {

for(i=0; i<=255; i++){

  analogWrite(led,i);// led se activa con i
  delay(10);//delay de 10 milisegundos
}
for(i=254; i>=0; i--){

  analogWrite(led,i);// led se activa con i
  delay(10);//delay de 10 milisegundos
}
}
