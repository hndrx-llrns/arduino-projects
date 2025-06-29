int ledPin1 = A0;
int ledPin2 = A1;
int ledPin3 = A2;
int ledPin4 = A3;
int ledPin5 = A4;
int ledPin6 = A5;
int ledPin7 = 2;
int ledPin8 = 3;

int btnPin1 = 4;
int btnPin2 = 5;
int btnPin3 = 6;
int btnPin4 = 7;
int btnPin5 = 8;
int btnPin6 = 9;

int buzzerPin = 10;
//led 8 - 6
int pianoKeyG3 = 196;
int pianoKeyA4 = 440; //3 LEDs
int pianoKeyB4 = 493; //2 LEDs
//led 6 - 4
int pianoKeyC4 = 261; //3 LEDs eto
int pianoKeyC5 = 523; //2 LEDs
//led 4 - 2
int pianoKeyD4 = 293; //3 LEDs
int pianoKeyD5 = 587; //2 LEDs
//led 2, 1, 8
int pianoKeyE4 = 329; //3 LEDs eto
int pianoKeyE5 = 659; //2 LEDs
//led 1, 8, 7
int pianoKeyF4 = 349; //3 LEDs
int pianoKeyG4 = 392; //2 LEDs eto


bool prevBtn1 = HIGH;
bool prevBtn2 = HIGH;
bool prevBtn3 = HIGH;
bool prevBtn4 = HIGH;
bool prevBtn5 = HIGH;
bool prevBtn6 = HIGH;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);

  pinMode(btnPin1, INPUT_PULLUP);
  pinMode(btnPin2, INPUT_PULLUP);
  pinMode(btnPin3, INPUT_PULLUP);
  pinMode(btnPin4, INPUT_PULLUP);
  pinMode(btnPin5, INPUT_PULLUP);
  pinMode(btnPin6, INPUT_PULLUP);

  pinMode(buzzerPin, OUTPUT);
  noTone(buzzerPin);

  Serial.begin(9600);
  Serial.println("_______________________________");
  Serial.println("|   <<<< ARDUINO JUKE BOX >>>>  |");
  Serial.println("|                               |");
  Serial.println("|1. Twinkle Twinkle Lil Star    |");
  Serial.println("|2. Baa Baa Black Sheep         |");
  Serial.println("|3. London Bridge is Falling    |");
  Serial.println("|4. Five Little Ducks           |");
  Serial.println("|5. If Ur Happy & You Know it   |");
  Serial.println("|6. Rain Rain Go Away           |");
  Serial.println("|                               |");
  Serial.println("_______________________________");
}

void loop() {
  bool btn1 = digitalRead(btnPin1);
  bool btn2 = digitalRead(btnPin2);
  bool btn3 = digitalRead(btnPin3);
  bool btn4 = digitalRead(btnPin4);
  bool btn5 = digitalRead(btnPin5);
  bool btn6 = digitalRead(btnPin6);

  if (prevBtn1 == HIGH && btn1 == LOW) playTTLS();
  if (prevBtn2 == HIGH && btn2 == LOW) playBBBS();
  if (prevBtn3 == HIGH && btn3 == LOW) playLBF();
  if (prevBtn4 == HIGH && btn4 == LOW) playFLD();
  if (prevBtn5 == HIGH && btn5 == LOW) playIYHAYKI();
  if (prevBtn6 == HIGH && btn6 == LOW) playRRGA();

  // update previous states
  prevBtn1 = btn1;
  prevBtn2 = btn2;
  prevBtn3 = btn3;
  prevBtn4 = btn4;
  prevBtn5 = btn5;
  prevBtn6 = btn6;
}

//Twinkle Twinkle Little Star
void playTTLS() {
  tone(buzzerPin, pianoKeyC4, 300);
  ledDisplay(pianoKeyC4,0);
  tone(buzzerPin, pianoKeyC4, 300);
  ledDisplay(pianoKeyC4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
  tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,300);
}

//Baa Baa Black Sheep
void playBBBS() {
   tone(buzzerPin, pianoKeyC4, 300);
  ledDisplay(pianoKeyC4,300);
  tone(buzzerPin, pianoKeyC4, 300);
  ledDisplay(pianoKeyC4,300);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,300);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,300);
  tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
  tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
    tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
    tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,300);
}

//London Bridge is Falling 
void playLBF() {
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyF4, 300); 
  ledDisplay(pianoKeyF4,0);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
  tone(buzzerPin, pianoKeyF4, 300); 
  ledDisplay(pianoKeyF4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,300);
  tone(buzzerPin, pianoKeyD4, 300); 
  ledDisplay(pianoKeyD4,0);
    tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
    tone(buzzerPin, pianoKeyF4, 300); 
  ledDisplay(pianoKeyF4,300);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
  tone(buzzerPin, pianoKeyF4, 300); 
  ledDisplay(pianoKeyF4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,300);
}

