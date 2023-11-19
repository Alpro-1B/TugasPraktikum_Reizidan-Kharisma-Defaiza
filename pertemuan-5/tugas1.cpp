#include <iostream>
using namespace std;

// Deklarasi fungsi
void deret(int batas, int kasus);
int jumlah(int batas, int kasus);
void faktor(int jumlah);

int main()
{
    int batas;

    cout << "Masukkan batas bilangan positif: ";
    cin >> batas;
    cout << endl;

    // Ganjil
    cout << "Bilangan ganjil antara 1 dan " << batas << ": ";
    deret(batas, 1);
    cout << endl;

    cout << "Jumlah bilangan ganjil: ";
    int jumlahGanjil = jumlah(batas, 1);
    cout << jumlahGanjil << endl;

    cout << "Faktor-faktor dari jumlah bilangan ganjil: ";
    faktor(jumlahGanjil);
    cout << endl
         << endl;

    // Genap
    cout << "Bilangan genap antara 1 dan " << batas << ": ";
    deret(batas, 2);
    cout << endl;

    cout << "Jumlah bilangan genap: ";
    int jumlahGenap = jumlah(batas, 2);
    cout << jumlahGenap << endl;

    cout << "Faktor-faktor dari jumlah bilangan genap: ";
    faktor(jumlahGenap);
    cout << endl
         << endl;

    // Prima
    cout << "Bilangan prima antara 1 dan " << batas << ": ";
    deret(batas, 3);
    cout << endl;

    cout << "Jumlah bilangan prima: ";
    int jumlahPrima = jumlah(batas, 3);
    cout << jumlahPrima << endl;

    cout << "Faktor-faktor dari jumlah bilangan prima: ";
    faktor(jumlahPrima);
    cout << endl
         << endl;

    return 0;
}

// Deklarasi dan memberikan perintah ke dalam fungsi

/* Fungsi yang mengeksekusi Kode-Kode untuk
menjabarkan deret ganjil, genap, dan prima

kasus 1 = bilangan ganjil
kasus 2 = bilangan genap
kasus 3 = bilangan prima */
void deret(int batas, int kasus)
{
    switch (kasus)
    {
    case 1:
        for (int i = 1; i <= batas; i += 2)
        {
            cout << i << " ";
        }
        break;

    case 2:
        for (int i = 2; i <= batas; i += 2)
        {
            cout << i << " ";
        }
        break;

    case 3:
        for (int i = 2; i <= batas; i++)
        {
            bool prima = true;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    prima = false;
                    break;
                }
            }
            if (prima)
            {
                cout << i << " ";
            }
        }
        break;

    default:
        break;
    }
}

/* Fungsi yang mengeksekusi kode untuk menampilkan
hasil dari penjumlahan deret ganjil, genap, dan prima

kasus 1 = bilangan ganjil
kasus 2 = bilangan genap
kasus 3 = bilangan prima */
int jumlah(int batas, int kasus)
{
    int jumlah = 0;
    switch (kasus)
    {
    case 1:
        for (int i = 1; i <= batas; i += 2)
        {
            jumlah += i;
        }
        break;

    case 2:
        for (int i = 2; i <= batas; i += 2)
        {
            jumlah += i;
        }
        break;

    case 3:
        for (int i = 2; i <= batas; i++)
        {
            bool prima = true;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    prima = false;
                    break;
                }
            }
            if (prima)
            {
                jumlah += i;
            }
        }
        break;

    default:
        break;
    }
    return jumlah;
}

/* Fungsi yang mengeksekusi kode untuk menentukan
faktor dari deret bilangan ganjil, genap, dan prima */
void faktor(int jumlah)
{
    for (int i = 1; i <= jumlah; i++)
    {
        if (jumlah % i == 0)
        {
            cout << i << " ";
        }
    }
}
