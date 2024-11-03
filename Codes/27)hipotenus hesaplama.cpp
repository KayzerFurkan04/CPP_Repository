#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,hipotenus;
	cout<<"dik ucgenin yan kenarlarinin uzunluklarini giriniz"<<endl;
	cin>>a;
	cin>>b;
	hipotenus=sqrt(pow(a,2)+pow(b,2));  // "pow kare alir"
	cout<<"hipotenus: "<<hipotenus<<endl;
	return 0;
}
