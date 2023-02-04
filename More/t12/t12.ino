#include <LiquidCrystal.h>//se icluye libreta
LiquidCrystal lcd(7,6,5,4,3,2);//se asignan pines de conexion

int a = 10;//a es igual a 10
int b = 11;//b es igual a 11
int c = 4;//c es igual a 4
int r; //r es resultado

void setup() {

 lcd.begin(1,2);//se enciende puerta serial

}

void loop() {

  r = a + b + c;//sumas

  lcd.setCursor(2,0);
  
  if(r == 25){//si resultado es igual a 25 se prende lcd

   lcd.print("25");//lcc se neciende
    
  }else{

    lcd.print("Error");//sino es igual a 25 dice lcd error
    
  }

}
