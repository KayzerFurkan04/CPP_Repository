#include<iostream>
using namespace std;
int main()
{
	string password="furkan2004";
	string input;
	cout<<"lutfen parolanizi girin : \n>>";
	cin>>input;
	
	if(password==input)
	cout<<"\nparolanizi dogru girdiniz"<<endl;
	
	else
    do
   {
		cout<<"\ntekrar deneyin\n(3 hakkiniz kaldi)\n>>";
		cin>>input;
		
		if(password==input)
		cout<<"\nparolanizi dogru girdiniz"<<endl;
		
	else	
		do
		{
			cout<<"\ntekrar deneyin\n(2 hakkiniz kaldi)\n>>";
		cin>>input;	
		
			if(password==input)
		cout<<"\nparolanizi dogru girdiniz"<<endl;
		
		else
		do
		{
				cout<<"\ntekrar deneyin\n(1 hakkiniz kaldi)\n>>";
		cin>>input;	
		
		if(password==input)
		cout<<"\nparolanizi dogru girdiniz"<<endl;
		
		else
		{
		  cout<<"\nsisteminiz kilitlendi"<<endl;	
		}
		return 0;
		}
		while(password!=input);
		
		}
	while(password!=input);
	
	}
	while(password!=input);
	return 0;
}