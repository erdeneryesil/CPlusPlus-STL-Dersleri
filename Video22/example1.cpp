#include<iostream>
#include<map>
using namespace std;

int main(){
	
	multimap<int,char> m1{{1,'a'},{2,'b'},{3,'c'},{2,'d'},{1,'a'}};		//sıralama keye göre, key de tekrarlı olabilir

	for(pair<int,char>i:m1)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	multimap<int,char,greater<int>> m2{{1,'a'},{2,'b'},{3,'c'},{2,'d'},{1,'a'}};		

	for(pair<int,char>i:m2)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	multimap<char,string>m3;
	m3.insert( pair<char,string>('c',"yyy") );	
	m3.insert( pair<char,string>('a',"zzz") );
	m3.insert( pair<char,string>('b',"vvv") );
	m3.insert( pair<char,string>('a',"xxx") );
	m3.insert( pair<char,string>('a',"zzz") );
	m3.insert( pair<char,string>('a',"yyy") );

	for(auto i:m3)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	multimap<char,string>m4(m3.begin(),m3.end());
	
	for(auto i:m4)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	multimap<char,string>m5;
	m5.insert(m4.begin(),m4.end());

	for(auto i:m5)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	return 0;
}
