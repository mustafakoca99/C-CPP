#include <iostream>
#include <iomanip>
#include <ios>
#include <string>

//USÝNG NAMESPACE STD KOMUTU SÜREKLÝ STD YAZMAKTAN BÝZÝ KURTARIR

using namespace std;
int main(int argc, char** argv) {
	string mustafa;
	cout<<"kelime gir:";
	cin>>mustafa;
	//cout<<mustafa;
	//GÝRDÝÐÝMÝZ KELÝMENÝN KARAKTER BOYUTUNU ÖLÇER. BOÞLUK KARAKTERÝNÝ GÖRMEZ.
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
	//POSÝX MANTIÐINDA SAYILARI BELLEKTE TUTAR
	//
	streamsize prec=cout.precision();
	cout<<endl<<"your final grade is "<<setprecision(3)<<deneme<<setprecision(prec)<<endl;
	return 0;
}
