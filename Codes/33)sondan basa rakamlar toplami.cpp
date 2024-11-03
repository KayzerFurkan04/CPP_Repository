#include<iostream>
using namespace std;
int main()
{
	int sayi;
	int toplam=0;
	int rakam=0;
	cout<<"sondan basa rakamlari toplamini gormek istediginiz sayiyi giriniz"<<endl;
	cin>>sayi;
	while(sayi>0)
	{
		rakam=sayi%10;
		toplam=toplam+rakam;
		sayi=sayi/10;
		cout<<toplam<<endl;
	}
	return 0;
}
