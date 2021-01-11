#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int sayi[3][4]={{1,2,3,4},{5,6,7,8},{1,8,9,5}};
	
	for(int i=0; i<3; i++){
	
		for(int j=0; j<4;j++){
	
			cout<<sayi[i][j];
	
		}
	
		cout<<endl;
	
	}
	return 0;
}
