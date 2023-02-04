float tempC; // variable tipo float
int Sensor = 0; //se asigna de entrada del sensor (A0)
 
void setup() {
  
  Serial.begin(9600);// Configuramos el puerto serial
 
}
 
void loop() {
  // Con analogRead leemos el sensor, recuerda que es un valor de 0 a 1023
  tempC = analogRead(Sensor); 
   
  // Calculamos la temperatura con la fórmula
  tempC = (5.0 * tempC * 100.0)/1024.0; 

  Serial.print("Temperatura ");//imprime texto temperatura
  Serial.println(tempC); //imprime la temperatura total

  delay(1000);//delay de 1 seg 
}
