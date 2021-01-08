int estado = 0;
int rele = 9;

void setup() {
Serial.begin(9600);  
pinMode(rele,OUTPUT);
digitalWrite(rele,HIGH);//apagar el foco
}

void loop() {
  
 if(Serial.available() > 0){
  estado = Serial.read();
 }

 if(estado == 'a'){
  digitalWrite(rele,LOW);
 }

 if(estado == 'b'){
  digitalWrite(rele,HIGH);
 }

}
