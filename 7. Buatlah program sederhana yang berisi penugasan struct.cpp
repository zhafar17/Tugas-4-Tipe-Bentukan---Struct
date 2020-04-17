//Buatlah program sederhana yang berisi penugasan struct
//Jawabannya:
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
struct data_tanggal 
{
int tahun;
int bulan;
int tanggal;
};
data_tanggal tgl1, tgl2; 
tgl1.tanggal=20;
tgl1.bulan=3;
tgl1.tahun=2020;
//penugasan antara variabel struktur
tgl2=tgl1;
cout<<tgl2.tanggal<<'/'<<tgl2.bulan<<'/'<<tgl2.tahun;
}

