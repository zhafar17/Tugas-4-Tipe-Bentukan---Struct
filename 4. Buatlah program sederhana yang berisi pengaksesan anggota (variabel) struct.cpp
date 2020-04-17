//Buatlah program sederhana yang berisi pengaksesan anggota (variabel) struct
//Jawabannya: 
#include <iostream>
using namespace std;

int main(){
	struct film{
		char judul[30];
		char genre[10];
		int tahun;
	}varju;
	film varge, varta;
	cout<<"Judul Film: ";
	gets(varju.judul);
	cout<<"Genre Utama : ";
	gets(varge.genre);
	cout<<"Tahun Rilis : ";
	cin>>varta.tahun;	
	cout<<"\n\nJudul Film     : "<<varju.judul<<endl;
	cout<<"Genre Utama    : "<<varge.genre<<endl;
	cout<<"Tahun Rilis    : "<<varta.tahun;
	return 0;
}

