float tempC; // variable tipo float
int Sensor = 0; //se asigna de entrada del sensor (A0)
 
void setup() {
  pinMode(3, OUTPUT); //declaramos salida pin 3
  pinMode(2, OUTPUT); //declaramos salida pin 2
  Serial.begin(9600);// Configuramos el puerto serial
}
 
void loop() {
  // Con analogRead leemos el sensor, recuerda que es un valor de 0 a 1023
  tempC = analogRead(Sensor); 
   
  // Calculamos la temperatura con la fórmula
  tempC = (5.0 * tempC * 100.0)/1024.0; 

  Serial.print("Temperatura ");//imprime texto temperatura
  Serial.println(tempC); //imprime la temperatura total


  if(tempC <= 26){  

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);  
  }else{

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
}
