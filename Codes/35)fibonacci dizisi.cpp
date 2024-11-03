#include<iostream>
using namespace std;
int main()
{
	double sayi1=0;
	double sayi2=1;
	double sonrakisayi,belirledigimizsayi;
	cout<<"1 den buyuk bir sayi giriniz"<<endl;
	cin>>belirledigimizsayi;
	sonrakisayi=sayi1+sayi2;
	
	if(1<belirledigimizsayi)
	{
	cout<<"\nfibonacci dizisinin "<<belirledigimizsayi<<" sayisina kadar olan elemanlari=";	
	cout<<"\n["<<sayi1<<","<<sayi2<<",";

	while(sonrakisayi<=belirledigimizsayi)
	{
		cout<<sonrakisayi<<",";
		sayi1=sayi2;
		sayi2=sonrakisayi;
		sonrakisayi=sayi1+sayi2;
	}
	cout<<"]"<<endl;
	return 0;
    }

     while(1>=belirledigimizsayi)
     {
     	cout<<"tekrar giriniz"<<endl;
     	cin>>belirledigimizsayi;
	 }
	 return 0;
}
