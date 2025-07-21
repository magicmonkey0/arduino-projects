int led = 13; //LED PIN 13

void setup() {
  // setup pin code
  pinMode(led, OUTPUT);
}

void loop() {
  // main code, run repeatedly:
  // morse: HELLO WORLD

  //H (4 dots: . . . .)
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }

  //inter-character gap (3 units: 1 + 2 units)
  delay(400);

  //E (1 dot: .)
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  //end E
  //inter-character gap
  delay(600);

  //L (. _ . .)
  for (int i = 0; i < 2; i++)
  {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
    digitalWrite(led, HIGH);
    delay(600); // dash = 3 units
    digitalWrite(led, LOW); //turn led off (blink)
    delay(200);
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(600); //inter-character gap
  }

  //O (_ _ _)
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(led, HIGH);
    delay(600);
    digitalWrite(led, LOW);
    delay(200);
  }

  //word gap (7 units = 1400ms)
  delay(1400);

  //W
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(600);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(600);
  digitalWrite(led, LOW);
  delay(600); // inter-character gap

  //O
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(led, HIGH);
    delay(600);
    digitalWrite(led, LOW);
    delay(200);
  }
  delay(400);

  //R
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(600);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(600); //inter-character gap

  //L
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(600);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);

  delay(600); //inter-character gap

  //D
  digitalWrite(led, HIGH);
  delay(600);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);

  delay(2800); //EOM
  
}
