#include <Servo.h>
Servo ser;
int poser = 90;
int value;
void setup()
{
  Serial.begin(9600);
  ser.attach(9);
}
void loop()
{
  while (Serial.available())
  {
    value = Serial.read();
    poser = value ;
    ser.write(poser);
    delay(15);
  }
}
