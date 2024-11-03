#include<iostream>
using namespace std;
int main()
{
	int islem;
	cout<<"5^2 kactir?\n1.secenek) 3\t2.secenek) 7\t3.secenek) 10\t4.secenek) 25\n"<<endl;
	cin>>islem;
	
	switch(islem)
	{
	    case 1:
			cout<<"\nyanlis cevap"<<endl;
			break;
			
		case 2:
			cout<<"\nyanlis cevap"<<endl;
			break;
			
		case 3:
			cout<<"\nyanlis cevap"<<endl;
			break;
			
	    case 4:
			cout<<"\ndogru cevap"<<endl;
			break;
			
		default:
		cout<<"\nhatali giris"<<endl;
		break;	
			
	}
	return 0;
}
