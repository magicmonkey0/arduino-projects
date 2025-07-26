int blue = 4;   //blue led it connected to D4
int green = 3; 
int white = 2; 

int lightSensorPin = A0; //photoresistor
int analogValue = 0; //resistance value from photoresistor


void setup() {
  //set pins to outputs
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(white, OUTPUT);

}

void loop() {
  analogValue = analogRead(lightSensorPin); //get the value from photoresistor
  if(analogValue < 50) //gets val and if val is low (val<50), the blue led will turn on indicating less light
  {
    digitalWrite(blue, HIGH);
  }
  else if(analogValue >= 50 && analogValue <=100)
  {
    digitalWrite(green, HIGH);
  }
  else
  {
    digitalWrite(white, HIGH);
  }
  delay(200);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(white, LOW);
  //loop will run and keep checking light levels
}
