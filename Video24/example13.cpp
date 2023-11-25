#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s1{11,22,33};
	unordered_set<int> s2;
	s2=s1;

	for(int i:s1){
		cout<<i<<"-"<<s1.bucket(i)<<", ";
	}
	cout<<"\n";

	for(int i:s2){
		cout<<i<<"-"<<s2.bucket(i)<<", ";
	}
	cout<<"\n";

	s1.erase(22);
		
	for(int i:s1){
		cout<<i<<"-"<<s1.bucket(i)<<", ";
	}
	cout<<"\n";

	for(int i:s2){
		cout<<i<<"-"<<s2.bucket(i)<<", ";
	}
	cout<<"\n";

	return 0;
}
