int blueLed = 9;
int analogVal = 0;
int temp = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  analogVal = analogRead(A0);
  delay(5);
  
  Serial.println(sensorValue);
  delay(1);

  temp = analogVal / 4;

  analogWrite(blueLed, temp);
}
