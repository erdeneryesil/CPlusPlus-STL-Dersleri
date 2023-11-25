#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	std::unordered_set<int> s{11,22,33,44};
	
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	s.rehash(10);	

	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";

	return 0;
}
