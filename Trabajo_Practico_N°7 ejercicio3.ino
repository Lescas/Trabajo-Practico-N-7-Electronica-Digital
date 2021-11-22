#include <Servo.h>
Servo servo;
#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 0, 1, 2, 3);
#include <Keypad.h> 
const byte rowsCount = 4; 
const byte columsCount = 4; 
char keys[rowsCount][columsCount] = 
{
  { '7','8','9', '%' }, 
  { '4','5','6', 'X' }, 
  { '1','2','3', '-' }, 
  { '#','0','=', '+' } 
}; 
 const byte rowPins[rowsCount] = { 11, 10, 9, 8 };
 const byte columnPins[columsCount] = { 7, 6, 5, 4 };
 Keypad keypad = Keypad(makeKeymap(keys), rowPins, columnPins, rowsCount, columsCount); 
void setup() 
{ 
  lcd.begin(16,2);
  servo.attach(3);
} 
void loop() 
{ 
  char key = keypad.getKey(); 
    if (key =='0'){
      servo.write(0);
      lcd.setCursor(0,0);
      lcd.print(key); 
      lcd.setCursor(0,1);
      lcd.print("girando 0");
      delay(1000);
      lcd.clear(); 
    }
    if (key =='1'){
      servo.write(30);
      lcd.setCursor(0,0);
      lcd.print(key); 
      lcd.setCursor(0,1);
      lcd.print("girando 30");
      delay(500);
      lcd.clear();
    }
    if (key =='2'){
      servo.write(45);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 45");
      delay(500);
      lcd.clear();
    }
    if (key =='3'){
      servo.write(60);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 60");
      delay(500);
      lcd.clear();
    }
    if (key =='4'){
      servo.write(75);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 75");
      delay(500);
      lcd.clear();
    }
    if (key =='5'){
      servo.write(90);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 90");
      delay(500);
      lcd.clear();
    }
    if (key =='6'){
      servo.write(105);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 105");
      delay(500);
      lcd.clear();
    }
    if (key =='7'){
      servo.write(120);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 120");
      delay(500);
      lcd.clear();
    }
    if (key =='8'){
      servo.write(135);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 135");
      delay(500);
      lcd.clear();
    }
    if (key =='9'){
      servo.write(150);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 150");
      delay(500);
      lcd.clear();
    }
    if (key =='%'){  //A
      servo.write(165);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 165");
      delay(500);
      lcd.clear();
    }
    if (key =='X'){ //B
      servo.write(180);
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("girando 180");
      delay(500);
      lcd.clear();
    }
    if (key =='+'){  //D
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("no gira");
      delay(500);
      lcd.clear();
    }
    if (key =='-'){  //C
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("no gira");
      delay(500);
      lcd.clear();
    }
    if (key =='='){
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("no gira");
      delay(500);
      lcd.clear();
    }
    if (key =='#'){
      lcd.setCursor(0,0);
      lcd.print(key);
      lcd.setCursor(0,1);
      lcd.print("no gira");
      delay(500);
      lcd.clear();
    }
}
