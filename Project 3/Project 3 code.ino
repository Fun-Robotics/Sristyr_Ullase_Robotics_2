void setup() 
{ 
  Serial.begin(9600); 
  pinMode(7, OUTPUT);

}

void loop() {
  int ldrStatus = analogRead(0);
    if (ldrStatus <=300) { digitalWrite(7, HIGH); }
    else {
          digitalWrite(7, LOW); 
          }
}
