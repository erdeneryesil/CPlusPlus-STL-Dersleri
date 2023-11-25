#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int>s{11,22,33,44};

	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}

	s.emplace_hint(s.begin(),77);

	cout<<"\n";
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}

	s.emplace_hint(s.begin(),77);

	cout<<"\n";
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	
	return 0;
}
