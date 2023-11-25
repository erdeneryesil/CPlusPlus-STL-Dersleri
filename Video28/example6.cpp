#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<string,char>m;
	cout<<m.bucket_count()<<endl;

	m.insert({"AA",'a'});
	cout<<m.bucket_count()<<endl;

	m.insert({"BB",'b'});
	cout<<m.bucket_count()<<endl;

	m.insert({"AA",'a'});
	cout<<m.bucket_count()<<endl;

	m.insert({"CC",'c'});
	cout<<m.bucket_count()<<endl;

	m.reserve(50);
	cout<<m.bucket_count()<<endl;

	cout<<m.max_bucket_count()<<endl;
	
	return 0;
}
