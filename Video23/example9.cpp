#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<string> s{"Sinop","Ankara","İstanbul"};

	s.insert("Samsun");
	
	for(string i:s){
		cout<<i<<endl;
	}

	return 0;
}
