#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{22,33,11};
	s.emplace(44);
	s.emplace(55);
	
	for(int i:s){
		cout<<i<<endl;	
	}
	
	return 0;
}
