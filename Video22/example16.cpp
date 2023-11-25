#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m1{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'},{6,'g'}};
	multimap<int,char>m2;
	m2=m1;

	auto itr=m1.find(6);		//*itr={6,'f'}
	itr->second='X';		//*itr={6,'X'}

	for(auto i:m1)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	for(auto i:m2)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	return 0;
}

