int pinnumber = 12;

void dot() {
  digitalWrite(pinnumber, HIGH);
  delay(700);
  digitalWrite(pinnumber, LOW);
  delay(400);
}

void line() {
  digitalWrite(pinnumber, HIGH);
  delay(1500);
  digitalWrite(pinnumber, LOW);
  delay(400);
}

void setup() {
  pinMode(pinnumber, OUTPUT);
}

void loop() {
  // (v = . . . _)
  dot();
  dot();
  dot();
  line();

  // (i = . .)
  dot();
  dot();

  // (c = _ . _ .)
  line();
  dot();
  line();
  dot();

  // (k = _ . _)
  line();
  dot();
  line();

  // (y = _ . _ _)
  line();
  dot();
  line();
  line();

}
