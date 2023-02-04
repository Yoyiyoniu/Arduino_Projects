
int a;//declaramos a como valor

void setup() {
for(a=3;a <= 11 ;a ++){ //declaramos "a" igual a 3,"a" menos o igual a "10" y "a" se incrementa 1
pinMode(a, OUTPUT);//configuramos salida a
digitalWrite(a, LOW);//apaga a
}
}

void loop() {

for(a=3;a <= 11; a++){ //configurmos a igual a 3, a menor o igual a 10 y se incrementa 1
digitalWrite(a, HIGH);//enciende a
delay(1000);//espera 1 segundo
digitalWrite(a, LOW); //apaga a
}
for(a=11;a >= 3; a--){ //configuramos a igual a 10, a mayor o igual a 3 y a decrementa
delay(1000);//espera 1 segundo
digitalWrite(a,LOW);//apaga a
}
}
