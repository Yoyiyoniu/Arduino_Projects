//motor 1
int ENA = 10;  //declaramos como variable entero ENA
int IN1 = 9;   //declaramos como variable entero IN1
int IN2 = 8;   //declaramos como variable entero IN2
//motor 2
int ENB = 5;  //dclaramos como variable entero ENB
int IN3 = 7;  //declramos como variable entero IN3
int IN4 = 6;  //declaramos como variable entero IN4

void setup() {  
  pinMode(ENA, OUTPUT);  //configuramos como salida ENA
  pinMode(IN1, OUTPUT);  //configuramos como saalida IN1
  pinMode(IN2, OUTPUT);  //configuramos como salida IN2
  pinMode(ENB, OUTPUT);  //configuramos como salida ENB
  pinMode(IN3, OUTPUT);  //configuramos como salida IN3
  pinMode(IN4, OUTPUT);  //configuramos como slida IN4
}

void loop() {
  Adelante();   //declaramos subrutina Adelante
  delay(5000);  //espera 5 seg
  Atras();      //declaramos subrutina Atras
  delay(2000);  //espera 2 seg
  Izquierda();  //declaramos subrutina Izquierda
  delay(2000);  //espera 2 seg
  Derecha();    //declaramos subrutina Derecha
  delay(2000);  //espera 2 seg
  Parar();      //declaramos subrutina Parar
  delay(5000);  //espera 5 seg
}
void Adelante() {
  //motor A
  digitalWrite(IN1, HIGH);  //enciende IN1
  digitalWrite(IN2, LOW);   //apaga IN2
  analogWrite(ENA, 100);    //velocidad igual a 100
  //motor B
  digitalWrite(IN3, HIGH);  //enciende IN3
  digitalWrite(IN4, LOW);   //apaga IN4
  analogWrite(ENB, 100);    //velocidad igual a 100
}
void Atras() {
  //motor A
  digitalWrite(IN1, LOW);   //apaga IN1
  digitalWrite(IN2, HIGH);  //enciende IN2
  analogWrite(ENA, 100);    //velocidd igual a 100
  //motor B
  digitalWrite(IN3, LOW);   //apaga IN3
  digitalWrite(IN4, HIGH);  //apaga IN4
  analogWrite(ENB, 100);    //velocidad igual a 100
}
void Izquierda() {
  //motor A
  digitalWrite(IN1, LOW);   //apaga IN1
  digitalWrite(IN2, HIGH);  //enciende IN2
  analogWrite(ENA, 50);     //velocidad igual a 100
  //motor B
  digitalWrite(IN3, HIGH);  //enciende IN3
  digitalWrite(IN4, LOW);   //apaga IN4
  analogWrite(ENB, 50);     //velocidad igual a 50
}
void Derecha() {
  //motor A
  digitalWrite(IN1, HIGH);  //enciende IN1
  digitalWrite(IN2, LOW);   //apaga IN2
  analogWrite(ENA, 50);     //velocidad igual a 50
  //motor B
  digitalWrite(IN3, LOW);   //apaga IN3
  digitalWrite(IN4, HIGH);  //enciende IN4
  analogWrite(ENB, 50);     //velocidad igual a 50
}
void Parar() {
  //motor A
  digitalWrite(IN1, LOW);  //apaga IN1
  digitalWrite(IN2, LOW);  //apaga IN2
  analogWrite(ENA, 50);    //velocidad igual a 50
  //motor B
  digitalWrite(IN3, LOW);  //apaga IN3
  digitalWrite(IN4, LOW);  //apaga IN4
  analogWrite(ENB, 50);    //velocidad igual a 50
}