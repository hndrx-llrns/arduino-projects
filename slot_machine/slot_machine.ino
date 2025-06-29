#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

//Slot machine using LCD display and keypad

// (address, columns, rows)
LiquidCrystal_I2C lcd(0x20, 16, 2);  

const byte ROWS = 4; // 4 rows
const byte COLS = 4; // 4 columns
char keys[ROWS][COLS] = {
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};

// Connect to the row & column pinouts of the keypad
byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2};    
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup () {
  lcd.init();
  lcd.backlight();
}

void loop () {
  String randNumOut;
  char keypadIn = 'A';
  while(keypadIn == 'A') {
    randNumOut = randNum();
    keypadIn = keypad.getKey();
    delay(250);
  }
  if (keypadIn == '0') {
    check(randNumOut);
    delay(5000);
  }
  else if (keypadIn == '1'){
    check("5555");
    delay(5000);
  }
}

//Slot Machine Value Generator
String randNum () {
  lcd.clear();
  int num1 = random(1, 9);
  int num2 = random(1, 9);
  int num3 = random(1, 9);
  int num4 = random(1, 9);
  lcd.setCursor(6, 0);
  String numCombi = String(num1) + String(num2) + String(num3) + String(num4);
  lcd.print(numCombi);
  return numCombi;
}

//Verify if all digits are equal
void check (String value) {
  bool check1 = value[0] == value[1];
  bool check2 = value[2] == value[3];
  bool check3 = check1 == check2;
  if (check1 == false || check2 == false || check3 == false){
    messageLoss(value);
  } 
  else {
    messageWin(value);
  }
}

//Message if Loss
void messageLoss (String value) {
  String loss = "YOU LOSS!!!";
  for (int i = 0; i <=6; i++){
    lcd.clear();
  	lcd.setCursor(6, 0);
  	lcd.print(value);
  	lcd.setCursor(3, 1); 
  	lcd.print(loss);
    delay(250);
  }
}

//Message if Win
void messageWin (String value) {
  String win = "YOU WON!!!";
  for (int i = 0; i <= win.length()+ 6; i++) {
    lcd.clear();
    lcd.setCursor(6, 0);
    lcd.print(value);
    lcd.setCursor(i, 1); //Move message to the right
    lcd.print(win);
    delay(300);
  }
}

