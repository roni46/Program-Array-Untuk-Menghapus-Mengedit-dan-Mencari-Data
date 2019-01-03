#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main() {
	#include <iostream>
using namespace std;

int main() {
printf("PROGRAM MENGEDIT DATA\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

	int B[10],jumlah,ganti,hapus,cari,ketemu=0;

	std::cout <<"Masukkan jumlah data :"<<'\n';
	std::cin>> jumlah;

	if(jumlah>9)
	{
		std::cout<<"\nMaaf maksimal data adalah 10\n"<<'\n';

	}
	else
	{
		for(int i=0; i<jumlah; i++){

			std::cout<<"masukkan data ke-"<<i+1<< ":";
			std::cin>> B[i];
		}
	}

	std::cout<<"\n\n Masukkan nilaidata yang akan diubah :" <<'n';
	std::cin>>ganti;

	for(int g=0; g<jumlah; g++){
		if(B[g]==ganti){
			std::cout<<"masukkan nilai baru :"<<'\n';
			std::cin>> B[g];
		}
	}
	std::cout<<"\n\nData setelah diubah"<<'\n';
	for (int h=0; h<jumlah; h++){
		std::cout<<"\nB["<<h<<"]="<<B[h]<<'\n';
	}
	std::cout<<"\n\nMasukkan data yang akan di hapus :"<<'\n';
	std::cin>>hapus;

	for(int j=0; j<jumlah; j++){
		if(hapus==B[j]){
			for(int k=j; k<jumlah; k++){
				B[k]=B[k+1];
			}
			jumlah-=1;
			break;
		}
	}

	std::cout<<"\n\nData baru :"<<'\n';
	for(int p=0; p<jumlah; p++){
		std::cout<<"\nB["<<p<<"]="<<B[p]<<'\n';
	}

	std::cout<<"\n\nMasukkan nilai data yang akan dicari :"<<'\n';
	std::cin>>cari;

	for(int n=0; n<jumlah; n++){
		if(cari==B[n]){
			std::cout<<"\nNilai"<<cari<<"ditemukan pada indeks :"<<n<<'\n';
			ketemu=1;
			break;
		}
	}
	if(ketemu==0)
	std::cout<<"maaf data yang anda cari tidak di temukan"<<'\n';
	return 0;
}
	int B[10],jumlah,ganti,hapus,cari,ketemu=0;

	std::cout <<"Masukkan jumlah data :"<<'\n';
	std::cin>> jumlah;

	if(jumlah>9)
	{
		std::cout<<"\nMaaf maksimal data adalah 10\n"<<'\n';

	}
	else
	{
		for(int i=0; i<jumlah; i++){

			std::cout<<"masukkan data ke-"<<i+1<< ":";
			std::cin>> B[i];
		}
	}

	std::cout<<"\n\n Masukkan nilaidata yang akan diubah :" <<'n';
	std::cin>>ganti;

	for(int g=0; g<jumlah; g++){
		if(B[g]==ganti){
			std::cout<<"masukkan nilai baru :"<<'\n';
			std::cin>> B[g];
		}
	}
	std::cout<<"\n\nData setelah diubah"<<'\n';
	for (int h=0; h<jumlah; h++){
		std::cout<<"\nB["<<h<<"]="<<B[h]<<'\n';
	}
	std::cout<<"\n\nMasukkan data yang akan di hapus :"<<'\n';
	std::cin>>hapus;

	for(int j=0; j<jumlah; j++){
		if(hapus==B[j]){
			for(int k=j; k<jumlah; k++){
				B[k]=B[k+1];
			}
			jumlah-=1;
			break;
		}
	}

	std::cout<<"\n\nData baru :"<<'\n';
	for(int p=0; p<jumlah; p++){
		std::cout<<"\nB["<<p<<"]="<<B[p]<<'\n';
	}

	std::cout<<"\n\nMasukkan nilai data yang akan dicari :"<<'\n';
	std::cin>>cari;

	for(int n=0; n<jumlah; n++){
		if(cari==B[n]){
			std::cout<<"\nNilai"<<cari<<"ditemukan pada indeks :"<<n<<'\n';
			ketemu=1;
			break;
		}
	}
	if(ketemu==0)
	std::cout<<"maaf data yang anda cari tidak di temukan"<<'\n';
	return 0;
}
