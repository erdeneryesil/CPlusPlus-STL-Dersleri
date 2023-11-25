#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m1{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'}};
	map<int,char>m2;
	m2=m1;

	m1[6]='X';

	for(auto i:m1)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	for(auto i:m2)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	return 0;
}
