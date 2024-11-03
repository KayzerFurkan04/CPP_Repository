#include<iostream>
using namespace std;
int main()
{
	double sinavnotu,toplam,ortalama,sayac;
	toplam=0;
	sayac=0;
	while(sinavnotu!=-0)
	//while(sinavnotu<4)  deseydik  "(sayac-1)" yerine "sayac" yazardık.-0 ın kapladığı 1 sayılık yer olmadığı için.
	
	{
	cout<<"notunuzu giriniz\n";
	cin>>sinavnotu;
	toplam=toplam+sinavnotu;
	sayac=sayac+1;
    } 

	ortalama=toplam/(sayac-1);
	cout<<"not ortalamasi = "<<ortalama<<endl;
	return 0;
}