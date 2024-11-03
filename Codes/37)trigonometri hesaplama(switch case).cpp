#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int secim;
	cout<<"Asagidaki trigonometrik fonksiyonlardan birini seciniz, seciminizin numarasini giriniz.\n1)sinx          9)coversinx        17)crdx\n2)cosx          10)covercosx\n3)tanx          11)haversinx\n4)cotx          12)havercosx\n5)secx          13)hacoversinx\n6)cosecx        14)hacovercosx\n7)versinx       15)exsecx\n8)vercosx       16)excosecx\n\n";
	cout<<">> ";
	cin>>secim;
	
	switch(secim)
	{
		case 1:
		double sinsayisi,sincevap;
		cout<<"\nsinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>sinsayisi;
		sincevap=sin(sinsayisi*3.14159265/180);
		cout<<"\nsinus"<<sinsayisi<<" = "<<sincevap<<endl;
		break;
		
		case 2:
		double cossayisi,coscevap;
		cout<<"\ncosinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>cossayisi;
		coscevap=cos(cossayisi*3.14159265/180);
		cout<<"\ncosinus"<<cossayisi<<" = "<<coscevap<<endl;
		break;
		
		case 3:
		double tansayisi,tancevap;
		cout<<"\ntanjant degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>tansayisi;
		tancevap=tan(tansayisi*3.14159265/180);
		cout<<"\ntanjant"<<tansayisi<<" = "<<tancevap<<endl;
		break;
		
		case 4:
		double cotsayisi,cotcevap;
		cout<<"\ncotanjant degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>cotsayisi;
		cotcevap=(1/tan(cotsayisi*3.14159265/180));
		cout<<"\ncotanjant"<<cotsayisi<<" = "<<cotcevap<<endl;
		break;
		
		case 5:
		double secsayisi,seccevap;
		cout<<"\nsecand degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>secsayisi;
		seccevap=(1/cos(secsayisi*3.14159265/180));
		cout<<"\nsecand"<<secsayisi<<" = "<<seccevap<<endl;
		break;
		
		case 6:
		double cosecsayisi,coseccevap;
		cout<<"\ncosecand degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>cosecsayisi;
		coseccevap=(1/sin(cosecsayisi*3.14159265/180));
		cout<<"\ncosecand"<<cosecsayisi<<" = "<<coseccevap<<endl;
		break;
		
		case 7:
		double versinsayisi,versincevap;
		cout<<"\nversinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>versinsayisi;
		versincevap=(1-cos(versinsayisi*3.14159265/180));
		cout<<"\nversinus"<<versinsayisi<<" = "<<versincevap<<endl;
		break;
		
		case 8:
		double vercossayisi,vercoscevap;
		cout<<"\nvercosinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>vercossayisi;
		vercoscevap=(1+cos(vercossayisi*3.14159265/180));
		cout<<"\nvercosinus"<<vercossayisi<<" = "<<vercoscevap<<endl;
		break;
		
		case 9:
		double coversinsayisi,coversincevap;
		cout<<"\ncoversinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>coversinsayisi;
		coversincevap=(1-sin(coversinsayisi*3.14159265/180));
		cout<<"\ncoversinus"<<coversinsayisi<<" = "<<coversincevap<<endl;
		break;
		
		case 10:
		double covercossayisi,covercoscevap;
		cout<<"\ncovercosinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>covercossayisi;
		covercoscevap=(1+sin(covercossayisi*3.14159265/180));
		cout<<"\ncovercosinus"<<covercossayisi<<" = "<<covercoscevap<<endl;
		break;
		
		case 11:
		double haversinsayisi,haversincevap;
		cout<<"\nhaversinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>haversinsayisi;
		haversincevap=((1-cos(haversinsayisi*3.14159265/180))/2);
		cout<<"\nhaversinus"<<haversinsayisi<<" = "<<haversincevap<<endl;
		break;
		
		case 12:
		double havercossayisi,havercoscevap;
		cout<<"\nhavercosinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>havercossayisi;
		havercoscevap=((1+cos(havercossayisi*3.14159265/180))/2);
		cout<<"\nhavercosinus"<<havercossayisi<<" = "<<havercoscevap<<endl;
		break;
		
		case 13:
		double hacoversinsayisi,hacoversincevap;
		cout<<"\nhacoversinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>hacoversinsayisi;
		hacoversincevap=((1-sin(hacoversinsayisi*3.14159265/180))/2);
		cout<<"\nhacoversinus"<<hacoversinsayisi<<" = "<<hacoversincevap<<endl;
		break;
		
		case 14:
		double hacovercossayisi,hacovercoscevap;
		cout<<"\nhacovercosinus degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>hacovercossayisi;
		hacovercoscevap=((1+sin(hacovercossayisi*3.14159265/180))/2);
		cout<<"\nhacovercosinus"<<hacovercossayisi<<" = "<<hacovercoscevap<<endl;
		break;
		
		case 15:
		double exsecsayisi,exseccevap;
		cout<<"\nexsecand degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>exsecsayisi;
		exseccevap=((1/cos(exsecsayisi*3.14159265/180))-1);
		cout<<"\nexsecand"<<exsecsayisi<<" = "<<exseccevap<<endl;
		break;
		
		case 16:
		double excosecsayisi,excoseccevap;
		cout<<"\nexcosecand degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>excosecsayisi;
		excoseccevap=((1/sin(excosecsayisi*3.14159265/180))-1);
		cout<<"\nexcosecand"<<excosecsayisi<<" = "<<excoseccevap<<endl;
		break;
		
		case 17:
		double crdsayisi,crdcevap;
		cout<<"\nchord degerini bulacaginiz sayiyi giriniz: "<<endl;
		cout<<">> ";
		cin>>crdsayisi;
		crdcevap=2*sin((crdsayisi*3.14159265/180)/2);
		cout<<"\nchord"<<crdsayisi<<" = "<<crdcevap<<endl;
		break;
		
		default:
		cout<<"\nhatali giris"<<endl;
		break;
	}
	return 0;
}
