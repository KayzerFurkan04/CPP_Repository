#include<iostream>
using namespace std;
int main()
{
	double a,b;
	string islem;
	
	cout<<"1 = toplama islemi"<<endl;
	cout<<"2 = cikarma islemi"<<endl;
	cout<<"3 = carpma islemi"<<endl;
	cout<<"4 = bolme islemi"<<endl;
	
	cout<<"islem yapacaginiz sayilari giriniz"<<endl;
	cin>>islem;
	
	if(islem=="1")
	{
		cout<<"a= ";
		cin>>a;
		cout<<"b= ";
		cin>>b;
		cout<<"toplamlari= "<<a+b<<endl;
	}
		else if(islem=="2")
	{
		cout<<"a= ";
		cin>>a;
		cout<<"b= ";
		cin>>b;
		cout<<"farlari= "<<a-b<<endl;
	}
		else if(islem=="3")
	{
		cout<<"a= ";
		cin>>a;
		cout<<"b= ";
		cin>>b;
		cout<<"carpimlari= "<<a*b<<endl;
	}
		else if(islem=="4")
	{
		cout<<"a= ";
		cin>>a;
		cout<<"b= ";
		cin>>b;
		cout<<"bolumleri= "<<a/b<<endl;
	}
	else
	{
		cout<<"hatali islem..."<<endl;
    }
return 0;
}