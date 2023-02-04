
int ledRojo = 2;//declaramos ledRojo en pin 2
int ledVerde = 3;//declaramos ledVerde en pin 3
int ledAzul = 4;//declaramos ledAzul en pin 4
const int Boton = 5;//declaramos constante entera en pin 5
int on;//declaramos etiqueta on

void setup() {
  pinMode(2, OUTPUT); //declaramos salida pin 2
  pinMode(3, OUTPUT); //declaramos salida pin 3
  pinMode(4, OUTPUT); //declaramos salida pin 4
  pinMode(5, INPUT); //declaramos entradan en pin 5

}

void loop() {

  on = digitalRead (Boton);//lee Boton y guarda su valor en on

  if ( on == HIGH) { //SI on es igual a 1
    digitalWrite(2, HIGH); //enciende ledRojo
    digitalWrite(3, HIGH); //enciende ledVerde
    digitalWrite(4, HIGH); //enciende ledAzul
    delay(2000);//espera 2 segundos

  } else { //SINO

    digitalWrite(2, LOW); //apaga ledRojo
    digitalWrite(3, LOW); //apaga ledVerde
    digitalWrite(4, LOW); //apaga ledAzul

  }


}
