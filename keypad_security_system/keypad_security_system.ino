#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

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

//Password of the System
String password = "A6B11C25";

String pwIn = "";
String displayIn = "";
bool login = false;
int attempts = 0;

void setup () {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1, 0);
  lcd.print("Enter Password:");
  Serial.println(pwIn);
  Serial.println(password);
}

void loop () {
  char keypadIn = keypad.getKey();
  if (keypadIn && attempts != 3 && login == false){
    if(keypadIn != '#'){
      pwIn = pwIn + String(keypadIn);
      verifyInput();
    }
    else if (keypadIn == '#' && attempts != 3){
      login = authenticate(password == pwIn);
      Serial.println(login);
      pwIn = "";
      Serial.println(pwIn);
      displayIn = "";
      Serial.println(displayIn);
    }
  }
}

//Displays input in the serial monitor and asterisks inputs on LCD
void verifyInput () {
  Serial.println(pwIn);
  lcd.setCursor(0, 1);
  displayIn = displayIn + "*";
  lcd.print(displayIn);
}

//Authenticates input
//includes counter for failed attempts 
bool authenticate(bool value) {
  if (value == false){
    attempts += 1;
    lcd.clear();
    lcd.setCursor(4, 0);
    lcd.print("Invalid");
    lcd.setCursor(4, 1);
    lcd.print("Password");
    delay(2000);
    if (attempts != 3){
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Try Again in 3");
      lcd.setCursor(1, 1);
      lcd.print("Attempts:" + String(attempts));
      delay(1000);
      lcd.setCursor(1, 0);
      lcd.print("Try Again in 2");
      delay(1000);
      lcd.setCursor(1, 0);
      lcd.print("Try Again in 1");
      delay(1000);
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Enter Password:");
      return false;
    }
    //Disable keypad at third failed attempt.
    else if (attempts == 3){
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print("Keypad");
      lcd.setCursor(4, 1);
      lcd.print("Disabled.");
      return false;
  }
  }
  //Screen display if password is correct.
  else{
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("WELCOME BACK,");
    lcd.setCursor(4, 1);
    lcd.print("MASTER");
    return true;
  }
}

