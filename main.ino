#include <Servo.h>          //include the servo library

int pos;
int servoPin = 9;
int servoDelay = 15;
int flexPin = A1;
int ledPin = 8;

Servo myServo;              //create a servo object


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
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

  int flexValue;
  flexValue= analogRead (flexPin);
  Serial.print("sensor:");
  Serial.println(flexValue);

  if (flexValue>1010) {
    digitalWrite(8,HIGH);
  }
  else {
    digitalWrite(8,LOW);
  }
  
  delay(20);
}
