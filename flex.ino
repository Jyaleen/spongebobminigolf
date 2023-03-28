const int flexPin = A1;
const int ledPin = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int flexValue;
  flexValue= analogRead (flexPin);
  Serial.print("sensor:");
  Serial.println(flexValue);
  if (flexValue>1010)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }
  delay(20);
}
