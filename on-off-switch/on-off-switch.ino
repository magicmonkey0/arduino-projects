int buttonA = 9;
int buttonB = 8;
int led = 4;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonA) == LOW)
  {
    digitalWrite(led, HIGH);
  }
  if(digitalRead(buttonB) == LOW)
  {
    digitalWrite(led, LOW);
  }
  
}
