#include <iostream>
using namespace std;

int main()
{
    int batas;
    int satu = 0;        // suku pertama (yang juga menjadi wadah di perulangan di bawah)
    int dua = 1;         // suku kedua (yang juga menjadi wadah di perulangan di bawah)
    int selanjutnya = 0; // menyimpan suku selanjutnya

    cout << "Batas deret Fibonacci yang diinginkan: ";
    cin >> batas;

    cout << batas << " deret fibonacci: " << satu << " " << dua << " "; // output suku 1 dan 2 yang sudah dideklarasikan

    for (int i = 3; i <= batas; i++) /* mulai dari angka 3 karena suku pertama dan kedua sudah dikeluarkan
                                      (memberikan output akhir sesuai dengan batas yang diinginkan)*/
    {
        selanjutnya = satu + dua; // mengisi angka selanjutnya dengan aturan deret fibonacci
        cout << selanjutnya;
        if (i != batas) // memisahkan angka sampai batas deret yang diinginkan tercapai
        {
            cout << " ";
        }

        // mengembalikan value dari tiap wadah menjadi sama seperti awal proses pengulangan
        satu = dua;
        dua = selanjutnya;
    }
    cout << endl;
    return 0;
}
