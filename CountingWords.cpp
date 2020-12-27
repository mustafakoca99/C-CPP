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

using namespace std;

map<string,vector<int> > 
//boost::split;
	xref(istream& in, 
		vector<string> find_words(const string&) = boost::split){
		string line;
		int line_number=0;
		map<string,vector<int>> ret;
		while(getline(in,line)){
			++line_number;
			vector<string> words=find_words(line);
			for(vector<string>::const_iterator it=words.begin();
			it!=words.end();++it
			)
				ret[*it].push_back(line_number);
		}
		return ret;
	}

int main(){
	
	/*map<int,string> kisiler;
	kisiler.insert({5,"sezer"});
	kisiler[1]="sefa";
	kisiler.insert(pair<int,string>(0,"yusuf"));
	cout<<kisiler.size();
	for(auto current:kisiler)
		cout<<current.second<<endl;
	cout<<kisiler[0];*/
	
	map<string,vector<int>> ret=xref(cin);
	for(map<string,vector<int>>::const_iterator it=ret.begin();
	it!=ret.end();++i
	){
		cout<<it->first<<"þu satýrlarda meydana gelir (s): ";
		vector<int>::const_iterator line_it=it->second.begin();
		cout<<*line_it;
		while(line_it!=it->second.end()){
			cout<<","<<*line_it;
			++line_it;
		}
		cout<<endl;
	}
	return 0;
}
