void setup()
{
  pinMode(A2, INPUT);
  pinMode(0, OUTPUT);
  pinMode(A3, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if (analogRead(A2) > 682) {
    digitalWrite(0, HIGH);
  } else {
    if (analogRead(A2) < 341) {
      digitalWrite(0, LOW);
    }
  }
  if (analogRead(A3) > 682) {
    digitalWrite(1, HIGH);
  } else {
    if (analogRead(A3) < 341) {
      digitalWrite(1, LOW);
    }
  }
  if ((analogRead(A2) > 341 && analogRead(A2) < 682) && (analogRead(A3) > 341 && analogRead(A3) < 682)) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
}
