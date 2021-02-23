//including the libraries
#include <AFMotor.h>
//defining pins and variables
//defining motors
AF_DCMotor motor1(2, MOTOR12_8KHZ);
AF_DCMotor motor2(3, MOTOR12_8KHZ);
void setup() {
  motor1.setSpeed(100);
  motor2.setSpeed(100);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(1000);
}
void loop() {
  //moving forward
  forward();
  delay(1000);
  right();
  //moving right
  delay(1000);
  //moving left
  left();
  delay(1000);
  //moving backward
  backward();
  delay(1000);
}

void forward() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}

void right() {
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
}

void left() {
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}

void backward() {
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
}
