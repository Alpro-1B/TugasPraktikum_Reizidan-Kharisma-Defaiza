#include <iostream>
using namespace std;

void segitiga(int tinggi)
{
    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = tinggi - i; j > 0; j--) // Menambah spasi pada sisi kiri segitiga (mencegah terbentuknya segitiga siku-siku)
            cout << " ";

        for (int k = 1; k <= i; k++) /* Cetak simbol '*'
                                  menambahkan spasi setelah mencetak '*' dengan output "* " (mencegah terbentuknya segitiga siku-siku) */
            cout << "* ";

        cout << endl;
    }
}

int main()
{
    int tinggi;
    cout << "Masukan tinggi segitiga sama kaki yang diinginkan: ";
    cin >> tinggi;

    segitiga(tinggi); //memanggil fungsi 

    return 0;
}
