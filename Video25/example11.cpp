#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){

	unordered_multiset<char> s{'c','b','a'};

	vector<char>v{'a','b','c','d'};

	s.insert(v.begin(),v.end());
	
	for(char i:s){
		cout<<i<<endl;
	}

	return 0;
}
