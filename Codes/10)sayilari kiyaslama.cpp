#include<iostream>
using namespace std;
int main()
{
	int sayi1,sayi2;
	cout<<"lutfen sayi giriniz, bizde size iliskilerini soyliyelim"<<endl; 
	cin>>sayi1;
	cin>>sayi2;
	
	if(sayi1==sayi2)
	cout<<sayi1<<" = "<<sayi2<<endl;
	
	if(sayi1<sayi2)
	cout<<sayi1<<" < "<<sayi2<<endl;
	
	if(sayi1>sayi2)
	cout<<sayi1<<" > "<<sayi2<<endl;
	return 0;
}