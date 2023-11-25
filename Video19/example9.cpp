#include<iostream>
#include<set>
using namespace std;

int main(){

	set<int> s{11,22,44,55};

	auto itr=s.lower_bound(22);		//22
	cout<<*itr<<endl;

	itr=s.lower_bound(33);			//44
	cout<<*itr<<endl;

	itr=s.lower_bound(44);			//44
	cout<<*itr<<endl;

	itr=s.lower_bound(56);			//s.end()	
	cout<<*itr<<endl;

	cout<<&(*itr)<<endl;
	cout<<&(*s.end())<<endl;
	
	return 0;
}
