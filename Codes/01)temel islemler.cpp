#include<iostream>
using namespace std;
int main()
{
	cout<<"merhaba";
	cout<<"\n\ntoplama islemi icin iki sayi girin";
	
	double sayi1,sayi2,toplam;
	cout<<"\n\n1)\t";
	cin>>sayi1;
	cout<<"\n2)\t";
	cin>>sayi2;
	toplam=sayi1+sayi2;
	cout<<"\nsonuc1)\t"<<toplam<<endl;
	
	cout<<"\ndevam, bu seferde buldugunuz sonuctan cikaracaginiz sayiyi girin";
	
	double sayi3,fark;
	cout<<"\n\n3)\t";
	cin>>sayi3;
	fark=toplam-sayi3;
	cout<<"\nsonuc2)\t"<<fark<<endl;
	
	cout<<"\nsimdi ise buldugunuz sonuc ile carpacaginiz sayiyi girin";
	
	double sayi4,carpim;
	cout<<"\n\n4)\t";
	cin>>sayi4;
	carpim=sayi4*fark;
	cout<<"\nsonuc3)\t"<<carpim<<endl;
	
	cout<<"\nbu seferde buldugunuz sonucu boleceginiz sayiyi girin";
	
	double sayi5,bolum;
	cout<<"\n\n5)\t";
	cin>>sayi5;
	bolum=carpim/sayi5;
	cout<<"\nsonuc4)\t"<<bolum<<endl;
	
	cout<<"\nson olarak buldugunuz sonuc ile ortalamasini bulmak istediginiz sayiyi girin";
	
	double sayi6,ortalama;
	cout<<"\n\n6)\t";
	cin>>sayi6;
	ortalama=(bolum+sayi6)/2;
	cout<<"\nsonuc5)\t"<<ortalama<<endl;
	return 0;
}