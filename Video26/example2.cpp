#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int> s{11,22,33,44,11,11,55,66,55};
	
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	s.erase(11);

	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	s.erase(s.find(55),s.find(33));
	
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";

	return 0;
}
