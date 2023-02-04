#include <Servo.h>//Se abre libreria

Servo myservo;//Se crea objeto myservo
int pos = 0;//Posicion 0
int ledr = 13;//Declaramos led en pin 13
int piezo = 9;//Declaramos led en pin 9
int Sensor;////Declaramos variable Sensor
float Temperatura;//Declaramos variable Temperatura
int Resultado;//Declaramos variable resultado


void setup(){
  Serial.begin(9600);//Abrimos puerto serial
  pinMode(A0,INPUT);//Configuramos 1 entrada analogica A0 como entrada
  myservo.attach(4);//Se declara servo en pin 4
  myservo.write(pos);//Se escribe posicion
  pos = 0;//Posicion 0
  pinMode(9,OUTPUT);//Declaramos como salida piezo
  pinMode(13,OUTPUT);//Declaramos como salida led
}

void loop(){
  Sensor=analogRead(A0);//Se lee pin A0
  Temperatura =((Sensor * 5000.0/1023)/10);//Se realiza comversion de tem a ml
  Serial.println(Temperatura,2);//Se imprime valor alojado en TEMPERATURA con 2 decimales con salto de linea
  delay(100);//Espera 1 seg.
  Resultado = Temperatura;
  

  if(Resultado >26){//Si Temperatura es mayor o igual a 26
    myservo.write(pos);// Se escribe posicion
      pos = 90;//Posicion 90
      delay(100);//Espera 100 ms.
      myservo.write(pos);// Se escribe posicion
      pos = 0;//Posicion 0
      delay(100);//Espera 100 ms.
      digitalWrite(9,HIGH);//Se enciende piezo 
      tone(piezo,1017,50);//Se indica el piezo sonara la frec.1017 con un largo de 50 
      delay(1000);//Espera 1 seg.
      tone(piezo,820,200);//Se indica que el piezo sonara en la fr.820 con un largo de 200 
     delay(1000);//Espera 1 seg.
     digitalWrite(13,HIGH);//Se enciende Led
     delay(100);//Espera 100 ms
     
      }

   else{
    myservo.write(pos);// Se escribe posicion
    pos = 0;//Posicion 0
    digitalWrite(9,LOW);//Apaga piezo
    digitalWrite(13,LOW);//Apaga Led
    delay(1000);//Espera 1 seg.
    
    }
    }
