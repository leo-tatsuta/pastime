const int DIR  = 5;
const int STEP = 2;
int pulse = 600;

void setup() {
  pinMode(DIR, OUTPUT);
  pinMode(STEP, OUTPUT);
  digitalWrite(DIR, LOW);
  digitalWrite(STEP, LOW);
}

void loop() {
  
  digitalWrite(DIR, HIGH);

  for (int i=0; i<200; i++) {
    digitalWrite(STEP, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(STEP, LOW);
    delayMicroseconds(pulse);
  }

  delay(1000);
  
  digitalWrite(DIR, LOW);
  
  for (int i=0; i<200; i++) {
    digitalWrite(STEP, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(STEP, LOW);
    delayMicroseconds(pulse);
  }

  delay(1000);

}
