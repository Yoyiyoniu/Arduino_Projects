#include <LiquidCrystal.h> //incluimos libreria
LiquidCrystal lcd(7,6,5,4,3,2); //declaramos el lcd

void setup() {
lcd.begin(16,2);

}

void loop() {
lcd.setCursor(0,0); //centramos el mensaje
lcd.print("Alarma activa");// colocamos mensaje 
lcd.display(); //declaramos el display
delay(500); //delay de 1/2 segundo
lcd.noDisplay(); //apagamos el lcd
delay(500); //delay de 1/2 segundo
 
}
