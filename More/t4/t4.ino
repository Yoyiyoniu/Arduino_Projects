 
int led = 6;//declaramos valor entero en pin 6
const int boton = 7;//declaramos constante en pin 7
int val; //declaramos etiqueta val

void setup() {

  pinMode(6, OUTPUT);//configuramos como salida pin 6
  pinMode(7, INPUT);//configuramos como entrada pin 7
}

void loop() {

  val = digitalRead(boton);//lee BOTON y guarda su valor en val
  if(val ==HIGH){//SI val es igual a 1
  digitalWrite (6,HIGH); //enciende led 
            
  }else{//SINO
  digitalWrite(6,LOW);//apaga led

    
  }
  
}
