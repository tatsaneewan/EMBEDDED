void setup() {
  pinMode(A1, OUTPUT);
}

void dot() {
  digitalWrite(A1, HIGH);   
  delay(500);                      
  digitalWrite(A1, LOW);   
  delay(500);                  
}
void dash() {
  digitalWrite(A1, HIGH);   
  delay(2000);                      
  digitalWrite(A1, LOW);   
  delay(2000);      
}

void loop() {
  dot();
  dash();
}
