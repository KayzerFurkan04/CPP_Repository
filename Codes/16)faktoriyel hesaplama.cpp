#include<iostream>
using namespace std;
int main()
{
	int sayi,faktoriyel;
	cout<<"faktoriyelini bulmak istediginiz sayiyi giriniz :"<<endl;
	cin>>sayi;	
	faktoriyel=1;
	
	for(int i=1;i<=sayi;i++)
	{
		faktoriyel*=i;
	}
	cout<<"faktoriyel : "<<faktoriyel<<endl;
	return 0;
}