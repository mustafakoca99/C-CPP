#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ios> 
#include <stdexcept>
//#include "grade.h"
#include <iomanip>
#include <map>
#include <sstream>
//#include <boost/filesystem.hpp>
#include <conio.h>

using namespace std;

int main(int argc, char** argv){
	//pointer iþlemi
	int x = 5;
	int* p = &x;
	cout << "x = " << x << endl;
	*p = 6;
	cout << "x = " << x << endl<<endl;
	//ay günlerini yazdýrma
	const int month_lengths[] = {
	31, 28, 31, 30, 31, 30, 
	31, 31, 30, 31, 30, 31
	};
	for(int i=0; i<12; i++){
		cout<<month_lengths[i]<<endl;
	}
	//ekrana char dizisi yazdýrma
	cout<<endl;
	const char hello[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	for(int i=0; i<6; i++){
		cout<<hello[i];
	}
	//main fonksiyonu içinde ki parametreler ile iþlem yapma
	if (argc > 1) {
	int i;
	for (i = 1; i < argc-1; ++i) 
	cout << argv[i] << " ";
	cout << argv[i] << endl; 
}

	
	return 0;
}
