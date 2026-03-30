#include <iostream>
using namespace std;

// Deklarasi Variabel global
int angkanya;
int pilihanopsi;
string statusAngka;

// prosedur input
void input()
{
    cout << "==== PENGECEKAN ANGKA =====" << endl;
    cout << "=== Mau Ngecek Apa Nih? ===" << endl;
    cout << " 1. Mengecek Bilangan Prima " << endl;
    cout << " 2. Mengecek Bilangan Fibonacci" << endl;
    cout << " 0. Keluar" << endl;
    cout << "===========================" << endl;
    cout << "Masukkan Pilihan Anda (0/1/2) : ";
    cin >> pilihanopsi;
}

void pengecekan()
{
    switch (pilihanopsi)
    {
    case 0:
        return;
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
        cout << "PILIHAN TIDAK VALID";
        cout << endl;
        break;
    }
}

void output()
{
}

int main()
{
    while (true)
    {
        input();
        pengecekan();
    }
}
