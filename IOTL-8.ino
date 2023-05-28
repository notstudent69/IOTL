void setup() {
  Serial.begin(9600);
  Serial.println("input the number");
}

void loop() {

  int input = Serial.parseInt(); 
  int inputSquared = sq(input);
  Serial.println(int(inputSquared));

  delay(5000);
}
