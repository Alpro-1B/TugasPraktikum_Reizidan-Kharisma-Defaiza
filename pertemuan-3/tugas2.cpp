#include <iostream>
using namespace std;

int main()
{

    float angkaPertama, angkaKedua, angkaKetiga, angkaTerbesar;

        // input untuk user memasukan 3 angka
    cout << "Masukkan angka pertama: ";
    cin >> angkaPertama;
    cout << "Masukkan angka kedua: ";
    cin >> angkaKedua;
    cout << "Masukkan angka ketiga: ";
    cin >> angkaKetiga;



// menggunakan Logical Operator && (dianggap benar jika kedua pernyataannya benar) untuk menentukan angka terbesar

        // Menguji kebenaran apakah angka pertama merupakan angka terbesar dibandingkan dengan angka kedua dan ketiga
    if (angkaPertama > angkaKedua && angkaPertama > angkaKetiga)
    {
        angkaTerbesar = angkaPertama;
    }

        // Menguji kebenaran apakah angka kedua merupakan angka terbesar dibandingkan dengan angka pertama dan ketiga
    else if (angkaPertama < angkaKedua && angkaKedua > angkaKetiga)
    {
        angkaTerbesar = angkaKedua;
    }

        // Menguji kebenaran apakah angka ketiga merupakan angka terbesar dibandingkan dengan angka pertama dan kedua
    else if (angkaPertama < angkaKetiga && angkaKedua < angkaKetiga)
    {
        angkaTerbesar = angkaKetiga;
    }

        // Menampilkan angka terbesar
    cout << "Angka terbesar adalah: " << angkaTerbesar;

    return 0;
}
