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
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool bilFibon(int x)
{
    if (x < 0)

        return false;

    int a = 0;
    int b = 1;
    while (a < x)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == x);
    return true;
}

int main()
{

    while (true)
    {

        cout << "\n==== PENGECEKAN BILANGAN =====" << endl;
        cout << "===== Mau Ngecek Apa Nih? ====\n"
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
                break;
            }
            else
                cout << "\n";
            cout << angkanya << " bukanlah bilangan prima" << endl;
            break;
        case 2:
            cout << "Masukkan angka : ";
            cin >> angkanya;
            if (bilFibon(angkanya))
            {
                cout << "\n";
                cout << angkanya << " adalah bilangan fibonacci\n";

                break;
            }
            else
                cout << "\n";
            cout << angkanya << " bukanlah bilangan fibonacci\n";

            break;
        default:
            cout << endl;
            cout << "     PILIHAN TIDAK VALID\n";
            cout << endl;
        }
    }
}
