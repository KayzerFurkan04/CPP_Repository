#include<iostream>
using namespace std;
int main()
{
	double kdv_or=0.12;
	double yemek, icecek, garsoniye, toplam, kdv, pusula;
	string garson;
	
	cout<<"garson adi: ";
	cin>>garson;
	cout<<"yemeklerin toplam fiyati: ";
	cin>>yemek;
	cout<<"iceceklerin toplam fiyati: ";
	cin>>icecek;
	cout<<"garsoniye: ";
	cin>>garsoniye;
	toplam=icecek+garsoniye+yemek;
	kdv=toplam*kdv_or;
	pusula=toplam+kdv;
	cout<<"\n kdv: "<<kdv<<endl;
	cout<<"odenecek tutar: "<<pusula<<endl;
	cout<<"sorumlu garson: "<<garson<<endl;
	return 0;
}
