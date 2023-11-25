#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{11,22,33,44};

	cout<<s.bucket_count()<<endl;
	
	s.rehash(2);
	cout<<s.bucket_count()<<endl;

  	s.rehash(10);
	cout<<s.bucket_count()<<endl;

	return 0;
}
