#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int mustafa[]={};
	int sayi;
	cout<<"sayi gir: ";
	cin>>sayi;
	
	for(int i=0; i<sayi; i++){
		cout<<"deger: ";
		cin>>mustafa[i];
	}
	
	for(int m=0; m<sayi; m++){
		cout<<mustafa[m]<<endl;
	}
	return 0;
}
