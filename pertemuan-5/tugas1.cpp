#include <iostream>
using namespace std;

// deklarasi fungsi
void deret(int batas, int kasus);
int jumlah(int batas, int kasus);
void faktor(int jumlah);

int main()
{

    int batas;

    cout << "Masukan batas bilangan positif: ";
    cin >> batas;
    cout << endl;

    // ganjil
    cout << "Bilangan ganjil antara 1 dan " << batas << ": ";
    deret(batas, 1);
    cout << endl;

    cout << "Jumlah bilangan ganjil: ";
    int jumlahGanjil = jumlah(batas, 1);
    cout << jumlahGanjil << endl;

    cout << "faktor-faktor dari jumlah bilangan ganjil: ";
    faktor(jumlahGanjil);
    cout << endl
         << endl;

    // genap
    cout << "Bilangan genap antara 1 dan " << batas << ": ";
    deret(batas, 2);
    cout << endl
         << endl;

    cout << "Jumlah bilangan genap: ";
    int jumlahGenap = jumlah(batas, 2);
    cout << jumlahGenap << endl;

    cout << "faktor-faktor dari jumlah bilangan genap: ";
    faktor(jumlahGenap);
    cout << endl
         << endl;

    // Prima
    cout << "Bilangan prima antara 1 dan " << batas << ": ";
    deret(batas, 3);
    cout << endl
         << endl;

    cout << "Jumlah bilangan prima: ";
    int jumlahPrima = jumlah(batas, 3);
    cout << jumlahPrima << endl;

    cout << "faktor-faktor dari Jumlah bilangan prima: ";
    faktor(jumlahPrima);
    cout << endl
         << endl;

    return 0;
}


// deklarasi dan memberikan perintah ke dalam fungsi

/* fungsi yang mengeksekusi Kode-Kode untuk
menjabarkan deret ganjil, genap dan prima

kasus 1 = bilangan ganjil
kasus 2 = bilangan genap
kasus 3 = bilangan prima */
void deret(int batas, int kasus)
{
    switch (kasus)
    {
    case 1:
        for (int i = 1; i <= batas; i++)
        {
            if (i % 2 != 0) // lewati i jika value i habis dibagi 2 menandakan i = genap
            {
                cout << i << " ";
            }
        }
        break;

    case 2:
        for (int i = 1; i <= batas; i++)
        {
            if (i % 2 == 0) // lewati i jika value i tidak habis dibagi 2 menandakan i = ganjil
            {
                cout << i << " ";
            }
        }
        break;

    case 3:
        for (int i = 2; i <= batas; i++)
        {
            for (int j = 2; j * j <= i && i % j != 0; j++) // mencari faktor-faktor i (karakteristik bilangan prima)

                if (j * j > i) // menentukan bilagan prima
                {
                    cout << i << " ";
                }
        }
        break;

    default:
    }
}

/* fungsi yang mengeksekusi code-code untuk menampilkan
hasil dari penjumlahan deret ganjil, genap dan prima

kasus 1 = bilangan ganjil
kasus 2 = bilangan genap
kasus 3 = bilangan prima */
int jumlah(int batas, int kasus)
{
    switch (kasus)
    {
    case 1:
        int jumlah = 0;
        for (int i = 1; i <= batas; i++)
        {
            if (i % 2 != 0) // lewati i jika value i habis dibagi 2 menandakan i = genap
            {
                jumlah += i;
            }
        }
        return jumlah;
        break;

    case 2:
        int jumlah = 0;
        for (int i = 1; i <= batas; i++)
        {
            if (i % 2 == 0) // lewati i jika value i tidak habis dibagi 2 menandakan i = ganjil
            {
                jumlah += i;
            }
        }
        return jumlah;
        break;

    case 3:
        int jumlah = 0;
        for (int i = 2; i <= batas; i++)
        {
            for (int j = 2; j * j <= i && i % j != 0; j++) // mencari faktor-faktor i (karakteristik bilangan prima)

                if (j * j > i) // menentukan bilagan prima
                {
                    jumlah += i;
                }
        }
        return jumlah;
        break;

    default:
    }
}

/* Fungsi yang mengeksekusi kode untuk menentukan
faktor dari deret bilangan ganjil, genap, prima*/
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