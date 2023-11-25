#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{22,33,11,44};

	cout<<s.count(11)<<endl;
	cout<<s.count(99)<<endl;
	
	return 0;
}
