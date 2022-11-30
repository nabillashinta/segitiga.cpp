#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int luas, keliling;
  int alas, tinggi, sisi;
    cout << "Aplikasi Hitung Luas + Keliling Segitiga"<<endl;
    cout << "Masukkan Alas"; cin >> alas;
    cout << "Masukkan Tinggi"; cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "luas segitiga = "<< endl;
    cout << "masukan sisi "; cin >> sisi;
 keliling=sisi + sisi + sisi;
    cout << "keliling Segitiga =" <<keliling;
}