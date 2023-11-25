#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<int,int>m{{1,11},{2,22},{3,33},{4,44},{1,111}};

	for(auto i:m){
	cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}

	m.erase(1);

	cout<<"-----------\n";
	for(auto i:m){
	cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}

	m.erase(m.find(4),m.find(2));
	cout<<"-----------\n";
	for(auto i:m){
	cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}

	return 0;
}
