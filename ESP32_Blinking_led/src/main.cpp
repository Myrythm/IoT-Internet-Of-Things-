// //Muhammad Azka Adhitama
// //Tugas P8

// #include <Arduino.h>



// void setup() {
//   // put your setup code here, to run once:
//   pinMode(18, OUTPUT);
//   pinMode(4, OUTPUT);
//   pinMode(5, OUTPUT);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   //led 1
//   digitalWrite(LED_BUILTIN, HIGH);
//   delay(2000);
//   digitalWrite(LED_BUILTIN, LOW);
//   delay(2000);
  
//   //led 2
//   digitalWrite(18, HIGH);
//   delay(2000);
//   digitalWrite(18, LOW);
//   delay(2000);
  
//   //led 3
//   digitalWrite(4, HIGH);
//   delay(2000);
//   digitalWrite(4, LOW);
//   delay(2000);
  
//   //led 4
//   digitalWrite(5, HIGH);
//   delay(2000);
//   digitalWrite(5, LOW);
//   delay(2000);
// }




//Muhammad Azka Adhitama
//2109981
#include <Arduino.h>

String inputString = ""; 

void setup() {
  // Inisialisasi pin sebagai OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  // Inisialisasi Serial Monitor
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char inputChar = Serial.read(); // Membaca karakter dari Serial Monitor
    if (inputChar == '\n') {
      int input = inputString.toInt(); // Mengonversi string menjadi integer
      switch (input) {
    case 1:
      digitalWrite(LED_BUILTIN, HIGH); //  LED 1 (LED_BUILTIN)
      delay(2000);
      digitalWrite(LED_BUILTIN, LOW);
      break;
    case 2:
      digitalWrite(18, HIGH); //  LED 2
      delay(2000);
      digitalWrite(18, LOW);
      break;
    case 3:
      digitalWrite(4, HIGH); //  LED 3
      delay(2000);
      digitalWrite(4, LOW);
      break;
    case 4:
      digitalWrite(5, HIGH); //  LED 4
      delay(2000);
      digitalWrite(5, LOW);
      break;
    default:
      Serial.println("Input tidak valid. Masukkan 1, 2, 3, atau 4.");
  }
      inputString = ""; // Reset inputString
    } else {
      inputString += inputChar; // Tambahkan karakter ke inputString
    }
  }
}


