/* CDS5MM ~ CDS20MM Value [S003 ~ S006] : http://rdiot.tistory.com/66 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004

int sensorPin1 = A0;
int sensorPin2 = A1;
int sensorPin3 = A2;
int sensorPin4 = A3;

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");
}

void loop()
{
  int rate1 = analogRead(sensorPin1);
  int rate2 = analogRead(sensorPin2);
  int rate3 = analogRead(sensorPin3);
  int rate4 = analogRead(sensorPin4);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("[1]CDS05MM=" + (String)rate1);
  lcd.setCursor(0,1);
  lcd.print("[2]CDS10MM=" + (String)rate2);
  lcd.setCursor(0,2);
  lcd.print("[3]CDS15MM=" + (String)rate3);
  lcd.setCursor(0,3);
  lcd.print("[4]CDS20MM=" + (String)rate4);

  delay(200);
}
