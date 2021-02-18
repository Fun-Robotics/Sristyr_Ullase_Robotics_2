#include "SevSeg.h"
SevSeg sevseg;
int buttonPin = 10; // the number of the pushbutton pin
// variables will change:
void setup(){
 byte numDigits = 1;
 byte digitPins[] = {};
 byte segmentPins[] = {3, 2, 8, 7, 6, 4, 5, 9};
 bool resistorsOnSegments = true;
 sevseg.begin(COMMON_ANODE, numDigits, digitPins,
segmentPins, resistorsOnSegments);
 sevseg.setBrightness(90);
// initialize the pushbutton pin as an input:
pinMode(buttonPin, INPUT);
}
void loop()
{
// read the state of the pushbutton value:
int buttonState = digitalRead(buttonPin);

if (buttonState == HIGH)
{
sevseg.setNumber(random(1,7));
sevseg.refreshDisplay();
}
}
