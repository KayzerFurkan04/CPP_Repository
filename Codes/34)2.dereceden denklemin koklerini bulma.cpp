#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,kok1,kok2,delta;
	cout<<"ax^2+bx+c=0\ndenklemindeki a b c degerlerini sirasiyla girin, koklerini soliyelim"<<endl;
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"c: ";
	cin>>c;
	delta=pow(b,2)-4*a*c;
	kok1=(-b-sqrt(delta))/(2*a);
	kok2=(-b+sqrt(delta))/(2*a);
	if(delta==0)
	{
		cout<<"\ndenklemin 1 koku vardir\nkok= "<<kok1<<endl;
	}
	else if(delta>0)
	{
		cout<<"\ndenklemin 2 koku vardir\nkok1= "<<kok1<<"\n"<<"kok2= "<<kok2<<endl;
	}
	else
	{
		cout<<"\ndenklemin sanal 2 koku vardir"<<endl;
	}
	return 0;
}
