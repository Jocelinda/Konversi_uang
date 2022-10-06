#include <iostream>
#include  <conio.h>
using namespace std;

int konversiMataUang(double jumlahUang, double nilaiKurs)
{
	return jumlahUang * nilaiKurs;
}

int main()
{
	int pilihan; 
	double poundsterling;
	double usd;
	double yen;
	double nilaiTukar;
	
	do
	{
		cout <<"=====PROGRAM KONVERSI MATA UANG=====\n";
		cout <<"Pilih Menu Berikut:\n";
		cout << "1. Poundsterling\n";
		cout << "2. USD\n";
		cout << "3. Yen\n";
		cout << "4. Exit program\n";
		cout << "Masukkan pilihan: ";
		cin >> pilihan;

		switch(pilihan)
		{
			case 1:
				cout << "Masukkan Jumlah Uang Poundsterling yang akan dikonversi: ";
				cin  >> nilaiTukar;
				cout << "Masukkan Nilai Kurs Poundsterling: ";
				cin  >> poundsterling;
				cout << "Hasil konversi Poundsterling ke Rupiah adalah:" << konversiMataUang(nilaiTukar, poundsterling) << "\n"; 
				break;
			
			case 2:
				cout <<"Masukkan Jumlah Uang USD yang akan dikonversi:";
				cin  >> nilaiTukar;
				cout <<"Masukkan Nilai Kurs USD: ";
				cin  >> usd;
				cout << "Hasil konversi USD ke Rupiah adalah:" << konversiMataUang(nilaiTukar, usd) << "\n"; 
				cout << "Silakan tekan nomor lain.";
				break;

			case 3:
				cout <<"Masukkan Jumlah Uang Yen yang akan dikonversi:";
				cin  >> nilaiTukar;
				cout <<"Masukkan Nilai Kurs Yen:";
				cin  >> yen;
				cout << "Hasil konversi Yen ke Rupiah adalah:" << konversiMataUang(nilaiTukar, yen) << "\n"; 
				break;

			case 4:
				system("exit");
				cout << "Terima kasih telah menggunakan program ini :)\n";
				break;
				
			default:
				cout << "Pilihan tidak ada\n";
				break;
		}
		system("pause");
		system("cls");
	} while (pilihan != 4);
	
	return 0; 
}
