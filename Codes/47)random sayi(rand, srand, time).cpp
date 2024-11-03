#include<iostream>
#include<cstdlib>  // rand() ve srand() kullanabilmemizi saglar
#include<ctime>  // time() kullanabilmemizi saglar
using namespace std;
int main()
{
	int toplam=0;
	int b,d,a,c;
	srand(time(0)*997);
	for(int i=1;i<=10;i++)
	{
    b=(rand()%100)+1;
	cout<<b<<endl;
	toplam=toplam+b;
    } 
    c=toplam%10;
    a=toplam/100;
    d=(toplam/10)%10;
    cout<<"\nortalama: "<<a<<d<<","<<c<<endl;
    return 0;
}
