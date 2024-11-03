#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"birbirinden farkli 3 sayi giriniz bizde buyukluk kucukluk iliskilerini soliyelim"<<endl;
	cout<<"\nilk sayiyi giriniz\n>> ";
	cin>>a;
	cout<<"\nikinci sayiyi giriniz\n>> ";
	cin>>b;
	cout<<"\nucuncu sayiyi giriniz\n>> ";
	cin>>c;
	
	    if(a>b and b>c)
	{
		cout<<"\n"<<a<<" > "<<b<<" > "<<c<<endl;
			return 0;
	}
		if(a>c and c>b)
	{
		cout<<"\n"<<a<<" > "<<c<<" > "<<b<<endl;
			return 0;
	}
		if(b>a and a>c)
	{
		cout<<"\n"<<b<<" > "<<a<<" > "<<c<<endl;
			return 0;
	}
	    if(b>c and c>a)
	{
		cout<<"\n"<<b<<" > "<<c<<" > "<<a<<endl;
			return 0;
	}	
		if(c>b and b>a)
	{
		cout<<"\n"<<c<<" > "<<b<<" > "<<a<<endl;
			return 0;
	}
		if(c>a and a>b)
	{
		cout<<"\n"<<c<<" > "<<a<<" > "<<b<<endl;
			return 0;
	}
			if(c>a and a>b)
	{
		cout<<"\n"<<c<<" > "<<a<<" > "<<b<<endl;
			return 0;
	}
			if(a>b and b==c)
	{
		cout<<"\n"<<a<<" > "<<b<<" = "<<c<<endl;
			return 0;
	}
			if(c>a and a==b)
	{
		cout<<"\n"<<c<<" > "<<a<<" = "<<b<<endl;
			return 0;
	}
			if(b>a and a==c)
	{
		cout<<"\n"<<b<<" > "<<a<<" = "<<c<<endl;
			return 0;
	}
			if(c==a and a==b)
	{
		cout<<"\n"<<c<<" = "<<a<<" = "<<b<<endl;
			return 0;
	}
				if(a<b and b==c)
	{
		cout<<"\n"<<b<<" = "<<c<<" > "<<a<<endl;
			return 0;
	}
			if(c<a and a==b)
	{
		cout<<"\n"<<a<<" = "<<b<<" = "<<c<<endl;
		return 0;
	}
			if(b<a and a==c)
	{
		cout<<"\n"<<a<<" = "<<c<<" > "<<b<<endl;
		return 0;
	}
}
