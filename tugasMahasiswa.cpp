#include <iostream>
using namespace std;

struct mahasiswa{
    string namaMahasiswa;
    int Nim;
    string Alamat;
    string prodi;
};

int main(){
    mahasiswa data;
    cout<<"masukan nama anda : ";
    cin>>data.namaMahasiswa;

    cout<<"masukan nomor NIM anda: ";
    cin>>data.Nim;

    cout<<"masukan prodi anda: ";
    cin>>data.prodi;

    cout<<"masukan alamat anda: ";
    cin>>data.Alamat;

    cout<<endl<<endl;

    cout<<"Nama saya adalah "<<data.namaMahasiswa<<endl;
    cout<<"Nomor NIM saya adalah "<<data.Nim<<endl;
    cout<<"Prodi saya adalah "<<data.prodi<<endl;
    cout<<"Alamat saya adalah "<<data.Alamat<<endl;

    cin.get();
    return 0;

}