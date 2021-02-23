char switchstate;
void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}
void loop() {
  while (Serial.available() > 0) {
    switchstate = Serial.read();
    Serial.print(switchstate);
    Serial.print("\n");
    delay(15);
    if (switchstate == '1') {
      digitalWrite(5, HIGH);
    }
    else if (switchstate == '0') {
      digitalWrite(5, LOW);
    }
  }
}
