#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<string> us{"a","bb","a","ccc","dddd","a","eeeeee","ccc"};
	
	for(string i:us){
		cout<<i<<endl;
	}

	return 0;
}
