#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{3,'b'},{5,'c'}};
	
	m.insert({1,'x'});
	m.insert({3,'y'});
	m.insert({5,'z'});
	//{1,'a'},{1,'x'},{3,'b'},{3,'y'},{5,'c'},{5,'z'}		veri eklendi (aynı key)
	for(auto i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	m.insert({2,'a'});
	m.insert({4,'b'});
	m.insert({6,'c'});
	//{1,'a'},{1,'x'},{2,'a'},{3,'b'},{3,'y'},{4,'b'},{5,'c'},{5,'z'},{6,'c'} veri eklendi (farklı key)

	for(auto i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	return 0;
}
