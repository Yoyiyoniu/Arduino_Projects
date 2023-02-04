
const int piezo =8;//declaramos buzer como 8

void setup() {

pinMode(piezo, OUTPUT);//declaramos buzer como salida

}

void loop() {

  tone (piezo,1017,50);//configuramos tono
  delay(1000);//espera 1 segundo

  tone(piezo,820,200);//tono
  delay(1000);//espera 1 segundo

}
