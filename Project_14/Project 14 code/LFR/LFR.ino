#include <AFMotor.h>
AF_DCMotor motor1(2); // right motor
AF_DCMotor motor2(3); // left motor
void setup() {
  motor1.setSpeed(150);
  motor1.run(RELEASE);
  motor2.setSpeed(100);
  motor2.run(RELEASE);
  Serial.begin(9600);
}
void loop() {
  int s0 = analogRead(0);//Readings from Ir sensors
  int s1 = analogRead(1);
  int s2 = analogRead(2);
  int s3 = analogRead(3);
  int s4 = analogRead(4);
  if (s0 > 500 && s1 > 500 && s2 > 500 && s3 > 500 && s4 > 500)
  { // going forward
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    delay(200);
  }
  else if (s2 >= 500 && s3 >= 500) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  }
  else if (s3 >= 500 && s4 >= 500 )
  {
    motor1.run(FORWARD);//Right

    motor2.run(RELEASE);
  }
  else if (s0 >= 500 && s1 >= 500)
  { motor1.run(RELEASE);//Left
    motor2.run(FORWARD);
  }
  else
  {
    motor1.run(RELEASE); // both motor off
    motor2.run(RELEASE);
  }
}
