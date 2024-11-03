#include<iostream>
using namespace std;
int main()
{
	int sayi,sayi2;
	cout<<"dikdortgenin kenarlarini girinki cizelim:\n\nust-alt kenar uzunluklari>> ";
	cin>>sayi;
	cout<<"yan kenar uzunluklari>> ";
	cin>>sayi2;
	for(int i=0;i<sayi2;i++)
	{
		for(int j=0;j<sayi;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
