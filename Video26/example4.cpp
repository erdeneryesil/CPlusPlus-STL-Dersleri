#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int> s{11,22,33,44,11,11};

	cout<<s.bucket_count()<<endl;
	
	s.rehash(2);
	cout<<s.bucket_count()<<endl;

  	s.rehash(10);
	cout<<s.bucket_count()<<endl;	
	
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	return 0;
}
