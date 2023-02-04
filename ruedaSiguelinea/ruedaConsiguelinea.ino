#include <AFMotor.h>
AF_DCMotor motor1 (1);
AF_DCMotor motor2 (2);
int velosidad;

int sensor = A12;// 2 es sensor
int estado; //variable estado
int anterior; //variable anterior

void setup() {

  Serial.begin(9600);//se prende monitor serial
  pinMode(2,INPUT);//sensor como entrada
  

}
void loop() {

  estado=digitalRead(sensor);//lee al sensor

    if (estado == HIGH) {
    adelante();
    Serial.println("delante");//imprime *algo

    }else{

    Serial.println("parado");// imprime *nada
    }
}
void adelante(){
motor1.run(FORWARD);
motor2.run(FORWARD);
control();
}
void control() {
for (velosidad=0; velosidad<160; velosidad+=2) {
}
motor1.setSpeed(velosidad);
motor2.setSpeed(velosidad);
}