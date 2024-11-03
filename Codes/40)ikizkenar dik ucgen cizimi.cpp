#include<iostream>
using namespace std;
int main()
{
	int sayi;
	cout<<"ikizkenar dik ucgenin yan kenarlarindan birinin uzunlugunu giriniz: ";
	cin>>sayi;
	
	cout<<"\n-ikizkenar dik ucgen-"<<endl;
	for(int i=0;i<sayi;i++)
	{
		for(int j=0;j<(i+1);j++)
		{
			cout<<"*"<<" ";
		}
		cout<<"\n";
	}
	
		cout<<"\n-ters ikizkenar dik ucgen-"<<endl;
	for(int i=0;i<sayi;i++)
	{
		for(int j=0;j<sayi-i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
