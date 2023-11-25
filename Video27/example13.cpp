#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<int,int>m{{1,11},{2,22},{3,33},{4,44},{11,111}};

	for(auto i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}
	cout<<"---------\n";

	pair<unordered_map<int,int>::iterator,unordered_map<int,int>::iterator> p;
	p=m.equal_range(3);

	pair<int,int> lower=*p.first;
	int key1=lower.first;
	int value1=lower.second;

	cout<<key1<<"\t"<<value1<<endl;	

	pair<int,int>upper=*p.second;
	int key2=upper.first;
	int value2=upper.second;

	cout<<key2<<"\t"<<value2<<endl;
	
	return 0;
}
