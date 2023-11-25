#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<string,char>m;
	cout<<m.bucket_count()<<endl;

	m["AA"]='a';
	cout<<m.bucket_count()<<endl;

	m["BB"]='b';
	cout<<m.bucket_count()<<endl;

	m["CC"]='c';
	cout<<m.bucket_count()<<endl;

	m["DD"]='d';
	cout<<m.bucket_count()<<endl;

	m.reserve(50);
	cout<<m.bucket_count()<<endl;

	cout<<m.max_bucket_count()<<endl;
	
	return 0;
}
