#include<iostream>
#include<unordered_set>
using namespace std;

struct YeniHash {
	size_t operator()(const string & str) const {
		return str.length();	
	}
};

struct YeniEqualTo{
	bool operator()(const string str1, const string str2)const{
		if(str1.length()==str2.length())return true;
		else return false;
	}
};

int main(){

	unordered_multiset<string,YeniHash,YeniEqualTo, allocator<string>> us{"a","bb","a","ccc","dddd","a","eeeeee","ccc"};

	YeniHash hasher=us.hash_function();

	for(string i:us){
		cout<<i<<"\t: "<<hasher(i)<<endl;
	}

	return 0;
}
