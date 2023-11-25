#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{3,'b'},{5,'c'}};
	
	m.insert({1,'x'});
	m.insert({3,'y'});
	m.insert({5,'z'});
	//{1,'a'},{3,'b'},{5,'c'}		veri eklenmedi (aynı key)

	m.insert({2,'a'});
	m.insert({4,'b'});
	m.insert({6,'c'});
	//{1,'a'},{2,'a'},{3,'b'},{4,'b'},{5,'c'},{6,'c'} veri eklendi (farklı key)

	for(auto i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	return 0;
}
