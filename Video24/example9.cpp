#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s;
	
	cout<<"size\t\t:"<<s.size()<<endl;
	cout<<"bucket count\t:"<<s.bucket_count()<<endl;
	cout<<"load:factor\t:"<<s.load_factor()<<endl;
	cout<<"-----"<<endl;

	s.insert(99);
	cout<<"size\t\t:"<<s.size()<<endl;
	cout<<"bucket count\t:"<<s.bucket_count()<<endl;
	cout<<"load:factor\t:"<<s.load_factor()<<endl;
	cout<<"-----"<<endl;

	s.insert(11);
	cout<<"size\t\t:"<<s.size()<<endl;
	cout<<"bucket count\t:"<<s.bucket_count()<<endl;
	cout<<"load:factor\t:"<<s.load_factor()<<endl;
	cout<<"-----"<<endl;

	s.insert(55);
	cout<<"size\t\t:"<<s.size()<<endl;
	cout<<"bucket count\t:"<<s.bucket_count()<<endl;
	cout<<"load:factor\t:"<<s.load_factor()<<endl;
	cout<<"-----"<<endl;

	return 0;
}

