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
#include <fstream>
#include <cstring>

using namespace std;

int* invalid_pointer(){
	int x;
	return &x;
}

int* pointer_to_static(){
	static int x;
	return &x;
}

int* pointer_to_dynamic(){
	return new int(0);
}

char* duplicate_chars(const char* p){
	size_t lenght=strlen(p)+1;
	char* result=new char[lenght];
	copy(p,p+lenght,result);
	return result;
}

int main(int argc, char** argv){
	//dosya oluþturma
	
	/*ifstream infile("in");
	ofstream outfile("out");
	string s;
	while (getline(infile, s))
	outfile << s << endl;*/
	
	//yazý yazma - guzel bilgi
	int fail_count=0;
	for(int i=0; i<argc;++i){
		ifstream in(argv[i]);
		if(in){
			string s;
			while(getline(in,s))
				cout<<s<<endl;
		}
		else{
			cerr<<"cannot open file "<<argv[i]<<endl;
			++fail_count;
		}
	}
	return fail_count;
}
