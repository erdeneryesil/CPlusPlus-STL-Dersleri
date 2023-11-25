#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<int,int>m{{1,11},{2,22},{3,33},{4,44},{1,111}};

	for(int i=0;i<m.bucket_count();i++){
		cout<<"bucket"<<i<<": ";
		for(auto locitr=m.begin(i);locitr!=m.end(i);locitr++){
			cout<<"("<<locitr->first<<","<<locitr->second<<") ";
		}
		cout<<"\n";
	}
	
	return 0;
}
