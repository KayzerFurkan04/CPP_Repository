#include<iostream>
#include<cmath>
using namespace std;
int a,birler,onlar,yuzler,binler,onbinler,c;
int Fonksiyon(int);
int main()
{
	cout<<"5 basamakli bir sayi gir armstrong sayi mi soliyelim: ";
	cin>>a;
	while(a<10000 || a>99999)
	{
		cout<<"hatali giris lutfen 5 basamakli bir sayi girdiginizden emin olun: ";
		cin>>a;
		cout<<endl;
	}
	if(a>=10000 and a<=99999)
	{
		if(Fonksiyon(a)==a)
		cout<<"armstrong sayidir";
		else
		cout<<"armstrong sayi degildir";
	}
	return 0;
}
//fonksiyon tanimi
int Fonksiyon(int d) //a,d,z....istedigim harfi yazarim
{
	onbinler=a/10000;
	binler=(a/1000)%10;
	yuzler=(a/100)%10;
	onlar=(a/10)%10;
	birler=a%10;
	return (pow(birler,5)+pow(onlar,5)+pow(binler,5)+pow(yuzler,5)+pow(onbinler,5));
}
