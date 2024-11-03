#include<iostream>
using namespace std;
int main()
{
	string password="furkan2004";
	string input;
	cout<<"lutfen parolanizi giriniz"<<endl;
	cin>>input;
	
	do
	{
		cout<<"tekrar deneyin"<<endl;
		cin>>input;
	}
	while(input!=password);
	
	if(password==input)
	cout<<"parolanizi dogru girdiniz"<<endl;
	return 0;
}