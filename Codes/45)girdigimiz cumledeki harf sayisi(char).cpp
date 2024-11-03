#include<iostream>  // cin ve cout girmemizi saglar
using namespace std;
int main()
{
	int sayi;
	char harf;
	cout<<"nokta ile biten 2 cumle giriniz"<<endl;
	
	for(int i=1;i<=2;i++)
	{
		sayi=0;
		cin>>harf;
		while(harf!='.')
		{
			sayi++;
			cin>>harf;
		}
			cout<<i<<". cumle "<<sayi<<" harf iceriyor"<<endl;
	}
	return 0;
}
