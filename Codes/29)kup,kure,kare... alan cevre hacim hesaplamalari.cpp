#include<iostream>
#include<cmath>
#define Pi 3.14;

using namespace std;
int main()
{
	double kenar, yaricap, cembercevre, dairealan, kurehacim, kurealan, karecevre, karealan,kupalan, kuphacim;
	cout<<"yaricap ve kenar uzunluklarini giriniz"<<endl;
	cin>>yaricap>>kenar;
	cembercevre=2*yaricap*Pi;
	dairealan=pow(yaricap,2)*Pi;
	kurehacim=(4*pow(yaricap,3)/3)*Pi;
	kurealan=4*pow(yaricap,2)*Pi;
	karecevre=4*kenar;
	karealan=pow(kenar,3);
	kupalan=6*karealan;
	kuphacim=pow(kenar,3);
	cout<<"cemberin cevresi: "<<cembercevre<<"\ndairenin alani: "<<dairealan<<"\nkurenin hacmi: "<<kurehacim<<"\nkurenin alani: "<<kurealan<<"\nkarenin cevresi: "<<karecevre<<"\nkarenin alani: "<<karealan<<"\nkupun alani: "<<kupalan<<"\nkupun hacmi: "<<kuphacim<<endl;
	return 0;
}
