#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ios> 
#include <stdexcept>
//#include "grade.h"
#include <iomanip>

using namespace std;

istream& read_hw(istream& in,vector<double>& hw){
	if(in){
		hw.clear();
		double x;
		while(in>>x)
			hw.push_back(x);
		in.clear();
	}
	return in;
}

int main(){
	cout<<"isminiz: ";
	string name;
	cin>>name;
	cout<<"merhaba "<<name<<" !"<<endl;
	cout<<"vize ve final notlarinizi giriniz: ";
	double vize, final;
	cin>>vize>>final;
	cout<<"ev odevi notlari: ";
	vector<double> homework;
	read_hw(cin,homework);
	try{
		double final_grade=grade(vize,final,homework);
		streamsize prec = cout.precision();
		cout<<"son durum: "<<setprecision(3)
		<<final_grade<<setprecision(prec)<<endl;
		
	}
	catch{
		cout<<endl<<"senin notlarin!"
		<<endl<<"tekrar deneyin!"<<endl;
		return 1;
	}
	return 0;
}
