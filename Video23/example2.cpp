#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	
	unordered_set<string,hash<string>,equal_to<string>, allocator<string>> us{"a","bb","ccc","dddd","eeeeee"};
	unordered_set<string>::hasher hasher=us.hash_function();
	

	for(string i:us){
		cout<<i<<"\t: "<<hasher(i)<<endl;
	}
		
	return 0;
}
