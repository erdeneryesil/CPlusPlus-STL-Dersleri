#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int> s{22,33,11};
	s.emplace(44);
	s.emplace(11);
	s.emplace(11);
	s.emplace(11);
	
	for(int i:s){
		cout<<i<<endl;	
	}

	return 0;
}
