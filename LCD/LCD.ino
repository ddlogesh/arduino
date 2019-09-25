#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(15,0);
  lcd.autoscroll();
  lcd.print("K");
  delay(500);
  lcd.print("A");
  delay(500);
  lcd.print("L");
  delay(500);
  lcd.print("A");
  delay(500);
  lcd.print("I");
  delay(500);
  lcd.print("M");
  delay(500);
  lcd.print("A");
  delay(500);
  lcd.print("H");
  delay(500);
  lcd.print("A");
  delay(500);
  lcd.print("L");
  delay(500);
  lcd.print(" ");
  lcd.print("C");
  delay(500);
  lcd.print("O");
  delay(500);
  lcd.print("O");
  delay(500);
  lcd.print("L");
  delay(500);
  lcd.print("D");
  delay(500);
  lcd.print("R");
  delay(500);
  lcd.print("I");
  delay(500);
  lcd.print("N");
  delay(500);
  lcd.print("K");
  delay(500);
  lcd.print("S");
  delay(500);
  lcd.clear();
}

/*
  lcd.print("    ");
  lcd.setCursor(15,1);
  lcd.print("T");
  delay(500);
  lcd.print("H");
  delay(500);
  lcd.print("I");
  delay(500);
  lcd.print("R");
  delay(500);
  lcd.autoscroll();
  lcd.print("U");
  delay(500);
  lcd.print("V");
  delay(500);
  lcd.print("E");
  delay(500);
  lcd.print("R");
  delay(500);
  lcd.print("K");
  delay(500);
  lcd.print("A");
  delay(500);
  lcd.print("D");
  delay(500);
  lcd.print("U");
  delay(500);
  lcd.print(",");
  lcd.print("C");
  delay(500);
  lcd.print("H");
  delay(500);
  lcd.print("E");
  delay(500);
  lcd.print("N");
  delay(500);
  lcd.print("N");
  delay(500);
  lcd.print("A");
  delay(500);
  lcd.print("I");
  delay(500);
  lcd.print("-");
  delay(500);
  lcd.print("6");
  delay(500);
  lcd.print("0");
  delay(500);
  lcd.print("0");
  delay(500);
  lcd.print("0");
  delay(500);
  lcd.print("7");
  delay(500);
  lcd.print("7");
  delay(500);
  lcd.print(" ");
*/
