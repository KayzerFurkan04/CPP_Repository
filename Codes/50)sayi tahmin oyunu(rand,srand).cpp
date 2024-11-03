#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a,x,i;
	i=1;
	srand(time(0));
	x=1+rand()%999;
	cout<<"bir sayi tuttum 0 ile 1000 arasinda hadi tahmin et:"<<endl;
	cin>>a;
	while(a<x || a>x)
	{
		if(a<x)
		{
			cout<<"daha buyuk bir sayi gir";
			cin>>a;
		}
		else if(a>x)
		{
			cout<<"daha kucuk bir sayi gir";
			cin>>a;
		}
		i++;
	}
	    if(a==x)
	    cout<<"                           dogru! "<<i<<". denemede buldun!";
	return 0;
}
