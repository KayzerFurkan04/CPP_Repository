#include<iostream>
using namespace std;
int main()
{
	double kilo,boy,x;
	cout<<"vucut kitle indeksiniz ogrenmek icin agirliginizi ve boyunuzu giriniz"<<endl;
	cout<<"\nagirliginizi giriniz(kg cinsinden)= ";
	cin>>kilo;
	cout<<"\nboyunuzu giriniz(m cinsinden)= ";
	cin>>boy;
	x=kilo/(boy*boy);
	
	if(x<16)
	{
		cout<<"cok zayif"<<endl;
		return 0;
	}
		if(x<18.5)
	{
		cout<<"zayif"<<endl;
		return 0;
	}
		if(x<25)
	{
		cout<<"normal"<<endl;
		return 0;
	}
		if(x<30)
	{
		cout<<"kilolu"<<endl;
		return 0;
	}
		if(x>30)
	{
		cout<<"obez"<<endl;
		return 0;
	}
	
}
