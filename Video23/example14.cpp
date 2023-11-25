#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{22,33,11,44};

	for(int i:s){
		cout<<i<<" ";	
	}
	cout<<"\n";
	
	unordered_set<int>::iterator itr=s.find(44);
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	itr=s.find(99);			//s.end()
	cout<<*itr<<endl;
	
	return 0;
}
