int thu = 0;
int ind = 0;
int mid = 0;
int rin = 0;
int pin = 0;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}

void loop() {
  thu = analogRead(A0);
  ind = analogRead(A1);
  mid = analogRead(A2);
  rin = analogRead(A3);
  pin = analogRead(A4);
  Serial.print(thu);
  Serial.print(" ");
  Serial.print(ind);
  Serial.print(" ");
  Serial.print(mid);
  Serial.print(" ");
  Serial.print(rin);
  Serial.print(" ");
  Serial.print(pin);
  Serial.print(" ");
  Serial.println(" ");
  delay(300);
}
