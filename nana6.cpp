
#include <iostream>
#include <string>
using namespace std;

int pilihan, penumpang, harga, total;
string tujuan;
char ulang;

void tiket()
{
    cout << "---HARGA TIKET TUJUAN---" << endl;
    cout << "1. Malang-Surabaya: Rp35000" << endl;
    cout << "2. Malang-Pasuruan: Rp20000" << endl;
    cout << "3. Malang-Jombang: Rp25000" << endl;
}

void to()
{
    do {
        harga = 0;
        tujuan = "";

        tiket();

        cout << "Pilih tiket tujuan anda: ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            tujuan = "Malang-Surabaya";
            harga = 35000;
        }
        else if (pilihan == 2)
        {
            tujuan = "Malang-Pasuruan";
            harga = 20000;
        }
        else if (pilihan == 3)
        {
            tujuan = "Malang-Jombang";
            harga = 25000;
        }
        else
        {
            cout << "_______________________" << endl;
            cout << "Pilihan tidak tersedia." << endl;
            cout << "_______________________" << endl;
            continue;
        }

        cout << "_______________________" << endl;
        cout << "Tujuan = " << tujuan << endl;
        cout << "Harga = Rp" << harga << endl;
        cout << "_______________________" << endl;

        cout << "Masukkan Jumlah Penumpang: ";
        cin >> penumpang;

        total = harga * penumpang;

        cout << "___________________________" << endl;
        cout << "---DETAIL TIKET---" << endl;
        cout << "Tujuan: " << tujuan << endl;
        cout << "Jumlah Penumpang: " << penumpang << endl;
        cout << "Total Harga: Rp" << total << endl;
        cout << "___________________________" << endl;

        cout << "Apakah anda mau mengulang? Tekan y atau Y: ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}

int main()
{
    to();

    cout << "Terima kasih telah menggunakan layanan tiket." << endl;

    return 0;
}
