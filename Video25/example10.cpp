#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int>s{22,11,33};
	
	s.insert({11,22,33,33});
	
	for(int i:s){
		cout<<i<<endl;
	}

	return 0;
}
