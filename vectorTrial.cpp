#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
	vector<int> m(10);
	for(int i=0; i<m.size();i++){
		cout<<""<<m[i];
	}
	vector<int> k(10,5);
	for(int i=0; i<k.size();i++){
		cout<<" "<<k[i];
	}
   vector<int> vect_array(10,5);
	//belirtilen bir konuma eleman ekle:
   vector<int>::iterator it = vect_array.begin() + 2;//baþlangýçtan itibaren iki ileri.
   vect_array.insert(it,66);//ekle.
   
   //dizi sonuna eleman ekle:
   vect_array.push_back(21);
   vect_array.push_back(22);
   vect_array.push_back(23);
   
    //ekrana yazdýr:
   for(unsigned i= 0; i<vect_array.size(); i++)
    {
     cout << " " << vect_array[i];
    } 
    cout << "\n";
    //dizi içerisinden eleman çýkar:
    it = vect_array.begin() + 2;
    vect_array.erase(it);
  
   //ekrana yazdýr:
   for(unsigned i= 0; i<vect_array.size(); i++)
    {
     cout << " " << vect_array[i];
    } 
       cout << "\n";
    //swap kullanýmý:
    vector<int> vect_array2(13,0);
    vect_array.swap(vect_array2);
        //ekrana yazdýr:
   for(unsigned i= 0; i<vect_array.size(); i++)
    {
     cout << " " << vect_array2[i];
    } 
	return 0;
}
