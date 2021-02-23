#define IN1 9 //Define Arduino_PIN-9 as IN1
#define IN2 10 //Define Arduino_PIN-10 as IN2
#define IN3 11 //Define Arduino_PIN-11 as IN3
#define IN4 12 //Define Arduino_PIN-12 as IN4
#define ENA 5 //Define Arduino_PWM_PIN-5 as ENA
#define ENB 6 //Define Arduino_PWM_PIN-6 as ENB
int motor_speed;
void setup() {
  Serial.begin(9600);
  Serial.println("GPIO test!");
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  analogWrite(5, 210);
  analogWrite(6, 210);
}
void loop() {
  int ldrright = digitalRead(7);
  int ldrleft = digitalRead(8);
  if (ldrright == 0 && ldrleft == 0) {
    Serial.println("F");
    move_forward();
  }
  if (ldrright == 0 && ldrleft == 1) {
    Serial.println("R");
    turn_right();
  }
  if (ldrright == 1 && ldrleft == 0) {
    Serial.println("L");
    turn_left();
  }
  if (ldrright == 1 && ldrleft == 1) {
    Serial.println("S");
    move_stop();
  }
  delay(100);
}
void move_forward() {
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
}
void move_backward() {
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
}
void turn_right() {
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
}
void turn_left() {
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}
void move_stop() {
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}
