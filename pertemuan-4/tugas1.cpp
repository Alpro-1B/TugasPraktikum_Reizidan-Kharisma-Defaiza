#include <iostream>
using namespace std;

int main()
{

    int batas;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    cout << "Masukan batas bilangan positif: ";
    cin >> batas;

    cout << endl;

    cout << "Bilangan ganjil antara 1 dan " << batas << ": ";
    // ganjil menggunakan for loop
    for (int i = 1; i <= batas; i++)
    {
        if (i % 2 == 0) // (kondisi) jika nilai i dapat dibagi habis dengan angka 2 --bilangan genap--
        {
            continue; // lewati nilai i jika i % 2 == 0 --lewati bilangan genap--
        }
        cout << i << " ";
        jumlahGanjil += i; // menyimpan jumlah bilangan ganjil
    }

    cout << endl;
    cout << "Jumlah bilangan ganjil: " << jumlahGanjil << endl;

    cout << "faktor-faktor dari jumlah bilangan ganjil: ";
    for (int i = 1; i <= jumlahGanjil; i++)
    {
        if (jumlahGanjil % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl << endl;

    cout << "Bilangan genap antara 1 dan " << batas << ": ";
    // genap menggunakan for loop
    for (int i = 1; i <= batas; i++)
    {
        if (i % 2 != 0) // (kondisi) jika nilai i tidak dapat dibagi habis dengan angka 2 --bilangan ganjil--
        {
            continue; // lewati nilai i jika i % 2 == 0 --lewati bilangan ganjil--
        }
        cout << i << " ";
        jumlahGenap += i; // menyimpan jumlah bilangan genap
    }

    cout << endl;
    cout << "Jumlah bilangan genap: " << jumlahGenap << endl;

    cout << "faktor-faktor dari jumlah bilangan genap: ";
    for (int i = 1; i <= jumlahGenap; i++)
    {
        if (jumlahGenap % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl << endl;

    // Prima Menggunakan Nested Loops
    cout << "Bilangan prima antara 1 dan " << batas << ": ";
    for (int i = 2; i <= batas; i++)
    {
        for (int j = 2; j * j <= i && i % j != 0; j++) // mencari faktor-faktor i (karakteristik bilangan prima)
        
        if (j * j > i) // menentukan bilagan prima
        {
            cout << i << " ";
            jumlahPrima += i; // menyimpan jumlah bilangan prima

        }
    }
    cout << endl;
    cout << "Jumlah bilangan prima: " << jumlahPrima << endl;

    cout << "faktor-faktor dari Jumlah bilangan prima: ";
    for (int i = 1; i <= jumlahPrima; i++)
    {
        if (jumlahPrima % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}