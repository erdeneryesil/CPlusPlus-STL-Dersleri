#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int> s{22,33,11,44,11,11};

	for(int i:s){
		cout<<i<<" ";	
	}
	cout<<"\n";
	
	unordered_set<int>::iterator itr=s.find(11);
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	itr=s.find(99);			//s.end()
	cout<<*itr<<endl;
	
	return 0;
}

