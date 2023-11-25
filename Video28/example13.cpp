#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<int,int>m{	{1,11},
					{1,111},
					{2,22},
					{3,33},
					{1,1111},
					{4,44},
					{1,111}};

	for(auto i:m){
	cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}
	cout<<"---------\n";

	pair<unordered_multimap<int,int>::iterator,unordered_multimap<int,int>::iterator> p;
	p=m.equal_range(1);
	
	m.erase(p.first,p.second);

	for(auto i:m){
	cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}
	cout<<"---------\n";

	return 0;
}
