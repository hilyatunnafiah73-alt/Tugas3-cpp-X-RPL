// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int pilihan,penumpang,harga,total;
string tujuan;
void tiket()
{
    do{
    cout<<"---HARGA TIKET TUJUAN---"<<endl;
    cout<<"1. Malang-Surabaya: Rp35000"<<endl;
    cout<<"2. Malang-Pasuruan: Rp20000"<<endl;
    cout<<"3. Malang-Jombang: Rp25000"<<endl;
}
void to ()
{
    cout<<"Pilih tiket tujuan anda: ";
    cin>>pilihan;

    if (pilihan==1)
    {
        tujuan="malang-surabaya";
        harga=35000;
        cout<<"_______________________"<<endl;
        cout<<"Tujuan= Malang-Surabaya"<<endl;
        cout<<"Harga= Rp35000"<<endl;
        cout<<"_______________________"<<endl;
    }
    else if (pilihan==2)
    {
        tujuan="Malang-Pasuruan";
        harga=20000;
        cout<<"_______________________"<<endl;
        cout<<"Tujuan= Malang-Pasuruan"<<endl;
        cout<<"Harga= Rp20000"<<endl;
        cout<<"_______________________"<<endl;
    }
    else if (pilihan==3)
    {
        tujuan="Malang-Jombang";
        harga=25000;
        cout<<"_______________________"<<endl;
        cout<<"Tujuan= Malang-Jombang"<<endl;
        cout<<"Harga= Rp25000"<<endl;
        cout<<"_______________________"<<endl;
    }
    else 
    {
        cout<<"_______________________"<<endl;
        cout<<"Pilihan tidak tersedia."<<endl;
        cout<<"_______________________"<<endl;
    }

    cout<<"Masukkan Jumlah Penumpang: ";
    cin>>penumpang;
    total=harga*penumpang;
    cout<<"___________________________"<<endl;
    cout<<"---DETAIL TIKET---"<<endl;
    cout<<"Tujuan: ";
    cout<<tujuan<<endl;
    cout<<"Jumlah Penumpang: ";
    cout<<penumpang<<endl;
    cout<<"Total Harga: ";
    cout<<total<<endl;
    cout<<"apakah anda mau mengulang, tekan y atau Y "<<endl;
    cin>>ulang;
    }
      while (ulang=="y"||ulang=="Y");  
}
int main() {
    to();

    system("pause");
                
    return 0;
}