//Five Little Ducks
void playFLD() {
  tone(buzzerPin, pianoKeyC4, 300);
  ledDisplay(pianoKeyC4,300);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,300);
  tone(buzzerPin, pianoKeyF4, 300); 
  ledDisplay(pianoKeyF4,0);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,300);
  tone(buzzerPin, pianoKeyD4, 300);
  ledDisplay(pianoKeyD4,300);
  tone(buzzerPin, pianoKeyD4, 300);
  ledDisplay(pianoKeyD4,300);
}

//If You're Happy & You Know It
void playIYHAYKI() {
  tone(buzzerPin, pianoKeyG4, 200);
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyG4, 200);
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyC4, 300);
  ledDisplay(pianoKeyC4,0);
  tone(buzzerPin, pianoKeyC4, 300);
  ledDisplay(pianoKeyC4,0);
  tone(buzzerPin, pianoKeyC4, 300); 
  ledDisplay(pianoKeyC4,0);
    tone(buzzerPin, pianoKeyC4, 300); 
  ledDisplay(pianoKeyC4,0);
    tone(buzzerPin, pianoKeyC4, 300); 
  ledDisplay(pianoKeyC4,0);
    tone(buzzerPin, pianoKeyC4, 300); 
  ledDisplay(pianoKeyC4,0);
  tone(buzzerPin, pianoKeyB4, 300);
  ledDisplay(pianoKeyB4,0);
    tone(buzzerPin, pianoKeyC4, 300); 
  ledDisplay(pianoKeyC4,0);
  tone(buzzerPin, pianoKeyD4, 300); 
  ledDisplay(pianoKeyD4,300);
}

void playRRGA() {
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,300);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,300);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
  tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,300);
  tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
   tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
   tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
   tone(buzzerPin, pianoKeyA4, 300); 
  ledDisplay(pianoKeyA4,0);
   tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
   tone(buzzerPin, pianoKeyG4, 300); 
  ledDisplay(pianoKeyG4,0);
   tone(buzzerPin, pianoKeyE4, 300); 
  ledDisplay(pianoKeyE4,0);
}


void ledDisplay(int key, int addition) {
  //LEDs 6 to 8
  if (key == pianoKeyA4 || key == pianoKeyB4){
    if (key == pianoKeyA4){
      digitalWrite(ledPin8, HIGH);
  	  digitalWrite(ledPin7, HIGH);
  	  digitalWrite(ledPin6, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin8, LOW);
  	  digitalWrite(ledPin7, LOW);
  	  digitalWrite(ledPin6, LOW);
    }
    else {
      digitalWrite(ledPin7, HIGH);
  	  digitalWrite(ledPin6, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin7, LOW);
  	  digitalWrite(ledPin6, LOW);
    }
  }
  //LEDs 4 to 6
  if (key == pianoKeyC4 || key == pianoKeyC5){
    if (key == pianoKeyC4){
      digitalWrite(ledPin6, HIGH);
  	  digitalWrite(ledPin5, HIGH);
  	  digitalWrite(ledPin4, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin6, LOW);
  	  digitalWrite(ledPin5, LOW);
  	  digitalWrite(ledPin4, LOW);
    }
    else {
      digitalWrite(ledPin5, HIGH);
  	  digitalWrite(ledPin4, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin5, LOW);
  	  digitalWrite(ledPin4, LOW);
    }
  }
  //LEDs 2 to 4
  if (key == pianoKeyD4 || key == pianoKeyD5){
    if (key == pianoKeyD4){
      digitalWrite(ledPin4, HIGH);
  	  digitalWrite(ledPin3, HIGH);
  	  digitalWrite(ledPin2, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin4, LOW);
  	  digitalWrite(ledPin3, LOW);
  	  digitalWrite(ledPin2, LOW);
    }
    else {
      digitalWrite(ledPin3, HIGH);
  	  digitalWrite(ledPin2, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin3, LOW);
  	  digitalWrite(ledPin2, LOW);
    }
  }
  //LEDs 1, 2, 8
  if (key == pianoKeyE4 || key == pianoKeyE5){
    if (key == pianoKeyE4){
      digitalWrite(ledPin8, HIGH);
  	  digitalWrite(ledPin2, HIGH);
  	  digitalWrite(ledPin1, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin8, LOW);
  	  digitalWrite(ledPin2, LOW);
  	  digitalWrite(ledPin1, LOW);
    }
    else {
      digitalWrite(ledPin2, HIGH);
  	  digitalWrite(ledPin1, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin2, LOW);
  	  digitalWrite(ledPin1, LOW);
    }
  }
  //LEDs 1, 7, 8
  if (key == pianoKeyF4 || key == pianoKeyG4){
    if (key == pianoKeyC4){
      digitalWrite(ledPin8, HIGH);
  	  digitalWrite(ledPin7, HIGH);
  	  digitalWrite(ledPin1, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin8, LOW);
  	  digitalWrite(ledPin7, LOW);
  	  digitalWrite(ledPin1, LOW);
    }
    else {
      digitalWrite(ledPin7, HIGH);
  	  digitalWrite(ledPin1, HIGH);
  	  delay(350 + addition);
  	  digitalWrite(ledPin7, LOW);
  	  digitalWrite(ledPin1, LOW);
    }
  }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
