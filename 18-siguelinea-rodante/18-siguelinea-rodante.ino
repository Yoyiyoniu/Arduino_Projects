int sensor = 12;  // 2 es sensor
int estado;       //variable estado
int anterior;     //variable anterior

//motor 1
int ENA = 10;  // declaramos como variable entero ENA
int IN1 = 9;   // declaramos como variable entero IN1
int IN2 = 8;   // declaramos como variable entero IN2
//motor 2
int ENB = 5;  // declaramos como variable entero ENB
int IN3 = 7;  // declramos como variable entero IN3
int IN4 = 6;  // declaramos como variable entero IN4

void setup() {
  pinMode(ENA, OUTPUT);  //configuramos como salida ENA
  pinMode(IN1, OUTPUT);  //configuramos como saalida IN1
  pinMode(IN2, OUTPUT);  //configuramos como salida IN2
  pinMode(ENB, OUTPUT);  //configuramos como salida ENB
  pinMode(IN3, OUTPUT);  //configuramos como salida IN3
  pinMode(IN4, OUTPUT);  //configuramos como slida IN4

  pinMode(2, INPUT);  //sensor como entrada

  Serial.begin(9600);
}

void loop() {
  estado = digitalRead(sensor);  //lee al sensor

  if (estado == LOW) {
    Serial.println("delante ");  //imprime *delante
    Adelante();                  //pa delante

  } else {

    Serial.println("parado");
    Parar();
  }
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