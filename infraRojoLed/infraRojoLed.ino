int infra = 8;//se declara infra
int valor = 0;//se declara varible
int led = 7;//se declara led

void setup() {
  Serial.begin(9600);//abrimos puerto serial
  pinMode(infra,INPUT);//infra en entrada
  pinMode(7,OUTPUT);//7 en salida
}
void loop() {

  valor = digitalRead(infra);//declaramos variable infra para leer 
  Serial.println("valor ");//imprime el entero valor
  Serial.print(valor);//imprime laa variable valor
  if(valor == 0){
    
    digitalWrite(7,HIGH);//led se prende

  }

}