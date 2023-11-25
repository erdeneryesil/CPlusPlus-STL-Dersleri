#include<iostream>
#include<set>
using namespace std;

int main(){

	set<int> s{11,22,44,55};

	auto itr=s.upper_bound(11);		//22	
	cout<<*itr<<endl;

	itr=s.upper_bound(22);			//44	
	cout<<*itr<<endl;

	itr=s.upper_bound(33);			//44	
	cout<<*itr<<endl;
	
	itr=s.upper_bound(55);			//s.end()	
	cout<<*itr<<endl;

	cout<<&(*itr)<<endl;
	cout<<&(*s.end())<<endl;
	
	return 0;
}
