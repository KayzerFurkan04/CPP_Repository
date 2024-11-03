#include<iostream>
using namespace std;
int main()
{
	double sayi;
	cout<<"tersini bulmak istediginiz sayiyi girin"<<endl;
	cin>>sayi;
	if(sayi>0)
	{
	cout<<"toplamaya gore tersi: -"<<sayi<<endl;
	cout<<"carpmaya gore tersi: 1/"<<sayi<<endl;
	return 0;
    }
    
    if(sayi==0)
	{
	cout<<"toplamaya gore tersi: 0"<<endl;
	cout<<"carpmaya gore tersi: tanimsiz"<<endl;
	return 0;
    }

    if(sayi<0)
	{
	double x;
	x=(sayi)*(-1);	
	cout<<"toplamaya gore tersi: "<<x<<endl;
	cout<<"carpmaya gore tersi: 1/"<<sayi<<endl;
	return 0;
    }
}
