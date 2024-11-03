#include<iostream>
using namespace std;
int main()
{
	double a;
	cout<<"suyun sicakligini celcius cinsinden girin, bizde size hangi halde oldugunu soliyelim.."<<endl;
	cin>>a;
	
    	if(a<0)
	{
		cout<<"kati"<<endl;
	}
		if(a>0 && a<100)
	{
		cout<<"sivi"<<endl;
	}
		if(a>100)
	{
		cout<<"gaz"<<endl;
	}
		if(a==0)
	{
		cout<<"kati+sivi"<<endl;
	}
		if(a==100)
	{
		cout<<"sivi+gaz"<<endl;
	}
	return 0;
}
