#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);//se asignan pines de conexion

const int PIRpin = 13;//pin 2 asignado 

void setup() {

 Serial.begin(9600);//enlase puerto serial
 pinMode(13,INPUT);//PIR PIN
 pinMode(12,OUTPUT);//led rojo
 lcd.begin(1,2);//se enciende puerta serial
}

void loop() {
 int valor = digitalRead(PIRpin);//lee la variable que tenga PIRpin

  if(valor == HIGH){
    
    digitalWrite(12,LOW);//apaga el led
    digitalWrite(13,HIGH);//el pir detecta
    lcd.print("Peligro ");//escribe peligro
    delay(200);//delay de 0.2segundos
    
  }else{

    digitalWrite(12,HIGH);//prende el led
    digitalWrite(13,LOW);//el pir detecta
    lcd.print("Seguro ");//esccribe seguro
    delay(200);//delay de 0.2segundos

  }
}
