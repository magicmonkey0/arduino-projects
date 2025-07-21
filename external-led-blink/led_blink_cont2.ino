int blue = 12;
int white = 8;

void setup() {
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
}

void loop() {
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(blue, LOW);
  delay(1000);

  digitalWrite(white, HIGH);
  delay(1000);
  digitalWrite(white, LOW);
  delay(1000);
}
