// define tone buzzer
#define doTone  262
#define reTone  294
#define miTone  330
#define faTone  349
#define solTone 392
#define laTone  440
#define siTone  494
#define do1Tone 524
#define re1Tone 556

// initial pin for push button
const int btnDo   = 2;
const int btnRe   = 3;
const int btnMi   = 4;
const int btnFa   = 5;
const int btnSol  = 6;
const int btnLa   = 7;
const int btnSi   = 8;
const int btnDo1  = 9;
const int btnRe1  = 10;

//initial pin for led
const int led = 11;

// initial pin for buzzer
const int buzzer  = 12;

void setup() {
  Serial.begin(9600);

  pinMode(btnDo, INPUT);
  digitalWrite(btnDo, HIGH);

  pinMode(btnRe, INPUT);
  digitalWrite(btnRe, HIGH);

  pinMode(btnMi, INPUT);
  digitalWrite(btnMi, HIGH);

  pinMode(btnFa, INPUT);
  digitalWrite(btnFa, HIGH);

  pinMode(btnSol, INPUT);
  digitalWrite(btnSol, HIGH);

  pinMode(btnLa, INPUT);
  digitalWrite(btnLa, HIGH);

  pinMode(btnSi, INPUT);
  digitalWrite(btnSi, HIGH);

  pinMode(btnDo1, INPUT);
  digitalWrite(btnDo1, HIGH);

  pinMode(btnRe1, INPUT);
  digitalWrite(btnRe1, HIGH);

  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
    
  if (digitalRead(btnDo) == LOW) {
    tone(buzzer, doTone);
    digitalWrite(led, HIGH);
    
  }
  else if (digitalRead(btnRe) == LOW) {
    tone(buzzer, reTone);
    digitalWrite(led, HIGH);

  }
  else if (digitalRead(btnMi) == LOW) {
    tone(buzzer, miTone);
    digitalWrite(led, HIGH);

  }
  else if (digitalRead(btnFa) == LOW) {
    tone(buzzer, faTone);
    digitalWrite(led, HIGH);

  }
  else if (digitalRead(btnSol) == LOW) {
    tone(buzzer, solTone);
    digitalWrite(led, HIGH);

  }
  else if (digitalRead(btnLa) == LOW) {
    tone(buzzer, laTone);
    digitalWrite(led, HIGH);

  }
  else if (digitalRead(btnSi) == LOW) {
    tone(buzzer, siTone);
    digitalWrite(led, HIGH);

  }
  else if (digitalRead(btnDo1) == LOW) {
    tone(buzzer, do1Tone);
    digitalWrite(led, HIGH);
    
  }
  else if (digitalRead(btnRe1) == LOW) {
    tone(buzzer, re1Tone);
    digitalWrite(led, HIGH);
    
  }
  else {
    noTone(buzzer);
    
  }
  
  delay(30);
  digitalWrite(led, LOW);
}
