#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{11,22,33,44};
	
	cout<<s.load_factor()<<endl;
	cout<<s.max_load_factor()<<endl;

	s.max_load_factor(1.5);

	cout<<s.load_factor()<<endl;
	cout<<s.max_load_factor()<<endl;

	return 0;
}
