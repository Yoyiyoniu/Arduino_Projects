
const int LDRPin= A0;//declaramos constante entera LDRPin
int LED = 12;//declaramos valor entero Led en Pin12
const int valor = 200;//declaramos constante entera llamada valor=200

void setup() {

pinMode(A0,INPUT);//configuramos entrada analogica AO como entrada
pinMode(LED,OUTPUT);//configuramos como salida el LED
Serial.begin(9600);//encendemos puerta serial

}

void loop() {
int input = analogRead(LDRPin);//A0 lee el valor de LDRPin
if(input>valor){//si la entrada es mayor a valor
  digitalWrite(LED, HIGH);//enciende el LED
}
 else{
  digitalWrite(LED, LOW);//SINO
  Serial.print("Valor LDR");//imprime el mensaje "valor LDR"
  Serial.println(valor);//imprime el contenido de etiqueta valor
 }
}
