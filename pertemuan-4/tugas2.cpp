#include <iostream>
using namespace std;

int main()
{

    int tinggi;

    cout << "Masukan tinggi segitiga sama kaki yang diinginkan: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = tinggi - i; j > 0; j--) // memberikan ruang kosong di sebelah kiri bangun segitiga (mencegah membentuk segitiga siku-siku)
            cout << " ";

        for (int k = 1; k <= i; k++) /* output simbol bintang
                                     memberikan ruang kosong setelah mencetak bintang dengan output "* " (mencegah membentuk segitiga siku-siku) */
            cout << "* ";                                    

            cout << endl;
    }
}