#include <iostream>
#include <string>
using namespace std;

int main()
{

    string namaLengkap;
    float skor;

    // Input untuk user memasukan Nama Lengkap dan Nilai
    cout << "Nama Lengkap: ";
    getline(cin, namaLengkap); // menggunakan fungsi getline untuk membaca teks dengan spasi sehingga dapat membaca nama lengkap yang dimasukan oleh user
    cout << "Skor (0-100): ";
    cin >> skor;


            // menggunakan Logical Operator && untuk menentukan nilai yang didapatkan user dalam cangkupan skor tertentu {lebih spesifik (1-100)}

    if (skor >= 90 && skor <= 100)
    {
        cout << namaLengkap << " mendapatkan nilai A.";
    }
    else if (skor >= 80 && skor <= 89)
    {
        cout << namaLengkap << " mendapatkan nilai B.";
    }
    else if (skor >= 70 && skor <= 79)
    {
        cout << namaLengkap << " mendapatkan nilai C.";
    }
    else if (skor >= 60 && skor <= 69)
    {
        cout << namaLengkap << " mendapatkan nilai D.";
    }
    else if (skor >= 0 && skor < 60)
    {
        cout << namaLengkap << " mendapatkan nilai E.";
    }
    else
    {
        cout << "Data yang anda masukan invalid";
    }

    return 0;
}