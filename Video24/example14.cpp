#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<char>s1{'a','e','i'};
	unordered_set<char>s2{'b','c','d','f'};

	for(char i:s1){
		cout<<i<<"-"<<s1.bucket(i)<<", ";
	}
	cout<<"\n";

	for(char i:s2){
		cout<<i<<"-"<<s2.bucket(i)<<", ";
	}
	cout<<"\n--------------\n";

	s1.swap(s2);

	for(char i:s1){
		cout<<i<<"-"<<s1.bucket(i)<<", ";
	}
	cout<<"\n";

	for(char i:s2){
		cout<<i<<"-"<<s2.bucket(i)<<", ";
	}
	cout<<"\n";

	return 0;
}
