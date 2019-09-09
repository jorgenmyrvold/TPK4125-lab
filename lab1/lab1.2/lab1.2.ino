void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  while (!Serial.available()) {
      
  }
  Serial.println("Recived message");
}
