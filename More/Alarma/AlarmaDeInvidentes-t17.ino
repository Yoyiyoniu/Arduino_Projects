
const int PIRpin = 13;//pin 13 asignado 

void setup() {

 Serial.begin(9600);//enlase puerto serial
 pinMode(13,INPUT);//pin 2 es salida
 pinMode(12,OUTPUT);//led rojo
 pinMode(11,OUTPUT);//Buzzer
}

void loop() {
 int PIR = digitalRead(PIRpin);//lee la variable que tenga PIRpin

  if(PIR == HIGH){

    Serial.println("Cuidado ");//escribe cuidado
    digitalWrite(13,LOW);//detecta el pirpir
    
  }else{

    Serial.println("Seguro ");//escribe seguro  
    digitalWrite(13,HIGH);//detecta el pirpir
    
  }

}
