#include <Servo.h>          //include the servo library

int pos;
int servoPin = 9;
int servoDelay = 15;

Servo myServo;              //create a servo object

void setup() {

  Serial.begin(9600);
  myServo.attach(servoPin);        //tell the servo object that its servo is plugged into pin 9

}

void loop() {

  for(pos = 0; pos <= 90; pos = pos + 1) {
    myServo.write(pos);
    delay(servoDelay);
  }

  for(pos = 90; pos >= 0; pos = pos - 1) {
    myServo.write(pos);
    delay(servoDelay);
  }
}

