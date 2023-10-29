#include <iostream>
using namespace std;

int main()
{

    int bangunDatar;
    // input untuk user memilih bentuk bangun datar / menentukan ekspresi
    cout << "Pilih bentuk bangun datar\n1. Persegi.\n2. Persegi Panjang.\n3. Segitiga.\n\nMasukan pilihan: ";
    cin >> bangunDatar;
    


        /* case-case yang berisi bentuk bangun datar yang user akan pilih
        dan input untuk user menentukan panjang bangun datar untuk dioperasikan */

    switch (bangunDatar)
    {
    // Blok kode yang digunakan jika user memilih bangun datar Persegi (1)
    case 1:
        float sisi;
        cout << "Sisi: ";
        cin >> sisi;
        cout << "Luas Persegi: " << (sisi * sisi);
        break;

    // Blok kode yang digunakan jika user memilih bangun datar Persegi Panjang (2)
    case 2:
        float panjang, lebar;
        cout << "Panjang: ";
        cin >> panjang;
        cout << "Lebar: ";
        cin >> lebar;
        cout << "Luas Persegi Panjang: " << (panjang * lebar);
        break;

    // Blok kode yang digunakan jika user memilih bangun datar Segitiga (3)
    case 3:
        float alas, tinggi;
        cout << "Alas: ";
        cin >> alas;
        cout << "tinggi: ";
        cin >> tinggi;
        cout << "Luas Segitiga: " << (alas * tinggi / 2);
        break;

    default:
        cout << "Pilih opsi 1,2,3."; 
        break;
    }
}