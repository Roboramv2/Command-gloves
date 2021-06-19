int ind = 0;
int thu = 0;

void setup() {
  Serial.begin(9600);
 }

void loop() {
  ind = analogRead(A0);
  thu = analogRead(A1);
  Serial.print(thu);
  Serial.print("   ");
  Serial.print(ind);
  Serial.println(" ");
  delay(500);
  }
