int pinnumber = 12;

void dot() {
  digitalWrite(pinnumber, HIGH);
  delay(700);
  digitalWrite(pinnumber, LOW);
  delay(400);
}

void dash() {
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
  dash();

  // (i = . .)
  dot();
  dot();

  // (c = _ . _ .)
  dash();
  dot();
  dash();
  dot();

  // (k = _ . _)
  dash();
  dot();
  dash();

  // (y = _ . _ _)
  dash();
  dot();
  dash();
  dash();

}
