#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	
	unordered_set<char> s;

	cout<<s.bucket_count()<<endl;

	s.insert('a');
	cout<<s.bucket_count()<<endl;

	s.insert('b');
	cout<<s.bucket_count()<<endl;

	s.insert('c');
	cout<<s.bucket_count()<<endl;

	s.insert('d');
	cout<<s.bucket_count()<<endl;

	s.insert('e');
	cout<<s.bucket_count()<<endl;

	s.insert('f');
	cout<<s.bucket_count()<<endl;

	s.reserve(20);
	cout<<s.bucket_count()<<endl;

	cout<<s.max_bucket_count()<<endl;

	return 0;
}
