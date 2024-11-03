#include<iostream>
using namespace std;
int main()
{
	int sayi;
	cout<<"yoluj uzunlugunu giriniz: ";
	cin>>sayi;
	
	cout<<"\n"<<endl;
	
	for(int z=0;z<(sayi*2);z++)
	{
		cout<<"_";
	}
	
	cout<<"\n"<<endl;
	
	cout<<endl;
	
	for(int x=0;x<sayi;x++)
	{
		cout<<"- ";
	}
	
	cout<<"\n"<<endl;
	  
	for(int y=0;y<(sayi*2);y++)
	{
		cout<<"_";
	}
	
	cout<<"\n\n"<<endl;
	return 0;
}
