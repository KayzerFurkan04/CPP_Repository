#include<iostream>
using namespace std;
int main()
{
	cout<<"lutfen kullanici adinizi ve sifrenizi giriniz\n"<<endl;
	string usernamee="araba@gmail.com";
	string passwordd="furkan2004";
	
	string username;
	string password;
	
	while(true)
	    {
		cout<<"kullanici adi: ";
		cin>>username;
		cout<<"sifre: ";
		cin>>password;
		
				if(username==usernamee  &&  password==passwordd)
		{
			cout<<"\ngiris yapiliyor..."<<endl;
			break;
		}
		
			if(username!=usernamee  &&  password==passwordd || username!=usernamee  &&  password!=passwordd || username==usernamee  &&  password!=passwordd)
		{
			cout<<"\nkullanici adi veya sifre hatali\n(3 hakkiniz kaldi)"<<endl;
			
		cout<<"\nkullanici adi: ";
		cin>>username;
		cout<<"sifre: ";
		cin>>password;
		
				if(username==usernamee  &&  password==passwordd)
		{
			cout<<"\ngiris yapiliyor..."<<endl;
			break;
		}
			
						if(username!=usernamee  &&  password==passwordd || username!=usernamee  &&  password!=passwordd || username==usernamee  &&  password!=passwordd)
		{
			cout<<"\nkullanici adi veya sifre hatali\n(2 hakkiniz kaldi)"<<endl;
			
		cout<<"\nkullanici adi: ";
		cin>>username;
		cout<<"sifre: ";
		cin>>password;
		
						if(username==usernamee  &&  password==passwordd)
		{
			cout<<"\ngiris yapiliyor..."<<endl;
			break;
		}
		
								if(username!=usernamee  &&  password==passwordd || username!=usernamee  &&  password!=passwordd || username==usernamee  &&  password!=passwordd)
		{
			cout<<"\nkullanici adi veya sifre hatali\n(1 hakkiniz kaldi)"<<endl;
			
		cout<<"\nkullanici adi: ";
		cin>>username;
		cout<<"sifre: ";
		cin>>password;
		
								if(username==usernamee  &&  password==passwordd)
		{
			cout<<"\ngiris yapiliyor..."<<endl;
			break;
		}
		
										if(username!=usernamee  &&  password==passwordd || username!=usernamee  &&  password!=passwordd || username==usernamee  &&  password!=passwordd)
		{
			cout<<"\nsisteminiz kilitlendi"<<endl;
			break;
	    }
      	}
        }
	    }
		
	    }
	
	return 0;	
}