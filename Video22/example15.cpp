#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{2,'b'},{2,'c'},{2,'d'},{4,'e'},{4,'f'},{5,'g'},{6,'h'}};

	pair<multimap<int,char>::iterator, multimap<int,char>::iterator> itr;

	itr=m.equal_range(2);	//{2,'b'},{4,'e'}
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;

	itr=m.equal_range(3);		//{4,'e'},{4,'e'}
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;

	itr=m.equal_range(6);		//{6,'h'},m.end()
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;

	itr=m.equal_range(7);		//m.end(),m.end()
	cout<<itr.first->first<<"-"<<itr.first->second<<", ";
	cout<<itr.second->first<<"-"<<itr.second->second<<endl;
	
	return 0;
}
