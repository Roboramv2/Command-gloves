int buzzer = 3;                                                  //buzzer signal pin
int fing;                                                        //initialise sound variables
//int pin; int rin; int mid; int ind; int thu;                   //initialise knuckles
//int midpin; int midrin; int midmid; int midind; int midthu;    //initialise midjoints

void makesound(float del, int tim) {
  int in = int(tim/(del*2));
  del = int(del*1000);
  for (int i = 0; i < in; i++) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(del);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(del);
  }
}

void readfingers() {
  if (digitalRead(4)){
    fing = 0;
  } else if (digitalRead(5)) {
    fing = 0;
  } else if (digitalRead(6)) {
    fing = 1;
  } else if (digitalRead(7)) {
    fing = 1;
  } else if (digitalRead(8)) {
    fing = 2;
  } else if (digitalRead(9)) {
    fing = 2;
  } else if (digitalRead(10)) {
    fing = 3;
  } else if (digitalRead(11)) {
    fing = 3;
  } else if (digitalRead(12)) {
    fing = 4;
  } else if (digitalRead(13)) {
    fing = 4;
  }
  fing=5;
}

void makemusic(int fin) {
  if (fin==5) {
    delay(100);
  } else if (fin ==0) {
    makesound(0.1, 1000);
    delay(100);
  } else if (fin ==1) {
    makesound(1.0, 1000);
    delay(100);
  } else if (fin ==2) {
    makesound(2.0, 1000);
    delay(100);
  } else if (fin ==3) {
    makesound(3.0, 1000);
    delay(100);
  } else if (fin ==4) {
    makesound(4.0, 1000);
    delay(100);
  }
}

void setup() {
 pinMode(buzzer, OUTPUT);
 for (int i=4; i<14; i++) {
  pinMode(i, INPUT);
 }
 Serial.begin(9600);
}

void loop() {
  readfingers();
  makemusic(fing);
  Serial.println(fing);
}
