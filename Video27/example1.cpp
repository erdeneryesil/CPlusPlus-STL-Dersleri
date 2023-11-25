#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<double,char> m{{1.1,'a'},{1.9,'c'}};
	
	
	m[2.2]='b';
	m[2.8]='d';
	m[3.0]='a';	//a(value) tekrar edebilir
	m[2.2]='t';	//2.22(key) tekrar etmez

	for(pair<double,char>i:m){
		cout<<i.first<<"\t"<<i.second<<endl;
	}
	
	return 0;
}
