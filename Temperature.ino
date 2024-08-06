#include<stdio.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd(D0,D1, D2, D3, D4, D5);

void setup() 
{

  pinMode(A0, INPUT);
  lcd.begin(16, 2); 
}

void loop() 
{
  int temp = analogRead(A0);
  
  lcd.setCursor(0,0);
  lcd.print("D= ");
  lcd.setCursor(4,0);
  lcd.print(temp);
  lcd.setCursor(0,1);
  lcd.print("Temp= ");
  lcd.setCursor(5,1);
  lcd.print((temp*3.3)/10);
  lcd.setCursor(11, 1);
  lcd.print("A= ");
  lcd.setCursor(14,1);
  lcd.print(temp*3.3);
  delay(100);
}
