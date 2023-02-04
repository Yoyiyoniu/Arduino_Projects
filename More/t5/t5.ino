int led1= 2;//declaramos valor entero en Pin 2
int led2= 3;//declaramos valor entero en Pin 3
int led3= 4;//declaramos valor entero  en Pin 4
const int BOTON=7;//declaramos constante entera en Pin 7
int val;//declaramos etiqueta como val

void setup(){
  pinMode(2, OUTPUT);//confuguramos como salida Pin 2
  pinMode(3, OUTPUT);//configuramos como salida Pin 3
  pinMode(4, OUTPUT);//configuramos como salida Pin 4
  pinMode(7, INPUT);//configuramos como entrada Pin 7
}

void loop() {
 val=digitalRead(BOTON);//lee BOTON y guarda su valor en val 
 if(val==HIGH){//si val es igual a 1
 digitalWrite(2, HIGH);//enciende led 2
 digitalWrite(3, HIGH);//enciende led 3
 digitalWrite(4, HIGH);//enciende led 4
 delay(2000);//espera 2 seg
 }else{//si no
  digitalWrite(2, LOW);//apaga led 2
  digitalWrite(3, LOW);//apaga led 3
  digitalWrite(4, LOW);//apaga led 4
}
}
