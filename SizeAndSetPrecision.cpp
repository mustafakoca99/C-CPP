#include <iostream>
#include <iomanip>
#include <ios>
#include <string>

//US�NG NAMESPACE STD KOMUTU S�REKL� STD YAZMAKTAN B�Z� KURTARIR

using namespace std;
int main(int argc, char** argv) {
	string mustafa;
	cout<<"kelime gir:";
	cin>>mustafa;
	//cout<<mustafa;
	//G�RD���M�Z KEL�MEN�N KARAKTER BOYUTUNU �L�ER. BO�LUK KARAKTER�N� G�RMEZ.
	int sayac=mustafa.size();
	cout<<endl<<"kelime sayisi: "<<sayac;
	if(sayac<10){
		cout<<endl<<"sayi 10 dan kucuk";
	}
	else{
		cout<<endl<<"sayi 10 dan buyuk";
	}
	//
	double deneme=0.045263;
	//POS�X MANTI�INDA SAYILARI BELLEKTE TUTAR
	//
	streamsize prec=cout.precision();
	cout<<endl<<"your final grade is "<<setprecision(3)<<deneme<<setprecision(prec)<<endl;
	return 0;
}
