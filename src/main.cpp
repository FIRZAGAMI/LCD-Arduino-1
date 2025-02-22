#include <Arduino.h>
LiquidCrystal_I2C lcd(0x27, 16 ,2);

//Teks 1-5
//Mendeklarasikan dan menginisialisasikan sebuah variabel
//bernama teks1 yang bertipe data String
//dengan nilai awal"Selamat Datang"
String teks1 ="Latihan Arduino";

String teks2 ="Simulasi LCD I2C";
String teks3 ="Sekolah BQ ";
String teks4 ="Islamic Boarding School";
String teks5 ="Firza Al-katiri";
String teks6 ="kelas:8-B";


void setup() {
  //inisialisasi LCD
  lcd.init();

  //Nyalakan lampu latar
  lcd.backlight();
}

void loop() {
  //Teks 1
  lcd.setCursor(0, 0);
  lcd.print(teks1);

  //Teks 
  lcd.setCursor(0, 1);
  lcd.print(teks2);
  
  //Menunda eksekusi program selama 2000 milidetik atau 2 detik
  delay(2000);

  //Menghapus seluruh tampilan pada layar LCD
  lcd.clear();

  //Membuat Teks 4 bergeser ke kiri
  for (int i = teks3.length() - 1; i >= 0; i--) {
    lcd.setCursor(0, 0);
    lcd.print(teks3.substring(i));
    delay(250);
  }

  delay(2000);

  //Membuat Teks 4 Muncul satu persatu
  for (int i = 0; i < teks4.length(); i++) {
    lcd.setCursor(0, 1);
    lcd.print(teks4.substring(0, i + 1));
    delay(250);
  }

  delay(3000);

  lcd.clear();

  //Teks 5
  lcd.setCursor(0, 0);
  lcd.print(teks5);

  //Teks 6
  lcd.setCursor(0, 1);
  lcd.print(teks6);

  delay(2000);

  lcd.clear();


  }