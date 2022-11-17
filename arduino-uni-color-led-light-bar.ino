int pins[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

void setup() {

  for (int i = 0; i < 10; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void setSize(int size) {

  for (int i = 0; i < 10; i++) {

    if (i + 1 <= size) {
      digitalWrite(pins[i], HIGH);
    } else {
      digitalWrite(pins[i], LOW);
    }
  }
}

void loop() {
  for (int i = 0; i <= 10; i++) {
    setSize(i);
    delay(250);
  }
}
