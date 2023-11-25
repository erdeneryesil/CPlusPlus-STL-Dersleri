#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int> s{22,33,11,44,11,11};

	cout<<s.count(11)<<endl;
	cout<<s.count(99)<<endl;
	
	return 0;
}

