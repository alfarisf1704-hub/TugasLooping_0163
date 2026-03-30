#include <iostream>
using namespace std;

int main()
{
    int angkanya;
    int pilihanopsi;
    string statusAngka;

    while (true)
    {
        cout << "==== PENGECEKAN ANGKA =====" << endl;
        cout << "=== Mau Ngecek Apa Nih? ===" << endl;
        cout << " 1. Mengecek Bilangan Prima " << endl;
        cout << " 2. Mengecek Bilangan Fibonacci" << endl;
        cout << " 0. Keluar" << endl;
        cout << "===========================" << endl;
        cout << "Masukkan Pilihan Anda (0,1,2) : ";
        cin >> pilihanopsi;

        if (pilihanopsi = 1)
        {
            cout << "Masukkan angka : ";
            cin >> angkanya;
            break;
        }
        else if (pilihanopsi = 2)
        {
            cout << "Masukkan angka : ";
            cin >> angkanya;
            break;
        }
        else if (pilihanopsi = 0)
        {
            return 0;
        }
        else
            cout << "PILIHAN TIDAK VALID";
    }
}