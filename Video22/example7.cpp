#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char> m{{5,'z'}};	//{5,'z'}
	
	m.insert({5,'a'});			//{5,'z'},{5,'a'}
	m.insert(pair<int,char>(3,'e'));	//{3,'e'},{5,'z'},{5,'a'}
	
	auto itr=m.find(3);			//4, 3'ten sonra ekleneceği için
	m.insert(itr,{4,'b'});			//verimli
						//{3,'e'},{4,'b'},{5,'z'},{5,'a'}
						
	itr=m.find(5);
	m.insert(itr,{4,'a'});			//verimsiz
						//{3,'e'},{4,'b'},{4,'a'},{5,'z'},{5,'a'}
	
	for(pair<int,char> i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	multimap<int,char>m2;
	m2.insert(m.begin(),m.find(5));		//{3,'e'},{4,'b'},{4,'a'}

	for(pair<int,char> i:m2)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	return 0;
}
