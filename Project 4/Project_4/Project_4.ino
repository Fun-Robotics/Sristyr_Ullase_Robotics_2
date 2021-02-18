void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(1);
  Serial.println(value); 
  delay(1000);
}
