#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<double,string>m{
					{1.11,"aaa"},
					{2.22,"bbb"},
					{3.33,"ccc"},
					{4.44,"ddd"},
					{1.11,"eee"}};
	for(auto i:m){
		cout<<i.first<<"\t"<<i.second<<endl;
	}
	cout<<"-----\n";
	
	cout<<m.count(1.11)<<endl;
	cout<<m.count(2.25)<<endl;

	auto itr=m.find(1.11);
	cout<<itr->first<<"\t"<<itr->second<<endl;

	itr++;
	cout<<itr->first<<"\t"<<itr->second<<endl;

	itr=m.find(2.25);
	cout<<itr->first<<"\t"<<itr->second<<endl;
	
	return 0;
}
