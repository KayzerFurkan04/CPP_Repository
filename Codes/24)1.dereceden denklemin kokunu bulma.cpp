#include<iostream>
using namespace std;
int main()
{
	double a,b,x;
	cout<<"ax+b=0\ndenkleminin cozumunu bulmak icin a ve b degerlerini giriniz."<<endl;
	cout<<"\na sayisini giriniz"<<endl;
	cin>>a;
	if(a==0)
	{
	do
	{
		cout<<"tekarar giriniz"<<endl;
		cin>>a;
	}
	while(a==0);
}
	cout<<"b sayisini giriniz"<<endl;
	cin>>b;
	x=-b/a;
	cout<<"cozum: "<<x<<"dir."<<endl;
	return 0;
}
