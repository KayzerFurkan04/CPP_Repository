#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int sayac,toplam,i;
	double ortalama;
	toplam=0;
	sayac=0;
	cout<<"0 ile 100 arasinda 7 ile bolunebilen sayilar = "<<endl;
	
	for(i=0;i<=100;i++)
	{
		if(i%7==0 && i!=63)
		{
			cout<<i<<endl;
			toplam=toplam+i;
			sayac=sayac+1;
		}		
	}
	ortalama=static_cast<double>(toplam)/(sayac);
	cout<<"\n0 ile 100 arasindaki 7 ile bolunebilen sayilarin toplami = "<<toplam<<endl;
	cout<<"\n0 ile 100 arasindaki 7 ile bolunebilen sayilarin ortalamasi = "<<setprecision(2)<<ortalama<<endl;
	return 0;                                                                                        
}
