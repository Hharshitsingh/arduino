/*

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

*/
#include<LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
byte smile[8] =
{
        0b00000,
        0b00000,
        0b01010,
        0b00000,
        0b10001,
        0b01110,
        0b00000,
        0b00000
};
void setup()
{
    lcd.createChar(2, smile);
    lcd.begin(16,2);
    lcd.setCursor(9, 0);
    lcd.write(2);
    lcd.print("Hello!");
    lcd.setCursor(3, 1);
    lcd.print("HARSHIT SINGH");
    
}
void loop()
{
    lcd.setCursor(0, 0);
    // print the number of seconds since reset:
    lcd.print(millis() / 1000);
    lcd.noDisplay();
    delay(500);
    lcd.display();
    delay(500);
}
