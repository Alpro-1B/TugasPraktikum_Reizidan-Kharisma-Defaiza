#include <iostream>
using namespace std;

int main()
{

    cout << "--MENENTUKAN JUMLAH ARRAY DAN NILAI ARRAY--" << endl
         << endl;

    // input user untuk menentukan ukuran array
    int total;
    cout << "Berapa jumlah array yang anda inginkan: ";
    cin >> total;

    // validasi input yang dimasukan merupakan bilangan positif
    while (total < 1)
    {
        cout << "*Masukan bilangan positif!*" << endl
             << "Berapa jumlah array yang anda inginkan: ";
        cin >> total;
    }

    int array[total];

    cout << endl;

    // input user untuk memasukan nilai di dalam array
    cout << "Masukkan nilai array: " << endl;
    for (int i = 0; i < total; i++)
    {
        cout << "Index ke - " << i << " | Nilai ke - " << i + 1 << " :";
        cin >> array[i];
    }

    cout << endl;

    // output menampilkan nilai di dalam array yang sebelumnya sudah diinput
    cout << "Nilai array yang anda masukan:\n[";
    for (int i = 0; i < total; i++)
    {
        cout << array[i];
        if (i < total - 1) // berhenti mencetak simbol (,) jika sudah mencapai indeks akhir
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    int indeks;               // deklarasi variabel indeks untuk menyimpan indeks tertinggi
    int tertinggi = array[0]; // deklarasi nilai tertinggi

    // menentukan nilai terbesar di dalam array lalu memberi tahu posisi indeksnya
    for (int i = 0; i < total; i++)
    {
        if (array[i] >= tertinggi)
        {
            tertinggi = array[i];
            indeks = i;
        }
    }
    cout << "Nilai tertingginya adalah " << tertinggi << " yang berada di Index ke - " << indeks << endl
         << endl;

    int cari;            // deklarasi nilai yang ingin dicari oleh user
    bool ketemu = false; // tanda untuk verifikasi apakah nilai yang dicari ada di dalam array
    int pilihan;         // deklarasi untuk user memilih opsi masuk ke program verifikasi

    while (true) /*perulangan tak berujung
                sampai user memilih untuk keluar dari program */
    {

        // Pilihan untuk user masuk ke program mencari nilai spesifik di dalam array
        cout << "Apakah anda ingin mencari nilai spesifik di dalam array? " << endl
             << "(1) Iya" << endl
             << "(2) Tidak" << endl
             << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            do
            {
                cout << "\n\n--VERIFIKASI NILAI DI DALAM ARRAY--\n\n";
                cout << "Masukan nilai yang ingin anda cari: ";
                cin >> cari;

                // mencari nilai di dalam array
                for (int i = 0; i < total; i++)
                {
                    if (array[i] == cari)
                    {
                        cout << cari << " merupakan nilai di dalam array, yang berada di indeks ke - " << i << endl
                             << endl;
                        ketemu = true;
                        cout << "Apakah anda ingin mencoba lagi?" << endl
                             << "(1) Iya" << endl
                             << "(2) Tidak" << endl
                             << "Pilih opsi: ";
                        cin >> pilihan;
                        cout << endl;

                        if (pilihan == 2)
                        {
                            cout << "\n--KELUAR DARI PROGRAM--";
                            return 0; // membawa user keluar dari program
                        }
                    }
                }

                if (!ketemu)
                {
                    cout << "Nilai " << cari << " tidak ada di dalam array." << endl
                         << endl;
                    cout << "Apakah anda ingin mencoba lagi?" << endl
                         << "(1) Iya" << endl
                         << "(2) Tidak" << endl
                         << "Pilih opsi: ";
                    cin >> pilihan;
                    cout << endl;

                    if (pilihan == 2)
                    {
                        cout << "\n--KELUAR DARI PROGRAM--";
                        return 0; // membawa user keluar dari program
                    }
                }
            } while (pilihan == 1);
            break;

        case 2:
            cout << "\n--KELUAR DARI PROGRAM--";
            return 0; // membawa user keluar dari program
            break;

        default:
            cout << "\n*INVALID*" << endl
                 << "Silahkan coba lagi" << endl
                 << endl;
            break;
        }
    }

    return 0;
}
