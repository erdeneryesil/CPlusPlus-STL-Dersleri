#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<string,hash<string>,equal_to<string>, allocator<string>> us{"a","bb","a","ccc","dddd","a","eeeeee","ccc"};

	unordered_set<string>::hasher hasher=us.hash_function();
	
	for(string i:us){
		cout<<i<<"\t: "<<hasher(i)<<endl;
	}

	return 0;
}
