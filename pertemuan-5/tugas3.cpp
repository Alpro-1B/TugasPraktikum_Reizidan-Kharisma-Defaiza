#include <iostream>
using namespace std;

//deklarasi fungsi
void Fibonacci(int batas);

int main()
{
    int batas;

    cout << "Masukkan batas deret Fibonacci: ";
    cin >> batas;

    Fibonacci(batas);

    return 0;
}

void Fibonacci(int batas)
{
    int pertama = 0;        // suku pertama (yang juga menjadi wadah di perulangan di bawah)
    int kedua = 1;         // suku kedua (yang juga menjadi wadah di perulangan di bawah)
    int selanjutnya = 0; // menyimpan suku selanjutnya

    cout << batas << " deret Fibonacci: " << pertama << " " << kedua << " "; // output suku 1 dan 2 yang sudah dideklarasikan

    for (int i = 3; i <= batas; i++) /* mulai dari angka 3 karena suku pertama dan kedua sudah dikeluarkan
                                      (memberikan output akhir sesuai dengan batas yang diinginkan)*/
    {
        selanjutnya = pertama + kedua; // mengisi angka selanjutnya dengan aturan deret fibonacci
        cout << selanjutnya;

        if (i != batas) // memisahkan angka sampai batas deret yang diinginkan tercapai
        {
            cout << " ";
        }

        // mengembalikan value dari tiap wadah menjadi sama seperti awal proses pengulangan
        pertama = kedua;
        kedua = selanjutnya;
    }

    cout << endl;
}
