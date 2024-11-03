#include<iostream>
using namespace std;
int main()
{
	int a,yuzler,onlar,birler,f,k;
	cout<<"3 basamakli bir sayi giriniz bizde basamaklarina ayiralim (;"<<endl;
	cin>>a;
	while(a<100 || a>999)
	{
		cout<<"hatali giris, tekrar deneyin"<<endl;
		cin>>a;
	}
	yuzler=a/100;
	f=a%10;
	k=a/10;
	onlar=k%10;
	birler=f%10;
	
	cout<<"yuzler basamagi= "<<yuzler<<endl;
	cout<<"onlar basamagi= "<<onlar<<endl;
	cout<<"birler basamagi= "<<birler<<endl;
	return 0;
}
