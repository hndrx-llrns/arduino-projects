int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int ledPin4 = 5;
int ledPin5 = 6;
int ledPin6 = 7;
int ledPin7 = 8;
int ledPin8 = 9;
int buzzerPin = 10;

//LED 8, 7, 6
int pianoKeyA4 = 440; // 3 LEDs up
int pianoKeyB4 = 494; // 2 LEDs up
int pianoKeyC4 = 262; // 1 LED up

//LED 6, 5, 4
int pianoKeyC5 = 523; // 3 LEDs up
int pianoKeyD5 = 587; // 2 LEDs up
int pianoKeyDS5  = 622; // 1 LED up

//LED 4, 3, 2
int pianoKeyE4 = 330; // 3 LEDs up
int pianoKeyE5 = 659; // 2 LEDs up
int pianoKeyF5 = 698; // 1 LED up

//LED 2, 1
int pianoKeyGS4 = 415; // 3 LEDs up

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  //normal speed
  songSegmentA(1.0);
  songSegmentB(1.0);
  songSegmentA(1.0);
  
  //75% speed
  songSegmentA(0.75);
  songSegmentB(0.75);
  songSegmentA(0.75);
  
  //80% speed
  songSegmentA(0.8);
  songSegmentB(0.8);
  songSegmentA(0.8);
}

void songSegmentA (float multiplier) {
   tone(buzzerPin, pianoKeyE5, 300*multiplier);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  
  tone(buzzerPin, pianoKeyDS5, 300*multiplier);
  digitalWrite(ledPin4, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin4, LOW);
  
  tone(buzzerPin, pianoKeyE5, 300*multiplier);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  
  tone(buzzerPin, pianoKeyDS5, 300*multiplier);
  digitalWrite(ledPin4, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin4, LOW);
  
  tone(buzzerPin, pianoKeyE5, 300*multiplier);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  
  tone(buzzerPin, pianoKeyDS5, 300*multiplier);
  digitalWrite(ledPin4, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin4, LOW);
  
  tone(buzzerPin, pianoKeyE5, 300*multiplier);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  
  tone(buzzerPin, pianoKeyB4, 300*multiplier);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  
  tone(buzzerPin, pianoKeyD5, 300*multiplier);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  
  tone(buzzerPin, pianoKeyC5, 300*multiplier);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  
  tone(buzzerPin, pianoKeyA4, 600*multiplier);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  delay(650*multiplier);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8,LOW);
}

void songSegmentB(float multiplier) {
  tone(buzzerPin, pianoKeyC4, 300*multiplier);
  digitalWrite(ledPin6, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin6, LOW);
  
  tone(buzzerPin, pianoKeyE4, 300*multiplier);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  
  tone(buzzerPin, pianoKeyA4, 300*multiplier);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8,LOW);
  
  tone(buzzerPin, pianoKeyB4, 300*multiplier);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  
  tone(buzzerPin, pianoKeyE4, 300*multiplier);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  
  tone(buzzerPin, pianoKeyGS4, 300*multiplier);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  
  tone(buzzerPin, pianoKeyB4, 300*multiplier);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  
  tone(buzzerPin, pianoKeyC5, 300*multiplier);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  
  tone(buzzerPin, pianoKeyE4, 300*multiplier);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(350*multiplier);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
}