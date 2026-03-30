#include <iostream>
using namespace std;

// Deklarasi Variabel global
int angkanya;
int pilihanopsi;
string statusAngka;

int main()
{

    while (true)
    {
        cout << "==== PENGECEKAN ANGKA =====" << endl;
        cout << "=== Mau Ngecek Apa Nih? ===\n"
             << endl;
        cout << " 1. Mengecek Bilangan Prima" << endl;
        cout << " 2. Mengecek Bilangan Fibonacci" << endl;
        cout << " 0. Keluar\n"
             << endl;
        cout << "===========================" << endl;
        cout << "Masukkan Pilihan Anda (0/1/2) : ";
        cin >> pilihanopsi;

        switch (pilihanopsi)
        {
        case 0:
            return 0;
            break;
        case 1:
            cout << "Masukkan angka : ";
            cin >> angkanya;
            break;
        case 2:
            cout << "Masukkan angka : ";
            cin >> angkanya;
            break;
        default:
            cout << endl;
            cout << "PILIHAN TIDAK VALID\n";
            cout << endl;
        }
    }
}
