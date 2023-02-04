
const int PIRpin = 2;//pin 2 asignado 

void setup() {

 Serial.begin(9200);//enlase puerto serial
 pinMode(2,INPUT);//pin 2 es salida

}

void loop() {
 int valor = digitalRead(PIRpin);//lee la variable que tenga PIRpin

  if(valor == HIGH){

    Serial.println("intruso");//imprime intruso
 
  }else{

    Serial.println("seguro");//imprime seguro
    
  }

}
