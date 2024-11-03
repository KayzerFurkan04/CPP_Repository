#include<iostream>
using namespace std;
int main()
{
	int sayi,sayioncesi,sayioncesioncesi,sayisonrasi,sayisonrasisonrasi;
	cout<<"bir sayi giriniz, girdiginiz sayinin tek mi cift mi oldugunu soliyelim ve eger isterseniz girdiginiz sayiyi tek ise tekli, cift ise ciftli 5'lik oruntu seklinde de yazalim: ";
	cin>>sayi;
	sayioncesi=sayi-2;
	sayioncesioncesi=sayi-4;
	sayisonrasi=sayi+2;
	sayisonrasisonrasi=sayi+4;
	
	if(sayi%2!=0)
	{
		int islem;
		cout<<"\n--girdiginiz sayi tektir--"<<endl;
		cout<<"\ngirdiginiz sayi ortada olucak sekilde elemanlari tek olan 5'lik oruntu seklinde yazalim mi?\n1)evet\n2)hayir\n"<<endl;
		cin>>islem;
		switch(islem)
		{
			case 1:
				cout<<"\n( "<<sayioncesioncesi<<" "<<sayioncesi<<" "<<sayi<<" "<<sayisonrasi<<" "<<sayisonrasisonrasi<<" )"<<endl;
				break;
			case 2:
				cout<<"\nsen bilirsin kardes ben vazifemi yerine getirdim."<<endl;
				break;
			default:
				cout<<"\nhatali giris yaptin kardes, elinin ayarini si*iyim. Tövbe tövbe..";
				break;
		}
	}
	
		if(sayi%2==0)
	{
		int islem2;
		cout<<"\n--girdiginiz sayi cifttir--"<<endl;
		cout<<"\ngirdiginiz sayi ortada olucak sekilde elemanlari cift olan 5'lik oruntu seklinde yazalim mi?\n1)evet\n2)hayir\n"<<endl;
		cin>>islem2;
		switch(islem2)
		{
			case 1:
				cout<<"\n( "<<sayioncesioncesi<<" "<<sayioncesi<<" "<<sayi<<" "<<sayisonrasi<<" "<<sayisonrasisonrasi<<" )"<<endl;
				break;
			case 2:
				cout<<"\nsen bilirsin kardes ben vazifemi yerine getirdim."<<endl;
				break;
			default:
				cout<<"\nhatali giris yaptin kardes, elinin ayarini si*iyim. Tovbe Tovbe..";
				break;
		}
	}
	
	return 0;
}
