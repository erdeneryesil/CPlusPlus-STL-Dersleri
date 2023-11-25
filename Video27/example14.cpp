#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<int,int>m{{1,11},{2,22},{3,33},{4,44},{11,111}};

	cout<<m.bucket_count()<<endl;

	m.rehash(10);
	cout<<m.bucket_count()<<endl;
	
	return 0;
}
