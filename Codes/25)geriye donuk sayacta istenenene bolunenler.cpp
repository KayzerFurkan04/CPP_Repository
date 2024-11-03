#include<iostream>
#include<iomanip>
using namespace std;
double ortalama;
int toplam=0,sayac=0;
int main()
{
	for(int i=40;i>=4;i--)
	{
		if(i%4!=0)
		{
			cout<<i<<endl;
		}
		if(i%4==0)
		{
			cout<<"  "<<i<<endl;
			toplam=toplam+i;
			sayac++;
		}
	}
	ortalama=static_cast<double>(toplam/sayac);
	cout<<"toplam: "<<toplam<<endl;
	cout<<"ortalama: "<<setprecision(5)<<ortalama<<endl;
	return 0;
}
