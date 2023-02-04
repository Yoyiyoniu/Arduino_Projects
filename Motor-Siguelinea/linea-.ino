int sensor = 2;// 2 es sensor
int estado; //variable estado
int motor = 3;// 2 se pone como motor
int anterior; //variable anterior

void setup() {
  
Serial.begin(9600);//puerto seiral a 9600
pinMode(sensor,INPUT);//sensor como entrada
pinMode(2,OUTPUT);// 2 como salida
pinMode(3,OUTPUT);// 3 como salida
}

void loop() {
  
  estado=digitalRead(sensor);//lee el valor de sensor
  if (estado!= anterior) {
    if (estado==HIGH) {

      Serial.println("linea");//imprime *linea
      digitalWrite(motor,HIGH);//se prende motor      
  
    }else {
    Serial.println("fuera");//imprime *fuera
    anterior=estado;
    }
    }
    delay(500);//delay de 1/2 segundo
}
