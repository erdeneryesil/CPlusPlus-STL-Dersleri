#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<int,char> m;
	
	cout<<"size\t\t:"<<m.size()<<endl;
	cout<<"bucket count\t:"<<m.bucket_count()<<endl;
	cout<<"load factor\t:"<<m.load_factor()<<endl;
	cout<<"-----"<<endl;

	m.insert({5,'s'});
	cout<<"size\t\t:"<<m.size()<<endl;
	cout<<"bucket count\t:"<<m.bucket_count()<<endl;
	cout<<"load:factor\t:"<<m.load_factor()<<endl;
	cout<<"-----"<<endl;

	m.emplace(9,'b');
	cout<<"size\t\t:"<<m.size()<<endl;
	cout<<"bucket count\t:"<<m.bucket_count()<<endl;
	cout<<"load:factor\t:"<<m.load_factor()<<endl;
	cout<<"-----"<<endl;

	m.insert({1,'r'});
	cout<<"size\t\t:"<<m.size()<<endl;
	cout<<"bucket count\t:"<<m.bucket_count()<<endl;
	cout<<"load:factor\t:"<<m.load_factor()<<endl;
	cout<<"-----"<<endl;

	return 0;
}
