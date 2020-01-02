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
  if (analogRead(A2) < 341) {
    digitalWrite(0, LOW);
  } else {
    if (analogRead(A2) > 682) {
      digitalWrite(0, HIGH);
    }
  }
  if (analogRead(A3) < 341) {
    digitalWrite(1, LOW);
  } else {
    if (analogRead(A3) > 682) {
      digitalWrite(1, HIGH);
    }
  }
  if((341<analogRead(A3)<682) && (341<analogRead(A2)<682)){
  	digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }  
  
  delay(10); // Delay a little bit to improve simulation performance
}