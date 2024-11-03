#include<iostream>
#include<locale.h>  // setlocale(LC_ALL,"Turkish") yazmamizi saglar.
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish"); // bu tanýmlama sayesinde istediðimiz dilden karakter kullanabiliriz (týrnak içindekiler)
	double sayi,sonuc,sonuc2;
  cout<<"karekökünü ve küpkökünü almak istediðiniz sayýyý girin"<<endl;
  cin>>sayi;
  sonuc=sqrt(sayi);
  sonuc2=cbrt(sayi); // "sqrt karekök" , "cbrt küpkök" almamýzý saðlar.
  cout<<"karekök: "<<sonuc<<endl;
  cout<<"küpkök: "<<sonuc2<<endl;
  return 0;
}
