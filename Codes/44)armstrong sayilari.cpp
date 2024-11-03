#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int dsayi,birler,onlar,yuzler,binler;
	cout<<"3 basamakli armstrong sayilari= \n";
	for(int dsayi=100;dsayi<=999;dsayi++)
	{
		birler=dsayi%10;
		onlar=(dsayi%100)/10;
		yuzler=dsayi/100;
		if(dsayi==pow(yuzler,3)+pow(onlar,3)+pow(birler,3))
		cout<<dsayi<<endl;
	}
	cout<<"\n4 basamakli armstrong sayilari= \n";
		for(int dsayi=1000;dsayi<=9999;dsayi++)
	{
		birler=dsayi%10;
		onlar=(dsayi%100)/10;
		yuzler=(dsayi%1000)/100;
		binler=dsayi/1000;
		if(dsayi==pow(yuzler,4)+pow(onlar,4)+pow(birler,4)+pow(binler,4))
		cout<<dsayi<<endl;
	}
	return 0;
}
