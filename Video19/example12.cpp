#include<iostream>
#include<set>
using namespace std;

int main(){

	set<int> s{44,11,33,55,22};//11,22,33,44,55
	
	auto itr=s.find(11);			//11
	cout<<*itr<<endl;

	itr++;					//22
	cout<<*itr<<endl;
	
	itr=s.find(99);				//s.end()
	cout<<*itr<<endl;
	
	cout<<&(*itr)<<endl;
	cout<<&(*s.end())<<endl;
	
	return 0;
}
