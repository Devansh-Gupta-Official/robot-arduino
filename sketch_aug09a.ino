int p1 = 7;
int p2 = 6;
int p3 = 12;
int p4 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  char control = Serial.read();
  if (control == 'F') {
    digitalWrite(p1, HIGH);
    digitalWrite(p2, LOW);
    digitalWrite(p3, HIGH);
    digitalWrite(p4, LOW);
    delay(2000);
    digitalWrite(p1, LOW);
    digitalWrite(p3, LOW);
    delay(1000);
  }
  else if (control == 'B') {
    digitalWrite(p1, LOW);
    digitalWrite(p2, HIGH);
    digitalWrite(p3, LOW);
    digitalWrite(p4, HIGH);
    delay(2000);
    digitalWrite(p2, LOW);
    digitalWrite(p4, LOW);
    delay(1000);
  }
  else if (control == 'R') {
    digitalWrite(p1, LOW);
    digitalWrite(p2, HIGH);
    digitalWrite(p3, HIGH);
    digitalWrite(p4, LOW);
    delay(2000);
    digitalWrite(p2, LOW);
    digitalWrite(p3, LOW);
    delay(1000);
  }
  else if (control == 'L') {
    digitalWrite(p1, HIGH);
    digitalWrite(p2, LOW);
    digitalWrite(p3, LOW);
    digitalWrite(p4, HIGH);
    delay(2000);
    digitalWrite(p1, LOW);
    digitalWrite(p4, LOW);
    delay(1000);
  }
  else{
    digitalWrite(p1, LOW);
    digitalWrite(p2, LOW);
    digitalWrite(p3, LOW);
    digitalWrite(p4, LOW);
    delay(2000);
//    digitalWrite(p2, LOW);
//    digitalWrite(p4, LOW);
//    delay(1000);
  }
}
