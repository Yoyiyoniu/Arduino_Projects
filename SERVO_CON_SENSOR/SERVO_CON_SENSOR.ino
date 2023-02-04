#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);//se asignan pines de conexion

const int LDRPIN;
const int valor;

void setup() {

  pinMode(A0,INPUT);
  
}

void loop() {

  int input=analogRead(LDRPIN);
  if(input == HIGH){

   lcd.print("Nada ");
    
  }else{

   lcd.print("ALGO "); 
    
  }

   
}
