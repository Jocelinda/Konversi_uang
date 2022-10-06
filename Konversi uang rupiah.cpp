#include <iostream>
using namespace std;

double konversiUang(double jumlah, double kurs)
{
	return jumlah / kurs;
}

int main()
{
 int pilihan; 
 
 double won = 12000;
 double yen = 10000;
 double yuan= 5000;
 double nilaiTukar;
 
 do
 {
 	cout<<"Konversi Rupiah=====\n";
 	cout<<"1. Won\n";
 	cout<<"2. Yen\n";
 	cout<<"3. Yuan\n";
 	cout<<"Masukkan nomornya: ";
 	cin >> pilihan; 
 	
 	switch(pilihan)
 	{ 
 	 case 1:
 	 	cout << "Masukkan Jumlah Uang Rupiah yang akan dikonversi: ";
 	 	cin >> nilaiTukar; 
 	 	cout <<"Nilai Kurs Won saat ini: "<< won<<"\n";
 	 	cout << "Hasil konversi: " << konversiUang(nilaiTukar, won) << "\n"; 
		break;
		
	 case 2:
	 	cout << "Masukkan Jumlah Uang Rupiah yang akan dikonversi: ";
	 	cin >> nilaiTukar;
	 	cout <<"Nilai Kurs Yen saat ini: " <<yen << "\n"; 
	 	cout << "Hasil konversi: " << konversiUang(nilaiTukar, yen) << "\n"; 
	 	cout << "Tekan nomor lainnya: ";
		break;
		
	 case 3: 
	 	cout << "Masukkan Jumlah Uang Rupiah yang akan dikonversi: ";
	 	cin >> nilaiTukar;
	 	cout <<"Nilai Kurs Yuan saat ini: " <<yuan << "\n" ; 
	 	cout << "Hasil konversi: " << konversiUang(nilaiTukar, yuan) << "\n"; 
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
 } while (pilihan != 4 );
 return 0; 
 
}
