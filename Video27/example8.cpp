#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	
	unordered_map<double,string>m;
	m[1.11]="aaa";
	m[2.22]="bbb";
	m[3.33]="ccc";
	m[4.44]="ddd";
	m[5.55]="eee";
	
	cout<<m.count(2.22)<<endl;
	cout<<m.count(2.25)<<endl;

	auto itr=m.find(4.44);
	cout<<itr->first<<"\t"<<itr->second<<endl;

	itr=m.find(2.25);
	cout<<itr->first<<"\t"<<itr->second<<endl;

	return 0;
}

