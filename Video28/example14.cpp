#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<int,int>m{{1,11},{2,22},{3,33},{4,44},{1,111}};

	cout<<m.bucket_count()<<endl;

	m.reserve(20);
	cout<<m.bucket_count()<<endl;

	return 0;
}
