//1.// int
    // float
    // string

//2.// string nama; 
    // int nXpander, nAlphard, nZenix, nReborn, nLexus; 
    // int hXpander = 360, hAlphard = 1200, hZenix = 626, hReborn = 420, hLexus = 3400;

//3.// int main(){
    // char pilihan;}

//4.// if (nNilai > 70 || nAbsen < 3) {
    // status = "lulus"; }
    // else {
    // status = "mengulang" }


//5.// struct Mahasiswa {
    // string nim;
    // string nama;
    // string alamat;
    // string umur;
    // };

//6.

#include <iostream>
using namespace std;

string NamaKota;
string Status;

void input() {
    cout << "Masukkan nama kota = ";
    cin >> NamaKota;

    cout << "Masukkan status kota = ";
    cin >> Status;
}

void display() {
    cout << "Daftar lokasi" << endl;
    cout << "Nama Kota" << NamaKota << endl;
    cout << "Status" << Status << endl;
}

int main() {
    char pilihan;
    do{
    input();
    cout << "Apakah ingin mengulang programnya?";
    cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}