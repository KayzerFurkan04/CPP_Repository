#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string a, b;
	cout<<"girdiginiz sicaklik birimi nedir?\n>>";
	cin>>a;
	cout<<"cevirmek istediginiz sicaklik birimi nedir?\n>>";
	cin>>b;
	
	if(a=="celcius" and b=="kelvin" || a=="derece" and b=="kelvin")
	{
		double i,j;
		j=0;
		i=0;
		cout<<"deger giriniz: "<<endl;
		cin>>i;
		j=i+273.15;
		cout<<"sonuc: "<<j<<endl;
	}
	
	if(a=="celcius" and b=="fahreneit" || a=="derece" and b=="fahreneit")
	{
		double e,f;
		e=0;
		f=0;
		cout<<"deger giriniz: "<<endl;
		cin>>e;
		f=9/5*e+32;
		cout<<"sonuc: "<<f<<endl;
	}
	
	if(a=="kelvin" and b=="fahreneit")
	{
	   double r,s;
	   r=0;
	   s=0;
	   cout<<"deger giriniz: "<<endl;
	   cin>>r;
	   s=(r-273.15)*9/5+32;
	   cout<<"sonuc: "<<s<<endl;
	}
	
	if(a=="kelvin" and b=="derece" || a=="kelvin" and b=="celcius")
	{
	    double c,d;
	    c=0;
	    d=0;
	    cout<<"deger giriniz: "<<endl;
	    cin>>c;
	    d=c-273.15;
	    cout<<"sonuc: "<<d<<endl;
	}
	
	if(a=="fahreneit" and b=="kelvin")
	{
	   double v,y;
	   v=0;
	   y=0;
	   cout<<"deger giriniz: "<<endl;
	   cin>>v;
	   y=(v+459.67)*5/9;
	   cout<<"sonuc: "<<y<<endl;
	}
	
	if(a=="fahreneit" and b=="derece" || a=="fahreneit" and b=="celcius")
	{
		double k,l;
		k=0;
		l=0;
		cout<<"deger giriniz: "<<endl;
		cin>>k;
	    l=(5/9)*(k-32);
	    cout<<"sonuc: "<<l<<endl;
	}
	return 0;
}
