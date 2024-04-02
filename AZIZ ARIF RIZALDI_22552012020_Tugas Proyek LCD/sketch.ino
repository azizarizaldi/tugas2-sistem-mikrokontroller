#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  Serial.begin(9600);
  lcd.init(); 
}

void loop() {
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("22552012020");
  lcd.setCursor(0,1);
  lcd.print("Aziz Arif Rizaldi");
}
