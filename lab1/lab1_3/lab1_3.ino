String message = "";
char letter = 0;

void setup() {
  Serial.begin(9600);
}

void loop(){
  while(!Serial.available()){}
  while(Serial.available()){
    letter = Serial.read();
    message += letter;
    delay(2);
  }
  Serial.println(message);
  message = "";
}
