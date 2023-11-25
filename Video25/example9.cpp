#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<string> s{"Sinop","Ankara","İstanbul"};

	s.insert("Samsun");
	s.insert("Sinop");
	
	for(string i:s){
		cout<<i<<endl;
	}

	return 0;
}
