// подключаем неоходимую библиотеку
#include <LiquidCrystal.h>

// указаем к каким пинам подключен дисплей
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
digitalWrite(9,1);
  // указываем, что наш дисплей имеет 16 символов и 2 строки
  lcd.begin(16, 2);


  

}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.setCursor(0, 5);  // ставим курсор в первую строку и 5ый символ
  lcd.print("Hello");  // выводим сообщение на дисплей
  lcd.setCursor(1, 4);  // сиавим курсор во вторую строку и 4ый символ
  lcd.print("ARDUINOMANIA");  // выводим сообщение на дисплей
  
}
