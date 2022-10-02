#include <iostream>
#include <math.h>
using namespace std;

int main() {
int jenis_bangun;
float panjang, lebar, tinggi;
float PI=atan(1)*4;

cout << "==================================== \n";
cout << "Program Menghitung Luas Bangun Datar \n";
cout << "==================================== ";
cout << "\n";
cout << " 1. Persegi \n 2. Persegi Panjang \n 3. Segitiga \n 4. Trapesium \n 5. Jajar Genjang \n 6. Lingkaran \n \n Pilih jenis bangun datar : ";
cin >> jenis_bangun;

switch (jenis_bangun){
case 1:
cout << "Masukkan panjang : ";
cin >> panjang;
cout << "Masukkan lebar : ";
cin >> lebar;
cout << "\n Luas perseginya yaitu : " << panjang*lebar;
break;

case 2:
cout << "Masukkan panjang : ";
cin >> panjang;
cout << "Masukkan lebar : ";
cin >> lebar;
cout << "\n Luas persegi panjangnya yaitu : " << panjang*lebar;
break;

case 3:
cout << "Masukkan panjang alas : ";
cin >> panjang;
cout << "Masukkan tinggi : ";
cin >> tinggi;
cout << "\n Luas segitiganya yaitu : " << panjang*tinggi/2;
break;

case 4:
cout << "Masukkan panjang sisi atas : ";
cin >> panjang;
cout << "Masukkan panjang sisi bawah : ";
cin >> lebar;
cout << "Masukkan tinggi : ";
cin >> tinggi;
cout << "\n Luas trapesiumnya yaitu :" << (panjang+lebar)*tinggi/2;
break;

case 5 :
cout << "Masukkan panjang alas : ";
cin >> panjang;
cout << "Masukkan tinggi : ";
cin >> lebar;
cout << "\n Luas jajar genjangnnya yaitu : " << panjang*lebar;
break;

case 6 :
cout << "Masukkan panjang jari-jari : ";
cin >> panjang;
cout << "\n Luas lingkarannya yaitu : " << PI*panjang*panjang;
break;

default :
cout << "Kamu tidak memasukkan angka satu sampai enam !!";
break;
}

return 0;
}
