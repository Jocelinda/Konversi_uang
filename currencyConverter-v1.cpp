#include <iostream>

// LANGKAH KEDUA
// Setelah siapin variable constant, baru kita siapin fungsi yang diperlukan
// Karena kita berhubungan dengan angka-angka, berarti kita perlu pake tipe data angka
// Boleh 'int' atau 'float' atau 'double'
// Karena ikutin kemauan dosen, jadi pakai float aja
float convertCurrencies(float kurs, float amount)
{
    // Nah, kita memiliki 2 parameter, yaitu:
    // parameter pertama: kurs -> untuk menyimpan nilai kurs
    // parameter kedua: amount -> untuk menyimpan nilai yang mau dikonversi

    // kemudian karena function ini menggunakan data types, maka kita harus mereturn sesuatu
    // otherwise, we will get an error
    return kurs * amount;
}

int main()
{
    // LANGKAH PERTAMA
    // Siapin variable yang diperlukan e.g:
    // kurs 1 USD = IDR 14.xxx
    // kurs 1 pound sterling = IDR 17.xxx
    // kurs 1 YEN = IDR 103

    float USD;
    float POUND;
    float YEN;

    // deklarasi variable option yaitu gunanya buat nampung angka yang kita pilih
    // disini saya pakai tipe data 'short' agar hemat memory
    short option;

    // deklarasi juga variable amount yaitu gunanya buat nampung nilai yang mau dikonversi
    float amountToConvert;

    // LANGKAH KETIGA
    // Setelah variable dan function nya disiapin, kita buat tampilan programnya disini
    std::cout << "==============================\n";
    std::cout << "  Currency Converter Program\n";
    std::cout << "==============================\n";
    std::cout << "List pilihan:\n";
    std::cout << "1. USD -> IDR\n";
    std::cout << "2. POUND -> IDR\n";
    std::cout << "3. YEN -> IDR\n";
    std::cout << "Masukkan pilihan anda: ";
    std::cin >> option;
    std::cout << "\n";
    std::cout << "Masukkan nilai yang mau dikonversi: ";
    std::cin >> amountToConvert;

    // LANGKAH KEEMPAT
    // Baru dh setelah tampilan programnya kelar, kita buat logic nya

    // Contoh menggunakan Switch case
    std::cout << "CONTOH PENGGUNAAN SWITCH CASE\n\n";
    switch (option)
    {
        // Kita panggil function yang udah kita buat tadi
        // Kita panggil functionnya dengan cara:
        // namaFunction(parameter1, parameter2, dst)
        // Karena kita punya 2 parameter, maka kita harus mengisi 2 parameter
    case 1:
        // parameter pertama: USD -> nilai kurs USD
        // parameter kedua: amount -> nilai yang mau dikonversi
        std::cout << "Masukkan nilai mata uang USD: ";
        std::cin >> USD;
        std::cout << "Hasil konversi: " << convertCurrencies(USD, amountToConvert) << "\n";
        break;

    case 2:
        // parameter pertama: POUND -> nilai kurs POUND
        // parameter kedua: amount -> nilai yang mau dikonversi
        std::cout << "Masukkan nilai mata uang Pound Sterling: ";
        std::cin >> POUND;
        std::cout << "Hasil konversi: " << convertCurrencies(POUND, amountToConvert) << "\n";

    case 3:
        // parameter pertama: YEN -> nilai kurs YEN
        // parameter kedua: amount -> nilai yang mau dikonversi
        std::cout << "Masukkan nilai mata uang YEN: ";
        std::cin >> YEN;
        std::cout << "Hasil konversi: " << convertCurrencies(YEN, amountToConvert) << "\n";

    default:
        std::cout << "Pilihan tidak tersedia\n";
        break;
    }

    // Contoh penggunaan If else
    std::cout << "CONTOH PENGGUNAAN IF ELSE\n\n";
    if (option == 1)
        std::cout << "Hasil konversi: " << convertCurrencies(USD, amountToConvert) << "\n";
    else if (option == 2)
        std::cout << "Hasil konversi: " << convertCurrencies(POUND, amountToConvert) << "\n";
    else if (option == 3)
        std::cout << "Hasil konversi: " << convertCurrencies(YEN, amountToConvert) << "\n";
    else
        std::cout << "Pilihan tidak tersedia\n";

    // TUGAS: Analisa perbedaan menggunakan "IF ELSE" dengan "SWITCH CASE"

    // LANGKAH KELIMA
    // Jalankan programnya dan input sesuai dengan arahannya.

    return 0;
}