

void testLoop() {
  digitalWrite(dispatchRLed, HIGH);
  digitalWrite(dispatchLLed, LOW);
  delay(500);
  digitalWrite(dispatchRLed, LOW);
  digitalWrite(dispatchLLed, HIGH);
  delay(500);
}
