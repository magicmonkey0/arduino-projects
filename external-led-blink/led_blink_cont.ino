int blue = 12;
int white = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 4; i++)
  {
    if (i == 0)
    {
      digitalWrite(blue, HIGH);
      digitalWrite(white, HIGH);
      delay(200);
      digitalWrite(blue, LOW);
      digitalWrite(white, LOW);
      delay(200);
      continue;
    }
    digitalWrite(blue, HIGH);
    delay(200);
    digitalWrite(blue, LOW);
    delay(200);
  }
}
