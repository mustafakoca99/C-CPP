#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	cout<<"isim: ";
	string name;
	cin>>name;
	cout<<"merhaba "<<name<<"!"<<endl;
	cout<<"vize ve final notu giriniz: ";
	double vize, final;
	cin>>vize>>final;
	cout<<"tum odev notlarinizi girin, "
	"ardindan dosyanin son hali: ";
	vector<double> homework;
	double x;
	while(cin>>x)
		homework.push_back(x);
		typedef vector<double>::size_type vec_sz;
		vec_sz size =homework.size();
		if(size==0){
			cout<<endl<<"notlarinizi girmelisiniz. "
			"tekrar deneyin"<<endl;
			return 1;
		}
		sort(homework.begin(),homework.end());
		vec_sz mid=size/2;
		double median;
		median=size%2==0?(homework[mid]+homework[mid-1])/2
		:homework[mid];
		streamsize koca_prec=cout.precision();
		cout<<"senin final notun: "<<setprecision(3)
		<<0.2*vize+0.4*final+0.4*median
		<<setprecision(koca_prec)<<endl;
		return 0;
}
