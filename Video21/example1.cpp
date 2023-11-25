#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char> m1{{22,'a'},{33,'b'},{11,'c'}};		//sıralama keye göre

	for(pair<int,char>i:m1)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	map<string,int,greater<string>>m2{{"cc",7},{"bb",9},{"aa",8}};	//sıralama keye göre

	for(pair<string,int> i:m2)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	map<char,string>m3;
	m3.insert( pair<char,string>('c',"yyy") );	
	m3.insert( pair<char,string>('a',"zzz") );
	m3.insert( pair<char,string>('b',"vvv") );

	for(auto i:m3)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	map<char,string>m4(m3.begin(),m3.end());
	
	for(auto i:m4)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	map<char,string>m5;
	m5.insert(m4.begin(),m4.end());

	for(auto i:m5)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	return 0;
}
