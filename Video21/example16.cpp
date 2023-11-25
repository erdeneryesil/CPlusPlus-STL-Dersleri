#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{2,'b'},{4,'d'},{5,'e'},{6,'f'}};

	auto itr=m.equal_range(2);	//{2,'b'},{4,'d'}
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;

	itr=m.equal_range(3);		//{4,'d'}, {4,'d'}
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;

	itr=m.equal_range(6);		//{6,'f'}, m.end()
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;

	itr=m.equal_range(7);		//m.end(), m.end()
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;
	
	return 0;
}

