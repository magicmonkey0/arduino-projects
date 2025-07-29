const int redPin = 11;
// const int greenPin = 10;
const int bluePin = 9;

const int lightSensorRed = A0;
const int lightSensorBlue = A1;

int analogValR = 0;
int analogValB = 0;

int redVal = 0;
int blueVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  analogValR = analogRead(lightSensorRed);
  delay(5);
  analogValB = analogRead(lightSensorBlue);
  delay(5);

  Serial.print("Raw sensor values \t Red: ");
  Serial.print(analogValR);
  Serial.print("\t Blue: ");
  Serial.print(analogValB);

  redVal = analogValR / 4;
  blueVal = analogValB / 4;

  Serial.print("Mapped sensor values \t Red: ");
  Serial.print(redVal);
  Serial.print("\t Blue");
  Serial.print(blueVal);

  analogWrite(redPin, redVal);
  analogWrite(bluePin, blueVal);
}
