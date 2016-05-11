
/*
 * Blink led
 */
 
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // HIGH == On
  delay(500);
  digitalWrite(13, LOW); // LOW == Off
  delay(500);
}
