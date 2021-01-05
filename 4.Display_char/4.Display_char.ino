#include<LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte heart1[8] =
{
    0b00000,
    0b01010,
    0b11111,
    0b11111,
    0b11111,
    0b01110,
    0b00100,
    0b00000
};

byte heart2[8] =
{
    0b00000,
    0b00000,
    0b00100,
    0b01110,
    0b01110,
    0b00100,
    0b00000,
    0b00000
};
byte heart3[8] =
{
    0b00000,
    0b00000,
    0b00100,
    0b01110,
    0b00100,
    0b00000,
    0b00000,
    0b00000
};

byte smile4[8] =
{
    0b00000,
    0b01010,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b01110,
    0b10001
};
byte smile5[8] =
{
    0b00000,
    0b01010,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b11111,
    0b00000
};
byte smile6[8] =
{
    0b00000,
    0b01010,
    0b00000,
    0b00000,
    0b00000,
    0b10001,
    0b01110,
    0b00000
};


byte middleFingre7[8] =
{
    0b00000,
    0b00000,
    0b00000,
    0b01110,
    0b11111,
    0b11111,
    0b01110,
    0b00000
};
byte middleFingre8[8] =
{
    0b00000,
    0b00000,
    0b00100,
    0b01110,
    0b11111,
    0b11111,
    0b01110,
    0b00000
};
byte middleFingre9[8] =
{
    0b00000,
    0b00100,
    0b00100,
    0b01110,
    0b11111,
    0b11111,
    0b01110,
    0b00000
};

void setup()
{
    // lcd.createChar(1, heart1);
    // lcd.createChar(2, heart2);
    // lcd.createChar(3, heart3);
    // lcd.createChar(4, smile4);
    // lcd.createChar(5, smile5);
    // lcd.createChar(6, smile6);
    lcd.createChar(7, middleFingre7);
    lcd.createChar(8, middleFingre8);
    lcd.createChar(9, middleFingre9);
    lcd.begin(16, 2);
    lcd.setCursor(4,0);
    lcd.print("HELLO");

}

// void loop() //heart
// {
//     for(int i = 1; i<=3; i++)
//     {
//         lcd.setCursor(9,1);
//         lcd.write(i);
//         delay(900);
//     }     
//     lcd.setCursor(9,1);
//     lcd.write(2);
//     delay(900);
// }

// void loop() //smile
// {
//     for(int i = 4; i<=6; i++)
//     {
//         lcd.setCursor(5,1);
//         lcd.write(i);
//         delay(900);
//     }     
//     lcd.setCursor(5,1);
//     lcd.write(5);
//     delay(900);
// }

void loop() //middle fingre
{
    for(int i = 7; i<=9; i++)
    {
        lcd.setCursor(8,1);
        lcd.write(i);
        delay(900);
    }     
    lcd.setCursor(8,1);
    lcd.write(8);
    delay(900);
}
