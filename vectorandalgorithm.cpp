#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	//vector<string> kisiler;
	//kisiler.push_back("mustafa koca");
	//kisiler.push_back("halil kantek");
	//kisiler.push_back("eray gokagac");
	//for(auto current : kisiler){
	//	cout<<current<<endl;
	//}
	//sort(kisiler.begin(), kisiler.end());
	//for(auto current:kisiler){
	//	cout<<current<<endl;
	//}
	//return 0;
	int arr[]={10,20,0,5,23,42,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> v(arr,arr+n);
	cout<<"vector: ";
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";	
	}
	sort(v.begin(),v.end());
		cout<<"\nsiralamadan sonra vector: ";
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		reverse(v.begin(),v.end());
		cout<<"\nterse yazilmis sirali vector: ";
		for(int i=0;i<6;i++){
				cout<<v[i]<<" ";
		}
		cout<<"\nmaximum: ";
		cout<<*max_element(v.begin(),v.end());
		cout<<"\nminimum: ";
		cout<<*min_element(v.begin(),v.end());
		//cout<<"vector elemanlarinin toplami: ";
		//vector toplama komutu
		//cout<<accumulate(v.begin(),v.end(),0);
		return 0;
}
