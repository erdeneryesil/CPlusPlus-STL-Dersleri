#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<int,int>m{{1,11},{2,22},{3,33},{4,44},{11,111}};
	for(auto i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}

	cout<<"-----------\n";
	m.erase(1);	
	for(auto i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}

	cout<<"-----------\n";
	m.erase(m.find(4),m.find(11));
	for(auto i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}
	
	return 0;
}
