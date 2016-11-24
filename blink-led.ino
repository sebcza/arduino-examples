void setup() {
  pinMode(8, OUTPUT);
}
 
void loop() {
  digitalWrite(8, HIGH);
  sleep(1000);
  digitalWrite(8, LOW);
  sleep(1000);
}
