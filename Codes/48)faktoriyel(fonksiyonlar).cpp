#include<iostream>
using namespace std;
int Faktoriyel(int);

int Faktoriyel(int sayi)
{
	if(sayi<=1)
	{
		return 1;
	}
	else
	{
		return sayi*Faktoriyel(sayi-1);
	}
}

int main()
{
	for(int i=0;i<=10;i++)
	cout<<i<<"!"<<Faktoriyel(i)<<endl;
	return 0;
}
