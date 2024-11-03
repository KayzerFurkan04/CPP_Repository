#include<iostream>
using namespace std;
int main()
{
	int x,y,z,sayi,t;
	cout<<"ici bos olan karenin bir kenar uzunlugunu giriniz ki cizelim: ";
	cin>>sayi;
	
	if(sayi==1)
   {
   	cout<<"*";
   }
	
	else
   {
		
	for(int x=0;x<sayi;x++)
	{
		cout<<"* ";
	}
	cout<<endl;
	
	for(int t=0;t<(sayi-2);t++)
	{
	for(int z=0;z<sayi;z++)
	{
        cout<<"* ";
        z=z+1;
		while(z>0 and z<(sayi-1))
		{
			z=z+1;
			cout<<"  ";
		}
		cout<<"*";
	}
	cout<<endl;
    }
	
		for(int y=0;y<sayi;y++)
	{
		cout<<"* ";
	}
	
   }

	return 0;
}
