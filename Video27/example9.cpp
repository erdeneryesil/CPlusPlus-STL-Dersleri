#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<int,int>m{{1,11},{2,22},{3,33},{4,44},{11,111}};

	for(auto i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}

	cout<<"-----------------"<<endl;

	unordered_map<int,int>::iterator itr=m.begin();
	cout<<itr->first<<"\t"<<itr->second<<endl;
	
	itr++;
	cout<<itr->first<<"\t"<<itr->second<<endl;
	
	unordered_map<int,int>::local_iterator locitr=m.begin(1);
	cout<<locitr->first<<"\t"<<locitr->second<<endl;

	locitr++;
	cout<<locitr->first<<"\t"<<locitr->second<<endl;

	return 0;
}
