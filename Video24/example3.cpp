#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{11,22,33,44};

	cout<<s.size()<<endl;
	cout<<s.max_size()<<endl;
	cout<<s.empty()<<endl;
	s.clear();
	cout<<s.empty()<<endl;
	
	return 0;
}
