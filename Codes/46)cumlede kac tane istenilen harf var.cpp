#include<iostream>
using namespace std;
int main()
{
	int sayi;
	char harf;
	cout<<"nokta ile biten 2 cumle giriniz bizde size icinde kac harf oldugunu soliyelim"<<endl;
	for(int i=1;i<=2;i++)
	{
		sayi=0;
		cin>>harf;
		while(harf!='.')
		{
		if((harf=='A') or (harf=='a'))
		{
			sayi++;
		}
				cin>>harf;
	}
		cout<<i<<". cumlede "<<sayi<<" tane (A,a) harfi var"<<endl;
	}
	return 0;
}
