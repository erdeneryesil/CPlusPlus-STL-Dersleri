#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){

	unordered_set<char> s{'c','b','a'};

	vector<char>v{'e','f','d'};

	s.insert(v.begin(),v.end());
	
	for(char i:s){
		cout<<i<<endl;
	}
	
	return 0;
}
