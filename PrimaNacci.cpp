#include <iostream>
#include <cmath>
using namespace std;

// Deklarasi Variabel global
int angkanya;
int pilihanopsi;
string statusAngka;

bool bilPrim(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <=)
}

int main()
{

    while (true)
    {

        cout << "\n==== PENGECEKAN BILANGAN =====" << endl;
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
            if (bilPrim(angkanya))
            {
                cout << "\n";
                cout << angkanya << " adalah bilangan prima" << endl;
            }
            else
                cout << angkanya << " bukanlah bilangan prima" << endl;
            break;
        case 2:
            cout << "Masukkan angka : ";
            cin >> angkanya;
            cout << "\n";
            cout << angkanya << " adalah bilangan fibonacci";

            break;
        default:
            cout << endl;
            cout << "PILIHAN TIDAK VALID\n";
            cout << endl;
        }
    }
}
