#include<iostream>
#include<iomanip>  //setprecision() yazmamizi saglar
#include<cmath>  //matematik kutuphanesi
using namespace std;
int main()
{
	int i,toplam,sayac;
	double ortalama;
	toplam=0;
	sayac=0;
	for(i=2;i<=50;i=i+2)
	{
		toplam=toplam+i;
		sayac=sayac+1;
	}
	ortalama=static_cast<double>(toplam)/(sayac);
	cout<<"ortalama : "<<setprecision(5)<<ortalama<<endl;  // setprecision(5), sonuc eger 5 ve uzeri haneliyse sonucu 5 haneli yazar
	return 0;
}