#include<iostream>
#include<locale.h>  // setlocale(LC_ALL,"Turkish") yazmamizi saglar.
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish"); // bu tan�mlama sayesinde istedi�imiz dilden karakter kullanabiliriz (t�rnak i�indekiler)
	double sayi,sonuc,sonuc2;
  cout<<"karek�k�n� ve k�pk�k�n� almak istedi�iniz say�y� girin"<<endl;
  cin>>sayi;
  sonuc=sqrt(sayi);
  sonuc2=cbrt(sayi); // "sqrt karek�k" , "cbrt k�pk�k" almam�z� sa�lar.
  cout<<"karek�k: "<<sonuc<<endl;
  cout<<"k�pk�k: "<<sonuc2<<endl;
  return 0;
}
