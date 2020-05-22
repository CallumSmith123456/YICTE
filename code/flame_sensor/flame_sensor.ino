//This is set to the digital out of the sensor
int flame = 7; 

void setup() {
  pinMode(flame, INPUT);
  Serial.begin(9600);
}

void loop() {
  //cheak if there is a flame
  if (digitalRead(flame) == HIGH) {
    Serial.println("There is a flame");  
  }
  //check if there is not a flame
  else if (digitalRead(flame) == LOW) {
    Serial.println("There is no flame");
  }

  delay(500);

}
