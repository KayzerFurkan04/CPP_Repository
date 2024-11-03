#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		if(i==5)
		break;
		//continue; (break dedigimiz icin 5 ve sonrasini yazmaz, continue deseydik 5 i demez 10 a kadar devam ederdi.)
		cout<<i<<" ";
	}
	cout<<"son";
	return 0;
}
