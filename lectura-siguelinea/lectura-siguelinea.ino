int sensor = 2;// 2 es sensor
int estado; //variable estado
int anterior; //variable anterior

void setup() {
  Serial.begin(9600);//puerto seiral a 9600
  pinMode(2,INPUT);//sensor como entrada

}

void loop() {

  estado=digitalRead(sensor);//lee al sensor

    if (estado == HIGH) {
    
    Serial.println("algo ");//imprime *algo

    }else{

    Serial.println("nada");// imprime *nada

    }
  
}