//This is the pin that the relay is connected to
int pump = 8; 

void setup() {
  pinMode(pump, OUTPUT);
}

void loop() {
  //turn pump off then wait 500ms
  digitalWrite(pump, LOW); 
  delay(500);

  //turn pump on then wait 500ms 
  digitalWrite(pump, HIGH); 
  delay(500);
}
